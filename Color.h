#ifndef Color_h
#define Color_h

class Color {
    public:
        Color(short r, short g, short b);
        unsigned char getByteOne();
        unsigned char getByteTwo();
        unsigned char getByteThree();
        short getR();
        short getG();
        short getB();
    private:
        short _R;
        short _G;
        short _B;
        unsigned char _B1, _B2;
};

#endif
