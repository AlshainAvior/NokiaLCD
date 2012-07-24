#include "Arduino.h"
#include "NokiaLCD.h"

NokiaLCD::NokiaLCD(short CS, short SCK, short DIO, short RST) {
    _CS = CS;
    _SCK = SCK;
    _DIO = DIO;
    _RST = RST;

    pinMode(_CS, OUTPUT);
    pinMode(_SCK, OUTPUT);
    pinMode(_DIO, OUTPUT);
    pinMode(_RST, OUTPUT);
}

void NokiaLCD::sendSPI(unsigned char b, boolean isCommand) {
    digitalWrite(_CS, LOW);
    
    //Send 9 bits starting with data bit, then moving to MSB;
    digitalWrite(_SCK, LOW);
    digitalWrite(_DIO, isCommand);
    digitalWrite(_SCK, HIGH);

    for (int i = 0; i < 8; i++) {
        boolean nextBit = (b >> (7-i)) & 1;
        digitalWrite(_SCK, LOW);
        digitalWrite(_DIO, nextBit);
        digitalWrite(_SCK, HIGH);
    }
    digitalWrite(_CS, HIGH);
}
