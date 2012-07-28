#include "Color.h"

Color::Color(short r, short g, short b) {
	_R = r & 0xF;
	_G = g & 0xF;
	_B = b & 0xF;
}
 
short Color::getR() {
    return _R;
}

short Color::getG() {
    return _G;
}

short Color::getB() {
    return _B;
}