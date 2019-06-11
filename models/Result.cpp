#include "Result.h"

Result::Result(){
    this->resultWhite = 0;
    this->resultBlack = 0;
}

Result::~Result(){}

void Result::incrementWhiteToken(){
    this->resultWhite++;
}

void Result::incrementBlackToken(){
    this->resultBlack++;
}

int Result::getBlackToken(){
    return this->resultBlack;
}

int Result::getWhiteToken(){
    return this->resultWhite;
}
