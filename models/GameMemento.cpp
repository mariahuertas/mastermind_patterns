#include "GameMemento.h"

GameMemento::GameMemento(Game *game, State state, int turn, ProposedCombination **proposedCombination, SecretCombination *secretCombination) {
    game_ = game;
    state_ = state;
    turn_ = turn;
    proposedCombination_ = proposedCombination;
    secretCombination_ = secretCombination;
}

void GameMemento::restoreMemento(){
    game_->setTurn(turn_);
    game_->setProposedCombination(proposedCombination_);
    game_->setSecretCombination(secretCombination_);
    game_->setState(state_);

}
