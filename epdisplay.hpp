
#ifndef EPDYSPLAY_PURE
#define EPDYSPLAY_PURE

#include <arduino.h>
#include <SPI.h>

#include "bitmap.hpp"
#include "font.hpp"

const uint8_t black = 0x00;
const uint8_t white = 0xFF;

const bool VERTICAL = true, HORIZONTAL = false;

template <
	size_t width,
	size_t height,
	size_t reset_pin = 8,
	size_t dc_pin = 9,
	size_t cs_pin = 10,
	size_t busy_pin = 7
> class EPDisplay {

	public:

	static void wake() {

		prepare();
		reset();

		waitUntilIdle();
		sendCommand(0x12); // SWRESET
		waitUntilIdle();

		sendCommand(0x01); // driver output control
		sendData(0xC7);
		sendData(0x00);
		sendData(0x00);

		sendCommand(0x11); // data entry mode
		sendData(0x03);

		sendCommand(0x44);
		// x must be the multiple of 8 or the last 3 bits will be ignored
		sendData((0 >> 3) & 0xFF);
		sendData((200 >> 3) & 0xFF);
		sendCommand(0x45);
		sendData(0 & 0xFF);
		sendData((0 >> 8) & 0xFF);
		sendData(200 & 0xFF);
		sendData((200 >> 8) & 0xFF);

		sendCommand(0x3C); // BorderWaveform
		sendData(0x01);

		sendCommand(0x18);
		sendData(0x80);

		sendCommand(0x22); // load temperature and waveform setting
		sendData(0XB1);
		sendCommand(0x20);

		sendCommand(0x4E); // set RAM x address count to 0
		sendData(0x00);
		sendCommand(0x4F); // set RAM y address count to 0x199
		sendData(0xC7);
		sendData(0x00);
		waitUntilIdle();

	}

	static void sendCommand(uint8_t command) {
		digitalWrite(dc_pin, LOW);
		spiTransfer(command);
	}
	static void sendData(uint8_t data) {
		digitalWrite(dc_pin, HIGH);
		spiTransfer(data);
	}
	static void waitUntilIdle() {
		// LOW: idle, HIGH: busy
		while(digitalRead(busy_pin) == 1) delay(100);
		delay(200);
	}
	static void reset() {
		digitalWrite(reset_pin, HIGH);
		delay(200);
		digitalWrite(reset_pin, LOW); // module reset
		delay(10);
		digitalWrite(reset_pin, HIGH);
		delay(200);
	}
	static void clear(uint8_t color = white) {
		size_t w = width / 8 + (width % 8 != 0); // width (in bytes)
		sendCommand(0x24);
		for (size_t j = 0; j < height; j++)
			for (size_t i = 0; i < w; i++)
				sendData(color);
		displayFrame();
	}
	static void display(const uint8_t * buffer) {
		size_t w = width / 8 + (width % 8 != 0); // width (in bytes)
		if (buffer != nullptr) {
			sendCommand(0x24);
			for (size_t j = 0; j < height; j++)
				for (size_t i = 0; i < w; i++)
					sendData(pgm_read_byte(& buffer[i + j * w]));
		}
		displayFrame();
	}
	static void displayPartBaseImage(const uint8_t * buffer) {
		size_t w = width / 8; // width (in bytes 8 pixel aligned)
		if (buffer != nullptr) {
			sendCommand(0x24);
			for (size_t j = 0; j < height; j++)
				for (size_t i = 0; i < w; i++)
					sendData(pgm_read_byte(& buffer[i + j * w]));
			sendCommand(0x26);
			for (size_t j = 0; j < height; j++)
				for (size_t i = 0; i < w; i++)
					sendData(pgm_read_byte(& buffer[i + j * w]));
		}
		displayPartFrame();
	}
	static void displayPartBaseImage(uint8_t color = white) {
		size_t w = width / 8 + (width % 8 != 0); // width (in bytes)
		sendCommand(0x24);
		for (size_t j = 0; j < height; j++)
			for (size_t i = 0; i < w; i++)
				sendData(color);
		sendCommand(0x26);
		for (size_t j = 0; j < height; j++)
			for (size_t i = 0; i < w; i++)
				sendData(color);
		displayPartFrame();
	}
	static void displayPart(const uint8_t * buffer) {
		size_t w = width / 8 + (width % 8 != 0); // width (in bytes)
		if (buffer != nullptr) {
			sendCommand(0x24);
			for (size_t j = 0; j < height; j++)
				for (size_t i = 0; i < w; i++)
					sendData(pgm_read_byte(& buffer[i + j * w]));
		}
		displayPartFrame();
	}
	static void displayPart(const uint8_t * buffer, size_t w, size_t h) {
		w = w / 8 + (w % 8 != 0); // width (in bytes)
		if (buffer != nullptr) {
			sendCommand(0x24);
			for (size_t j = 0; j < h; j++)
				for (size_t i = 0; i < w; i++)
					sendData(pgm_read_byte(& buffer[i + j * w]));
		}
		displayPartFrame();
	}
	static void setFrameMemory(
		const uint8_t * buffer, size_t x, size_t y, size_t w, size_t h
	) {
		size_t x_end, y_end;
		if (buffer == nullptr) return;
		x &= 0xF8; w &= 0xF8;
		if (x + w >= width) x_end = width - 1;
		else x_end = x + w - 1;
		if (y + h >= height) y_end = height - 1;
		else y_end = y + h - 1;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		for (size_t j = 0; j < y_end - y + 1; j++)
			for (size_t i = 0; i < (x_end - x + 1) / 8; i++)
				sendData(buffer[i + j * (w / 8)]);
	}
	static void displayFrame() {
		// display refresh
		sendCommand(0x22);
		sendData(0xF7);
		sendCommand(0x20);
		waitUntilIdle();
	}
	static void displayPartFrame() {
		sendCommand(0x22);
		sendData(0xFF);
		sendCommand(0x20);
		waitUntilIdle();
	}

	static void sleep() {
		sendCommand(0x10); // enter deep sleep
		sendData(0x01);
		delay(100); // set to 200 in case of problems
		digitalWrite(reset_pin, LOW);
	}

	/// draws raw (x and w aligned) bitmap data
	static void draw(uint8_t * data, size_t x, size_t y, size_t w, size_t h) {
		if (data == nullptr) return;
		size_t x_end, y_end;
		const size_t size = w * h / 8 + (w * h % 8 != 0);
		// x must be the multiple of 8 or the last 3 bits will be ignored
		x &= 0xF8; w &= 0xF8;
		x_end = x + w - 1; y_end = y + h - 1;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		const uint8_t * ptr = data;
		for (size_t i = 0; i < size; i++) {
			sendData(* ptr);
			ptr++;
		}
    }

	/// draws raw (x and w aligned) bitmap data in PROGMEM
	static void draw(const uint8_t * data, size_t x, size_t y, size_t w, size_t h) {
		if (data == nullptr) return;
		size_t x_end, y_end;
		const size_t size = w * h / 8 + (w * h % 8 != 0);
		// x must be the multiple of 8 or the last 3 bits will be ignored
		x &= 0xF8; w &= 0xF8;
		x_end = x + w - 1; y_end = y + h - 1;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		for (size_t i = 0; i < size; i++)
			sendData(pgm_read_byte(& data[i]));
    }

	/// draws a (x and w aligned) PROGMEM bitmap
	static void draw(bitmap bitmap, size_t x, size_t y) {
		if (bitmap.data == nullptr || bitmap.w % 8 != 0) return;
		size_t x_end, y_end;
		const size_t size = bitmap.w * bitmap.h / 8;
		// x must be the multiple of 8 or the last 3 bits will be ignored
		x &= 0xF8; x_end = x + bitmap.w - 1; y_end = y + bitmap.h - 1;
		if (x_end >= width || y_end >= height) return;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		// send the image data
		const uint8_t * ptr = bitmap.data;
		for (size_t i = 0; i < size; i++) sendData(pgm_read_byte(ptr++));
    }

	/// draws a (x and w aligned) PROGMEM scaled bitmap
	/// (requires width / 8 bytes of stack space)
	template <size_t SCALE = 1>
	static void draw(bitmap bitmap, size_t x, size_t y) {
		static_assert(SCALE > 0, "SCALE greater than 0");
		if (bitmap.data == nullptr || bitmap.w % 8 != 0) return;
		size_t scaled_w = bitmap.w * SCALE, scaled_h = bitmap.h * SCALE;
		x &= 0xF8;
		size_t x_end = x + scaled_w - 1;
		size_t y_end = y + scaled_h - 1;
		if (x_end >= width || y_end >= height) return;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		uint8_t scanline[width / 8] = { white }; // 0xFF
		for (size_t i = 0; i < bitmap.h; i++) {
			for (size_t j = 0, J = 0; j < bitmap.w; j++) {
				uint8_t p = bitRead(pgm_read_byte(
					bitmap.data + (i * bitmap.w + j) / 8
				), 7 - (j % 8));
				for (size_t k = 0; k < SCALE; k++, J++)
					bitWrite(scanline[J / 8], 7 - (J % 8), p);
			}
			for (size_t k = 0; k < SCALE; k++)
				for (size_t j = 0; j < scaled_w / 8; j++)
					sendData(scanline[j]);
		}
	}

	/// draws a debug vertical or horizontal line
	/// if you need to cross, draw the vertical line first
	template <bool ORIENTATION>
	static void line(size_t k, size_t a = 0, size_t b = 200) {
		size_t x, y, x_end, y_end, data;
		if (ORIENTATION == HORIZONTAL) {
			x = a; y = k; x_end = a + b - 1; y_end = k; data = 0;
		} else { // VERTICAL
			data = ~(1 << (7 - (k % 8)));
			x = k; y = a; x_end = k; y_end = a + b - 1;
		}
		if (x_end >= width || y_end >= height) return;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		for (size_t i = 0; i < (a - b) / 8; i++) sendData(data);
	}

	/// draws (x and w aligned) text
	static void text(char c, size_t x, size_t y, font & f) {
		const uint8_t * data = f[c]; // program memory
		if (!data) return; // invalid character or whitespace
		draw(data, x, y, f.pw, f.h);
	}

	/// draws (x aligned) text (requires width / 8 bytes of stack space)
	static void text(const char * string, size_t x, size_t y, font & f, bool wrap = false) {
		if (string == nullptr || string[0] == '\0') return;
		char * c = (char *) string, * s = c;
		const size_t max_length = (width - (x & 0xF8)) / (f.w + f.hs); 
		size_t length = 0;
		while (* c != '\0') {
			if (length == max_length || * c == '\n') { // x-overflow & wrap
				text_line(s, length, x, y, f);
				y += f.h + f.vs;
				if (y >= height) return; // y-overflow
				length = (* c != '\n'); // add overflow to length
				s =  c + (* c == '\n'); // skip '\n'
			} else length++;
			c++;
		}
		if (* s != '\0') text_line(s, length, x, y, f);
	}

	/// draw on the display using the given shader function
	/// the given function will be called with the x and y coordinates
	/// of each pixel on the display and should return a boolean,
	/// true for black, false for white
	static void shader(bool (* f)(size_t, size_t)) {
		for (size_t i = 0; i < height; i++) {
			uint8_t byte = 0;
			for (size_t j = 0; j < width; j++) {
				if (j % 8 == 0) byte = 0;
				bitWrite(byte, 7 - (j % 8), f(j, i));
				if (j % 8 == 7) sendData(byte);
			}
		}
	}

	private:

	/// draws (x aligned) text on a line
	static void text_line(char * s, size_t l, size_t x, size_t y, font & f) {
		const size_t bl = (f.w + f.hs) * l - (l > 1 ? f.hs : 0);
		const size_t bytes = bl / 8 + (bl % 8 != 0);
		x &= 0xF8;
		size_t x_end = x + bl - 1, y_end = y + f.h - 1;
		if (x_end >= width || y_end >= height) return;
		setMemoryArea(x, y, x_end, y_end);
		setMemoryPointer(x, y);
		sendCommand(0x24);
		uint8_t scanline[width / 8] = { white };
		for (size_t i = 0; i < f.h; i++) {
			memset(scanline, white, width / 8);
			for (size_t c = 0, bx = 0; c < l; c++, bx += f.w + f.hs) {
				if (s[c] == ' ') continue;
				for (size_t j = 0; j < f.w; j++) bitWrite(
					scanline[(bx + j) / 8],
					7 - ((bx + j) % 8),
					f.pixel(s[c], j, i)
				);
			}
			for (size_t j = 0; j < bytes; j++) sendData(scanline[j]);
		}
	}

	/// weird mode, I'm not sure what it does
	static void lDisplay() {

		prepare();
		reset();

		waitUntilIdle();
		sendCommand(0x12); // SWRESET
		waitUntilIdle();

		sendCommand(0x01); // driver output control
		sendData(0xC7);
		sendData(0x00);
		sendData(0x01);

		sendCommand(0x11); // data entry mode
		sendData(0x01);

		sendCommand(0x44); // set Ram-X address start / end position
		sendData(0x00);
		sendData(0x18);    // 0x0C --> (18 + 1) * 8 = 200

		sendCommand(0x45); // set Ram-Y address start / end position
		sendData(0xC7);    // 0xC7 --> (199 + 1) = 200
		sendData(0x00);
		sendData(0x00);
		sendData(0x00);

		sendCommand(0x3C); // BorderWaveform
		sendData(0x01);

		sendCommand(0x18);
		sendData(0x80);

		sendCommand(0x22); // load temperature and waveform setting
		sendData(0xB1);
		sendCommand(0x20);

		sendCommand(0x4E); // set RAM x address count to 0
		sendData(0x00);
		sendCommand(0x4F); // set RAM y address count to 0X199
		sendData(0xC7);
		sendData(0x00);
		waitUntilIdle();

	}

	static void setMemoryArea(size_t x_start, size_t y_start, size_t x_end, size_t y_end) {
		sendCommand(0x44);
		// x must be the multiple of 8 or the last 3 bits will be ignored
		sendData((x_start >> 3) & 0xFF);
		sendData((x_end >> 3) & 0xFF);
		sendCommand(0x45);
		sendData(y_start & 0xFF);
		sendData((y_start >> 8) & 0xFF);
		sendData(y_end & 0xFF);
		sendData((y_end >> 8) & 0xFF);
	}
	static void setMemoryPointer(size_t x, size_t y) {
		sendCommand(0x4E);
		// x must be the multiple of 8 or the last 3 bits will be ignored
		sendData((x >> 3) & 0xFF);
		sendCommand(0x4F);
		sendData(y & 0xFF);
		sendData((y >> 8) & 0xFF);
		waitUntilIdle();
	}

	static void spiTransfer(uint8_t data) {
		digitalWrite(cs_pin, LOW);
		SPI.transfer(data);
		digitalWrite(cs_pin, HIGH);
	}
	static void prepare() {
		pinMode(   cs_pin, OUTPUT);
		pinMode(reset_pin, OUTPUT);
		pinMode(   dc_pin, OUTPUT);
		pinMode( busy_pin,  INPUT);
		SPI.begin();
		SPI.beginTransaction(SPISettings(2000000, MSBFIRST, SPI_MODE0));
	}

};

#endif
