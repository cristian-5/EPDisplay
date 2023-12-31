
#ifndef COURIER_NEW_16_FONT_PURE
#define COURIER_NEW_16_FONT_PURE

#include <avr/pgmspace.h>

#include "../../font.hpp"

const uint8_t Courier_New_16_TABLE[] PROGMEM {
	// UPPERCASE LATIN LETTERS
	0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xF0, 0xFF, 0xF6, 0xFF, 0xE6, 0x7F, 0xE6, 0x7F, 0xE0, 0x7F, 0xCF, 0x3F, 0xCF, 0x3F, 0x86, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // A
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC0, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // B
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xBF, 0xCF, 0x3F, 0x9F, 0xBF, 0x9F, 0xFF, 0x9F, 0xFF, 0x9F, 0xFF, 0x9F, 0xBF, 0xCF, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // C
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xCE, 0x7F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCE, 0x7F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // D
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xCF, 0x7F, 0xCF, 0x7F, 0xCD, 0xFF, 0xC1, 0xFF, 0xCD, 0xFF, 0xCF, 0x7F, 0xCF, 0x7F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // E
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xCF, 0xBF, 0xCF, 0xBF, 0xCD, 0xFF, 0xC1, 0xFF, 0xCD, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // F
	0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x7F, 0xCE, 0x7F, 0x9F, 0x7F, 0x9F, 0xFF, 0x9F, 0xFF, 0x98, 0x3F, 0x9E, 0x7F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // G
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC0, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0x84, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // H
	0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // I
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0x9C, 0xFF, 0x9C, 0xFF, 0x9C, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // J
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xCC, 0xFF, 0xC9, 0xFF, 0xC3, 0xFF, 0xC1, 0xFF, 0xCC, 0xFF, 0xCE, 0x7F, 0x86, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // K
	0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xBF, 0xE7, 0xBF, 0xE7, 0xBF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // L
	0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x9F, 0x3F, 0x8E, 0x3F, 0x84, 0x3F, 0x95, 0x3F, 0x91, 0x3F, 0x9B, 0x3F, 0x9F, 0x3F, 0x04, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // M
	0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x3F, 0xCE, 0x7F, 0xC6, 0x7F, 0xC2, 0x7F, 0xCA, 0x7F, 0xC8, 0x7F, 0xCC, 0x7F, 0xCE, 0x7F, 0x86, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // N
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // O
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC0, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // P
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0xCE, 0x7F, 0xE0, 0xFF, 0xF3, 0x3F, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Q
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC1, 0xFF, 0xCC, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0x83, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // R
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC7, 0xFF, 0xE0, 0xFF, 0xFC, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // S
	0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xB3, 0x7F, 0xB3, 0x7F, 0xB3, 0x7F, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // T
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // U
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xF5, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // V
	0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x1F, 0x9F, 0x3F, 0x9B, 0x3F, 0x91, 0x3F, 0x91, 0x3F, 0xD5, 0x7F, 0xC4, 0x7F, 0xC4, 0x7F, 0xCE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // W
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xE4, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xE4, 0xFF, 0xCE, 0x7F, 0x84, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // X
	0xFF, 0xFF, 0xFF, 0xFF, 0x86, 0x1F, 0xCF, 0x3F, 0xE6, 0x7F, 0xF0, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Y
	0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xDE, 0x7F, 0xDC, 0xFF, 0xF9, 0xFF, 0xFB, 0xFF, 0xF3, 0xFF, 0xE7, 0x7F, 0xCF, 0x7F, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Z
	// lowecase LATIN LETTERS
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFE, 0x7F, 0xFE, 0x7F, 0xE0, 0x7F, 0xCE, 0x7F, 0xCC, 0x7F, 0xE2, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // a
	0xFF, 0xFF, 0x8F, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0xC8, 0xFF, 0xC6, 0x7F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCF, 0x3F, 0xC6, 0x7F, 0x88, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // b
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x7F, 0xCE, 0x7F, 0x9F, 0x7F, 0x9F, 0xFF, 0x9F, 0x7F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // c
	0xFF, 0xFF, 0xFC, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xE2, 0x7F, 0xCC, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0xCC, 0x7F, 0xE2, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // d
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0x9F, 0x3F, 0x80, 0x3F, 0x9F, 0xFF, 0xCF, 0x3F, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // e
	0xFF, 0xFF, 0xF8, 0x1F, 0xF3, 0xFF, 0xF3, 0xFF, 0xC0, 0x7F, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // f
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE2, 0x3F, 0xCC, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0xCC, 0x7F, 0xE2, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // g
	0xFF, 0xFF, 0x8F, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0xC8, 0xFF, 0xC6, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0x84, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // h
	0xFF, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 0xE1, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // i
	0xFF, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // j
	0xFF, 0xFF, 0x8F, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0xC8, 0x7F, 0xC9, 0xFF, 0xC3, 0xFF, 0xC3, 0xFF, 0xC9, 0xFF, 0xCC, 0xFF, 0x88, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // k
	0xFF, 0xFF, 0xE1, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // l
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xC9, 0x3F, 0xC9, 0x3F, 0xC9, 0x3F, 0xC9, 0x3F, 0xC9, 0x3F, 0x89, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // m
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0xFF, 0xC6, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0x84, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // n
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0x9F, 0x3F, 0x9F, 0x3F, 0x9F, 0x3F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // o
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0xFF, 0xC6, 0x7F, 0xCF, 0x3F, 0xCF, 0x3F, 0xCF, 0x3F, 0xC6, 0x7F, 0xC8, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // p
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE2, 0x3F, 0xCC, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0x9E, 0x7F, 0xCC, 0x7F, 0xE2, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, // q
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x7F, 0xE3, 0x3F, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // r
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xCE, 0x7F, 0xC3, 0xFF, 0xE0, 0xFF, 0xFC, 0x7F, 0xCE, 0x7F, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // s
	0xFF, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0x80, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0x7F, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // t
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCC, 0x7F, 0xE2, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // u
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE4, 0xFF, 0xE4, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // v
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x1F, 0x9F, 0x3F, 0x9B, 0x3F, 0x91, 0x3F, 0xC4, 0x7F, 0xC4, 0x7F, 0xCE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // w
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x3F, 0xE4, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xF1, 0xFF, 0xE4, 0xFF, 0x84, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // x
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x86, 0x1F, 0xCF, 0x3F, 0xE6, 0x7F, 0xE6, 0x7F, 0xF4, 0xFF, 0xF0, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF3, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // y
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xDE, 0x7F, 0xFC, 0xFF, 0xF1, 0xFF, 0xE7, 0xFF, 0xCF, 0x7F, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // z
	// SYMBOLS & NUMBERS
	0xFF, 0xFF, 0xFF, 0xFF, 0xE2, 0x3F, 0xE2, 0x3F, 0xF7, 0x7F, 0xF7, 0x7F, 0xF7, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // "
	0xFF, 0xFF, 0xF2, 0x7F, 0xF2, 0x7F, 0xF2, 0x7F, 0xF2, 0x7F, 0xC0, 0x3F, 0xE4, 0xFF, 0xC0, 0x3F, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // #
	0xFB, 0xFF, 0xE0, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC7, 0xFF, 0xE1, 0xFF, 0xF0, 0xFF, 0xFC, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xC0, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // $
	0xFF, 0xFF, 0xE7, 0xFF, 0xDB, 0xFF, 0xDB, 0xFF, 0xE7, 0x3F, 0xF8, 0x7F, 0xE1, 0xFF, 0xCE, 0x7F, 0xFD, 0xBF, 0xFD, 0xBF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // %
	0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xF3, 0xFF, 0xE2, 0x7F, 0xC8, 0xFF, 0xCC, 0xFF, 0xE2, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // &
	0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xF8, 0xFF, 0xFD, 0xFF, 0xFD, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // '
	0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xFE, 0x7F, 0xF8, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // ?
	0xFF, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // !
	0xFF, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xC0, 0x3F, 0xC0, 0x3F, 0xF0, 0xFF, 0xE0, 0x7F, 0xE6, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // *
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 0xC0, 0x7F, 0xFB, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // +
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFB, 0xFF, 0xF3, 0xFF, 0xF7, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // ,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // -
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // .
	0xFF, 0x3F, 0xFF, 0x3F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFC, 0xFF, 0xFC, 0xFF, 0xF9, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xCF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // /
	0xFF, 0xFF, 0xF1, 0xFF, 0xE4, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE4, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 0
	0xFF, 0xFF, 0xF9, 0xFF, 0xC1, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 1
	0xFF, 0xFF, 0xF0, 0xFF, 0xE6, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xFC, 0xFF, 0xF9, 0xFF, 0xF3, 0xFF, 0xE7, 0xFF, 0xCF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 2
	0xFF, 0xFF, 0xC0, 0xFF, 0x9E, 0x7F, 0xFE, 0x7F, 0xFC, 0xFF, 0xE0, 0xFF, 0xFC, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0x9E, 0x7F, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 3
	0xFF, 0xFF, 0xF8, 0xFF, 0xF8, 0xFF, 0xF0, 0xFF, 0xF4, 0xFF, 0xE4, 0xFF, 0xEC, 0xFF, 0xCC, 0xFF, 0xC0, 0x7F, 0xFC, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 4
	0xFF, 0xFF, 0xE0, 0x7F, 0xE7, 0xFF, 0xE7, 0xFF, 0xE7, 0xFF, 0xE0, 0xFF, 0xEE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xDE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 5
	0xFF, 0xFF, 0xF8, 0x7F, 0xE3, 0xFF, 0xE7, 0xFF, 0xCF, 0xFF, 0xC8, 0xFF, 0xC6, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE6, 0x7F, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 6
	0xFF, 0xFF, 0x80, 0xFF, 0xBC, 0xFF, 0xFC, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF9, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 7
	0xFF, 0xFF, 0xE0, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE0, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xCE, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 8
	0xFF, 0xFF, 0xE1, 0xFF, 0xCC, 0xFF, 0xCE, 0x7F, 0xCE, 0x7F, 0xCC, 0x7F, 0xE2, 0x7F, 0xFE, 0x7F, 0xFC, 0xFF, 0xF8, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 9
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // :
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFB, 0xFF, 0xF7, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // ;
};

font Courier_New_16(Courier_New_16_TABLE, 11, 16);

#endif
