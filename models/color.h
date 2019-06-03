#ifndef COLOR_H
#define COLOR_H


class Color
{
public:
    static const char R = 'R';
    static const char P = 'P';
    static const char Y = 'Y';
    static const char B = 'B';
    static const char G = 'G';
    static const char O = 'O';


    int randomEnum();
    void values(char *enumClassArray);
    bool isColor (char value);

private:
    Color();
    ~Color();
};

#endif // COLOR_H
