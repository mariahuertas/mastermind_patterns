#include "combination.h"

Combination::Combination(){
    colours = 4;
    combination = new char [colours];
}

Combination::~Combination(){
    delete[] combination;
}

char* Combination::getCombination(){
    return combination;
}

void Combination::setCombination(char *combination){
    this->combination = combination;
}
