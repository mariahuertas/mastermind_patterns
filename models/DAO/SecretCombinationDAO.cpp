#include "SecretCombinationDAO.h"

SecretCombinationDAO::SecretCombinationDAO(SecretCombination *secretCombination) : CombinationDAO(combination){
    this->combination = secretCombination;
}

void SecretCombinationDAO::load(std::string bufferedReader) {
    /*
     this.combination.clearColors();
super.load(bufferedReader);
     */
    CombinationDAO::load(bufferedReader);
}

