#ifndef NokiaLCD_h
#define NokiaLCD_h

#include "Arduino.h"

class NokiaLCD {
    public:
        NokiaLCD(short CS, short SCK, short DIO, short RST);
        void sendSPI(unsigned char b, boolean isCommand);

    private:
        short _CS;
        short _SCK;
        short _DIO;
        short _RST;
};

#endif
