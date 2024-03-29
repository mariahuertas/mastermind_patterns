#ifndef COMBINATION_H
#define COMBINATION_H
#include <iostream>
#include <assert.h>
#include <vector>
#include "Color.h"

class Combination
{
public:
    Combination();
    ~Combination();
    char* getCombination();
    void setCombination(char *combination);

protected:
    std::vector<char> combination;
    int colours;
    Color *color;
};

#endif // COMBINATION_H
