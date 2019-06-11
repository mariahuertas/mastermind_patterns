#include "GameMemento.h"

GameMemento::GameMemento(Game *game, State state, int turn, ProposedCombination **proposedCombination, SecretCombination *secretCombination) {
    this->game_ = game;
    this->state_ = state;
    this->turn_ = turn;
    this->proposedCombination_ = proposedCombination;
    this->secretCombination_ = secretCombination;
}

void GameMemento::restoreMemento(){
    this->game_->setTurn(turn_);
    this->game_->setProposedCombination(proposedCombination_);
    this->game_->setSecretCombination(secretCombination_);
    this->game_->setState(state_);

}
