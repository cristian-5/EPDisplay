
#ifndef COURIER_NEW_FONT_PURE
#define COURIER_NEW_FONT_PURE

#include "Courier_New_8.hpp"
#include "Courier_New_12.hpp"
#include "Courier_New_16.hpp"
#include "Courier_New_20.hpp"
#include "Courier_New_24.hpp"

font & Courier_New(size_t pt) {
	switch (pt) {
		case  8: return Courier_New_8;
		case 12: return Courier_New_12;
		case 16: return Courier_New_16;
		case 20: return Courier_New_20;
		case 24: return Courier_New_24;
		default: return Courier_New_16;
	}
}

#endif
