#ifndef NokiaLCD_h
#define NokiaLCD_h

#include "Arduino.h"
#include "Commands.h"
#include "Color.h"

class NokiaLCD {
    public:
        NokiaLCD(short CS, short SCK, short DIO, short RST);
        void sendSPI(unsigned char b, boolean isCommand);
        void clearScreen(Color c);
        void setPixel(int x, int y, Color c);
        void setRect(int x, int y, int w, int h, Color c);
        void hardwareReset();
        void setupLCD();
    private:
        short _CS;
        short _SCK;
        short _DIO;
        short _RST;
        
        short _COMMAND;
        short _DATA;
};

#endif
