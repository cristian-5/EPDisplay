
# EPDisplay

Sofware controller for e-paper Display 1.54" B/W 200x200 WaveShare for Arduino.

To initialize the display use the `using EPD = EPDisplay<200, 200>;` directive.\
To start using the display call `EPD::wake()`, `EPD::clear()`.\
To begin drawing use `EPD::displayPartBaseWhiteImage()` while to refresh the
display use `EPD::displayPartFrame()`.\
Don't forget to call `EPD::sleep()` after usage to set deep-sleep mode.

### Bitmaps

Bitmaps are stored in the `bitmap` data structure as a 1-dimensional array of
bytes, along with width (in pixels, divisible by 8) and height (not restricted).
That is problematic because 1 byte corresponds to 8 pixels hence pictures can
only be drawn x-aligned and every padding bit will override the existing pixels
on the screen so keep that in mind.

> There is a **Deno Javascript** file `resources/png2bitmap.js` that is able to
> convert (`RGBA` or `RGBA` color space, `8-bit` depth) `.png` pictures into
> header files that can be directly included and used in the code.

```cpp

#include "epdisplay.hpp"
#include "bitmaps/casper.hpp"

/// e-Paper Display 1.54" 200x200 W / B Waveshare
using EPD = EPDisplay<200, 200>;

void setup() {

	EPD::wake();
	EPD::clear();
	EPD::displayPartBaseWhiteImage();

	EPD::draw(casper_BITMAP, 8, 8);
	EPD::draw<2>(casper_BITMAP, 32, 32); // scale 2x
	EPD::draw<3>(casper_BITMAP, 72, 72); // scale 3x

	EPD::displayPartFrame();
	EPD::sleep();

}

void loop() { }

```

### Fonts

Fonts are stored in the (monospaced) `font` data structure along with real width
and height (without padding, in pixels) and vertical and horizontal spacing.
The padded width is calculated automatically.

> **Courier New** (`8pt`, `12pt`, `16pt`, `20pt` and `24pt`) is provided here.

The text bitmap data needs to contain the following characters with this
specific order, to minimize `PROGMEM` space:

```
ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
"#$%&'?!*+,-./0123456789:;
```

> As you can see it resembles chunks of **ASCII** but with the difference
> being the `?` and `!` characters in place of `(` and `)`.

Text can be drawn using the `EPD::text` method which calulates line-width and
wraps when necessary as well as when it finds `\n` **LF**.

```cpp

#include "epdisplay.hpp"
#include "fonts/Courier_New/Courier_New.hpp"

/// e-Paper Display 1.54" 200x200 W / B Waveshare
using EPD = EPDisplay<200, 200>;

void setup() {

	EPD::wake();
	EPD::clear();
	EPD::displayPartBaseWhiteImage();

	EPD::text("Hello World!", 0, 0, Courier_New(20));

	EPD::displayPartFrame();
	EPD::sleep();

}

void loop() { }

```
