#ifndef _ARRAYS_H_
#define _ARRAYS_H_	(!)




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