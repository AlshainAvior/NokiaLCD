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
        void setRectOutline(int x, int y, int w, int h, int os, Color c);
        void hardwareReset();
        void setupLCD();
    private:
        short _CS;
        short _SCK;
        short _DIO;
        short _RST;
        
        short _COMMAND;
        short _DATA;
        
        //Vars for high-speed SPI
        byte _CS_PORT;
        byte _SCK_PORT;
        byte _DIO_PORT;
        byte _RST_PORT;

        //Bitmasks
        byte _CS_HIGH;
        byte _CS_LOW;
        byte _SCK_HIGH;
        byte _SCK_LOW;
        byte _DIO_HIGH;
        byte _DIO_LOW;
        byte _RST_HIGH;
        byte _RST_LOW;
};

#endif
