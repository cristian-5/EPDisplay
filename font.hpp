
#ifndef FONT_PURE
#define FONT_PURE

/// monospaced font class with bitmap data layed as follows:
/// ABCDEFGHIJKLMNOPQRSTUVWXYZ
/// abcdefghijklmnopqrstuvwxyz
/// "#$%&'?!*+,-./0123456789:;
class font {
public:
	const uint8_t * data;
	size_t w, h, pw, hs, vs;
	font(const uint8_t * d, size_t w, size_t h, size_t hs = 0, size_t vs = 0) {
		this -> data = d;
		this -> w = w;
		this -> h = h;
		this -> hs = hs;
		this -> vs = vs;
		this -> pw = w % 8 == 0 ? w : w + (8 - w % 8);
	}
	static const size_t max_w = 16, max_h = 24;
	inline const uint8_t * operator [] (char c) {
		if (c >= 'A' && c <= 'Z') return & data[(c - 'A') * pw * h / 8];
		if (c >= 'a' && c <= 'z') return & data[(c - 'a' + 26) * pw * h / 8];
		if (c == '?') return & data[58 * pw * h / 8];
		if (c == '!') return & data[59 * pw * h / 8];
		if (c >= '"' && c <= ';') return & data[(c - '"' + 52) * pw * h / 8];
		return nullptr;
	}
	bool pixel(char c, size_t x, size_t y) {
		const uint8_t * d = this -> operator [] (c);
		if (d == nullptr) return false;
		return bitRead(pgm_read_byte(& d[(y * pw + x) / 8]), 7 - (x % 8));
	}
};

enum font_style { normal, bold, italic, bold_italic };

#endif
