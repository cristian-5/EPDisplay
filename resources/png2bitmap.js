
import { ColorType, decode } from "https://deno.land/x/pngs@0.1.1/mod.ts";

const args = Deno.args;
if (args.length !== 1) {
	console.error("usage: deno run --allow-read --allow-write png2bitmap.js <input.png>");
	Deno.exit(1);
}

const name = args[0].split("/").pop().split(".")[0].replace(/[^a-zA-Z0-9]/g, "_");

const png = decode(Deno.readFileSync(args[0]));

if (png.width % 8 !== 0) {
	console.warn("warning: PNG width is not multiple of 8!");
	console.warn("The width will be padded with white pixels.");
}

const final_w = png.width + (png.width % 8 === 0 ? 0 : (8 - (png.width % 8)));
const buffer = new Uint8Array(png.height * final_w / 8);

if (png.colorType !== ColorType.RGBA && png.colorType !== ColorType.RGB) {
	console.error("error: only RGBA and RGB PNGs are supported!");
	Deno.exit(1);
}

const luma = (r, g, b) => (0.299 * r + 0.587 * g + 0.114 * b);

for (let y = 0; y < png.height; y++) {
	for (let x = 0; x < png.width; x++) {
		const j = png.width * y + x;
		const fj = final_w * y + x;
		const i = j * (png.colorType === ColorType.RGBA ? 4 : 3);
		const l = luma(...png.image.slice(i, i + 3)) >= 128 ? 1 : 0;
		buffer[Math.floor(fj / 8)] |= (l << (7 - (fj % 8)));
	}
	for (let x = png.width; x < final_w; x++) { // pad with white pixels
		const fj = final_w * y + x;
		buffer[Math.floor(fj / 8)] |= (1 << (7 - (fj % 8)));
	}
}

Array.prototype.chunks = function (n) {
    if (!this.length) return [];
    return [ this.slice(0, n) ].concat(this.slice(n).chunks(n));
};

let hex_buffer = [];
for (let i = 0; i < buffer.length; i++)
	hex_buffer.push("0x" + buffer[i].toString(16).padStart(2, "0").toUpperCase());
hex_buffer = hex_buffer.chunks(8);

const output = `
#ifndef ${name.toUpperCase()}_BITMAP_PURE
#define ${name.toUpperCase()}_BITMAP_PURE

#include <avr/pgmspace.h>

#include "../bitmap.hpp"

const uint8_t ${name}_TABLE[] PROGMEM = {
	${hex_buffer.map(row => row.join(", ")).join(",\n\t")}
};

bitmap ${name}_BITMAP = { ${name}_TABLE, ${final_w}, ${png.height} };

#endif
`;

Deno.writeFileSync(`${name}.hpp`, new TextEncoder().encode(output));
