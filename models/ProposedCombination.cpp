#include "ProposedCombination.h"

ProposedCombination::ProposedCombination() : Combination() {
    this->result = new Result();
}

ProposedCombination::~ProposedCombination() {
    delete this->result;
}

Result *ProposedCombination::getResult() {
    return this->result;
}

void ProposedCombination::setProposedCombination(char *proposedCombination) {
    assert(proposedCombination!= nullptr);
    setCombination(proposedCombination);
}

void ProposedCombination::calculateResult(SecretCombination *secretCombination) {
    assert(secretCombination!= nullptr);
    char *combination = secretCombination->getCombination();
    bool *markedCombination = new bool[colours];
    for (int i = 0; i < colours; i++) {
        markedCombination[i] = false;
    }
    for (int i = 0; i < colours; i++) {
        if (combination[i] == this->combination[i]) {
            this->result->incrementBlackToken();
            markedCombination[i] = true;
        } else {
            for (int j = 0; j < colours; j++) {
                if (combination[i] == this->combination[j] &&
                    j != i && markedCombination[j] == false) {
                    this->result->incrementWhiteToken();
                    markedCombination[j] = true;
                }
            }
        }
    }
}

bool ProposedCombination::isWinner() {
    return (result->getBlackToken()) == colours;
}
