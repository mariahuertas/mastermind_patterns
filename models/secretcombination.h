#ifndef SECRETCOMBINATION_H
#define SECRETCOMBINATION_H
#include "combination.h"

class SecretCombination : public Combination
{
public:
    SecretCombination() = default;
    ~SecretCombination() = default;
    void generateMisteryColours ();
};

#endif // SECRETCOMBINATION_H
