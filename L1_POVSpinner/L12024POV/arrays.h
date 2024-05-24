#ifndef _ARRAYS_H_
#define _ARRAYS_H_	(!)


/////////////////////////////////////////////////////////////////////////
/// Fonts
/////////////////////////////////////////////////////////////////////////


static const uint8_t fontMap[][8] PROGMEM = {

	// Numbers 0-9
	{0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00, 0x00, 0x00}, // 0
	{0x00, 0x42, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00}, // 1
	{0x42, 0x61, 0x51, 0x49, 0x46, 0x00, 0x00, 0x00}, // 2
	{0x21, 0x41, 0x45, 0x4B, 0x31, 0x00, 0x00, 0x00}, // 3
	{0x18, 0x14, 0x12, 0x7F, 0x10, 0x00, 0x00, 0x00}, // 4
	{0x27, 0x45, 0x45, 0x45, 0x39, 0x00, 0x00, 0x00}, // 5
	{0x3C, 0x4A, 0x49, 0x49, 0x30, 0x00, 0x00, 0x00}, // 6
	{0x01, 0x71, 0x09, 0x05, 0x03, 0x00, 0x00, 0x00}, // 7
	{0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00}, // 8
	{0x06, 0x49, 0x49, 0x29, 0x1E, 0x00, 0x00, 0x00}, // 9


	{0x7E, 0x11, 0x11, 0x11, 0x6E, 0x00}, // A
	{0x7F, 0x49, 0x49, 0x49, 0x36, 0x00}, // B
	{0x3E, 0x41, 0x41, 0x41, 0x22, 0x00}, // C
	{0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00}, // D
	{0x7F, 0x49, 0x49, 0x49, 0x41, 0x00}, // E
	{0x7F, 0x09, 0x09, 0x09, 0x01, 0x00}, // F
	{0x3E, 0x41, 0x49, 0x49, 0x7A, 0x00}, // G
	{0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00}, // H
	{0x00, 0x41, 0x7F, 0x41, 0x00, 0x00}, // I
	{0x20, 0x40, 0x41, 0x3F, 0x01, 0x00}, // J
	{0x7F, 0x08, 0x14, 0x22, 0x41, 0x00}, // K
	{0x7F, 0x40, 0x40, 0x40, 0x40, 0x00}, // L
	{0x7F, 0x02, 0x0C, 0x02, 0x7F, 0x00}, // M
	{0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00}, // N
	{0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00}, // O
	{0x7F, 0x09, 0x09, 0x09, 0x06, 0x00}, // P
	{0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00}, // Q
	{0x7F, 0x09, 0x19, 0x29, 0x46, 0x00}, // R
	{0x46, 0x49, 0x49, 0x49, 0x31, 0x00}, // S
	{0x01, 0x01, 0x7F, 0x01, 0x01, 0x00}, // T
	{0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00}, // U
	{0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00}, // V
	{0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00}, // W
	{0x63, 0x14, 0x08, 0x14, 0x63, 0x00}, // X
	{0x07, 0x08, 0x70, 0x08, 0x07, 0x00}, // Y
	{0x61, 0x51, 0x49, 0x45, 0x43, 0x00}  // Z
};



/////////////////////////////////////////////////////////////////////////
/// images
/////////////////////////////////////////////////////////////////////////

// these waste 4 bits per row.. consider packing down.
const uint16_t heart_filled[] PROGMEM = {
	0b010000000010,
	0b010000000010,
	0b011111111110,
	0b010000000010,
	0b010000000010,
	0b010000000010,
	0b000000000000,
	0b000000110000,
	0b000001111000,
	0b000011111100,
	0b000111111100,
	0b001111111000,
	0b011111111000,
	0b001111111000,
	0b000111111100,
	0b000011111100,
	0b000001111000,
	0b000000110000,
	0b000000000000,
	0b000000000000,
	0b000000110000,
	0b000001111000,
	0b000011111100,
	0b000111111100,
	0b001111111000,
	0b011111111000,
	0b001111111000,
	0b000111111100,
	0b000011111100,
	0b000001111000,
	0b000000110000,
	0b000000000000,
	0b001111000000,
	0b010000111110,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000111110,
	0b001111000000,
};

const uint16_t heart_notfilled[] PROGMEM =
{

	0b010000000010,
	0b010000000010,
	0b011111111110,
	0b010000000010,
	0b010000000010,
	0b010000000010,
	0b000000000000,
	0b000000110000,
	0b000001001000,
	0b000010000100,
	0b000100000100,
	0b001000001000,
	0b010000001000,
	0b001000001000,
	0b000100000100,
	0b000010000100,
	0b000001001000,
	0b000000110000,
	0b000000000000,
	0b000000000000,
	0b000000110000,
	0b000001001000,
	0b000010000100,
	0b000100000100,
	0b001000001000,
	0b010000001000,
	0b001000001000,
	0b000100000100,
	0b000010000100,
	0b000001001000,
	0b000000110000,
	0b000000000000,
	0b001111000000,
	0b010000111110,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000000000,
	0b010000111110,
	0b001111000000,
};

// Pre-calculated sine wave values (scaled and quantized)
const uint8_t sineWave[] PROGMEM = {
	128, 140, 152, 164, 175, 185, 195, 203, 210, 216, 220, 223,
	224, 223, 220, 216, 210, 203, 195, 185, 175, 164, 152, 140,
	128, 116, 104, 92,  81,  71,  61,  53,  46,  40,  36,  33,
	32,  33,  36,  40,  46,  53,  61,  71,  81,  92,  104, 116
};
const int sineWaveSize = sizeof(sineWave) / sizeof(sineWave[0]);


#endif