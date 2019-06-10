#include "GameDAO.h"

GameDAO::GameDAO(Game *game) {
    this->game = game;
    this->secretCombinationDAO = new SecretCombinationDAO (this->game->getSecretCombinationObject());
}

void GameDAO::save(std::string fileWriter) {
/*
 fileWriter.write(this.game.getAttempts() + "\n");
			this.secretCombinationDAO.save(fileWriter);
			for (int i = 0; i < this.game.getAttempts(); i++) {
				new ProposedCombinationDAO(this.game.getProposedCombination(i)).save(fileWriter);
  new ResultDAO(this.game.getResult(i)).save(fileWriter);
  }
 */
}

void GameDAO::load(std::string bufferedReader) {
/*
 this.game.setAttempts(Integer.parseInt(bufferedReader.readLine()));
			this.secretCombinationDAO.load(bufferedReader);
			for (int i = 0; i < this.game.getAttempts(); i++) {
				ProposedCombinationDAO proposedCombinationDAO = new ProposedCombinationDAO(new ProposedCombination());
				proposedCombinationDAO.load(bufferedReader);
				this.game.addProposedCombination(proposedCombinationDAO.getProposedCombination());
				ResultDAO resultDAO = new ResultDAO(new Result());
				resultDAO.load(bufferedReader);
				this.game.addResult(resultDAO.getResult());
}
 * */
}
