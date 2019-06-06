#include "combination.h"

Combination::Combination(): combination(4) {
    colours = 4;
}

Combination::~Combination() = default;

char* Combination::getCombination(){
    return &this->combination.front();
}

void Combination::setCombination(char *combination){
    this->combination.clear();
    this->combination.push_back(combination[0]);
    this->combination.push_back(combination[1]);
    this->combination.push_back(combination[2]);
    this->combination.push_back(combination[3]);
}
