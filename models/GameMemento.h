#ifndef MASTERMIND_VIEWS_GAMEMEMENTO_H
#define MASTERMIND_VIEWS_GAMEMEMENTO_H

#include <state.h>
#include "secretcombination.h"
#include "proposedcombination.h"

class GameMemento {
public:
    GameMemento(State state, int turn, ProposedCombination** proposedCombination, SecretCombination* secretCombination);
    ProposedCombination** getProposedCombination();
    State getState();
    int getTurn();
    SecretCombination* getSecretCombination();

private:
    SecretCombination *secretCombination_;
    ProposedCombination **proposedCombination_;
    State state_;
    int turn_;
};


#endif //MASTERMIND_VIEWS_GAMEMEMENTO_H
