#include "GameDAO.h"

GameDAO::GameDAO(Game *game) {
    this->game = game;
    this->secretCombinationDAO = new SecretCombinationDAO (this->game->getSecretCombinationObject());
}

void GameDAO::save(std::string fileWriter) {
    //TODO: find a C++ library for saving the game using the different DAO classes, where fileWriter is an object of that library
    // Seudocode:
    // fileWriter(this.game.getTurn());
    // this.secretCombinationDAO.save(fileWriter);
    // for(unsigned int i = 0; i < this.game.getTurn(); i++){
    //  new ProposedCombinationDAO(this.game.getProposedCombination(i)).save(fileWriter);
    //  new ResultDAO(this.game.getResult(i)).save(fileWriter);
    // }
}

void GameDAO::load(std::string bufferedReader) {
    //TODO: find a C++ library for loading the game in the different DAO classes, where bufferedReader is an object of that library
    // Seudocode:
    // this.game.setTurn(getLine(bufferedReader));
    // this.secretCombinationDAO.load(bufferedReader);
    // for(unsigned int i = 0; i < this.game.getTurn(); i++){
    //  ProposedCombinationDAO proposedCombinationDAO = new ProposedCombinationDAO(new ProposedCombination());
    //  proposedCombinationDAO.load(bufferedReader);
    //  this.game.addProposedCombination(proposedCombinationDAO.getProposedCombination());
    //  ResultDAO resultDAO = new ResultDAO(new Result());
    //  resultDAO.load(bufferedReader);
    //  this.game.addResult(resultDAO.getResult());
    // }
}
