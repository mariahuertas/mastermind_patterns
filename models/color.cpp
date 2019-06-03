#include "color.h"
#include <time.h>
#include <stdlib.h>

Color::Color(){}

Color::~Color(){}

int Color::randomEnum(){
    return rand()%6;
}

void Color::values(char *enumClassArray){
    enumClassArray[0] = Color::R;
    enumClassArray[1] = Color::P;
    enumClassArray[2] = Color::Y;
    enumClassArray[3] = Color::B;
    enumClassArray[4] = Color::G;
    enumClassArray[5] = Color::O;
}

bool Color::isColor (char value){
    char *enumClassArray = new char[6];
    values(enumClassArray);
    bool comparation=true;
    for (int i = 0; i < 6; i++){
        if (value==enumClassArray[i]) comparation = false;
    }
    return comparation;
}
