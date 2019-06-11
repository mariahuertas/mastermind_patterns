#include "SecretCombination.h"

void SecretCombination::generateMisteryColours(){
    char *enumClassArray = new char[colours];
    char *secretCombination = new char[colours];
    color->values(enumClassArray);
    int j=0;
    for (int i = 0; i < colours; i++){
        j=color->randomEnum();
        secretCombination[i] = enumClassArray[j];
    }
    setCombination(secretCombination);
}
