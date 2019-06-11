#include <models/GameMemento.h>
#include "game.h"
#include "Registry.h"

Game::Game():registry(this){
    this->state = INITIAL;
    turn = 0;
    secretCombination = new SecretCombination();
    proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
    for (int i = 0; i< MAX_PROPOSED_COMBINATION; i++){
       proposedCombination[i] = new ProposedCombination();
    }
}

Game::~Game(){
    delete[] secretCombination;
    for(int i = 0; i < MAX_PROPOSED_COMBINATION; ++i){
         delete[] proposedCombination[i];
     }
    delete[] proposedCombination;
}

State Game::getState() {
    return state;
}

void Game::setState(State state){
    this->state = state;
}

void Game:: read(char *combination) {
    assert(combination!= nullptr);
    proposedCombination[getTurn()]->setProposedCombination(combination);
}

int Game::getTurn(){
    return turn;
}

bool Game::isWinner(){
    return proposedCombination[getTurn()]->isWinner();
}

ProposedCombination** Game::getProposedCombination(){
    return this->proposedCombination;
}


char* Game::getSecretCombination(){
    return secretCombination->getCombination();
}

void Game::incrementTurn(){
    turn++;
}

void Game::calculateResult(){
    proposedCombination[getTurn()]->calculateResult(secretCombination);
}

void Game::generateMisteryColours(){
    secretCombination->generateMisteryColours();
}

void Game::clear(){
    turn=0;
}

GameMementoInterface *Game::createMemento() {
      return new GameMemento(this, this->state, this->turn, this->proposedCombination, this->secretCombination);
}

void Game::restoreMemento(GameMementoInterface *gameMemento) {
    assert(gameMemento!= nullptr);
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
