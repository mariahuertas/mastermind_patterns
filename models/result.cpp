#include "result.h"

Result::Result(){
    resultWhite = 0;
    resultBlack = 0;
}

Result::~Result(){}

void Result::incrementWhiteToken(){
    resultWhite++;
}

void Result::incrementBlackToken(){
    resultBlack++;
}

int Result::getBlackToken(){
    return resultBlack;
}

int Result::getWhiteToken(){
    return resultWhite;
}
