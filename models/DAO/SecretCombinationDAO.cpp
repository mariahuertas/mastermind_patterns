#include "SecretCombinationDAO.h"

SecretCombinationDAO::SecretCombinationDAO(SecretCombination *secretCombination) : CombinationDAO(combination){
    this->combination = secretCombination;
}

void SecretCombinationDAO::load(std::string bufferedReader) {
    // TODO: clean color, that previusly could be saved in Combination, and execute next line
    CombinationDAO::load(bufferedReader);
}

