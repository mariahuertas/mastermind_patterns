#include <models/GameMemento.h>
#include "Game.h"
#include "Registry.h"

Game::Game():registry(this){
    this->state = INITIAL;
    this->turn = 0;
    this->secretCombination = new SecretCombination();
    this->proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
    for (int i = 0; i< MAX_PROPOSED_COMBINATION; i++){
        this->proposedCombination[i] = new ProposedCombination();
    }
}

Game::~Game(){
    delete[] this->secretCombination;
    for(int i = 0; i < MAX_PROPOSED_COMBINATION; ++i){
         delete[] this->proposedCombination[i];
     }
    delete[] this->proposedCombination;
}

State Game::getState() {
    return this->state;
}

void Game::setState(State state){
    this->state = state;
}

void Game:: read(char *combination) {
    assert(combination!= nullptr);
    this->proposedCombination[getTurn()]->setProposedCombination(combination);
}

int Game::getTurn(){
    return this->turn;
}

bool Game::isWinner(){
    return this->proposedCombination[getTurn()]->isWinner();
}

ProposedCombination** Game::getProposedCombination(){
    return this->proposedCombination;
}


char* Game::getSecretCombination(){
    return this->secretCombination->getCombination();
}

void Game::incrementTurn(){
    this->turn++;
}

void Game::calculateResult(){
    this->proposedCombination[getTurn()]->calculateResult(this->secretCombination);
}

void Game::generateMisteryColours(){
    this->secretCombination->generateMisteryColours();
}

void Game::clear(){
    this->turn=0;
}

GameMementoInterface *Game::createMemento() {
      return new GameMemento(this, this->state, this->turn, this->proposedCombination, this->secretCombination);
}

void Game::restoreMemento(GameMementoInterface *gameMemento) {
    assert(gameMemento != nullptr);
    gameMemento->restoreMemento();
}

void Game::setTurn(int turn) {
    this->turn = turn;
}

void Game::setProposedCombination(ProposedCombination **proposedCombination){
    assert(proposedCombination!= nullptr);
    this->proposedCombination = proposedCombination;
}

void Game::setSecretCombination(SecretCombination *secretCombination){
    assert(secretCombination!= nullptr);
    this->secretCombination = secretCombination;
}

SecretCombination* Game::getSecretCombinationObject() {
    return this->secretCombination;
}
