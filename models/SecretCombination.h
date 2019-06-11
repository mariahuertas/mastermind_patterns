#ifndef SECRETCOMBINATION_H
#define SECRETCOMBINATION_H
#include "Combination.h"

class SecretCombination : public Combination
{
public:
    SecretCombination() = default;
    ~SecretCombination() = default;
    void generateMisteryColours ();
};

#endif // SECRETCOMBINATION_H
