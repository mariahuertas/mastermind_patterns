#include "GameMemento.h"

GameMemento::GameMemento(State state, int turn, ProposedCombination** proposedCombination, SecretCombination* secretCombination) {
    state_ = state;
    turn_ = turn;
    proposedCombination_ = proposedCombination;
    secretCombination_ = secretCombination;
}

ProposedCombination **GameMemento::getProposedCombination() {
    return proposedCombination_;
}

State GameMemento::getState() {
    return state_;
}

int GameMemento::getTurn() {
    return turn_;
}

SecretCombination *GameMemento::getSecretCombination() {
    return secretCombination_;
}
