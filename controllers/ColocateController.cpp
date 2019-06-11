#include "ColocateController.h"
#include "Game.h"

ColocateController::ColocateController(Game *game) : Controller(game){}

ProposedCombination** ColocateController::getProposedCombination(){
    return this->game->getProposedCombination();
}

void ColocateController::incrementTurn(){
    return this->game->incrementTurn();
}

void ColocateController::read(char *combination){
    assert(combination!= nullptr);
    this->registry->execute();
    return this->game->read(combination);
}

void ColocateController::calculateResult(){
    return this->game->calculateResult();
}

bool ColocateController::isWinner(){
    return this->game->isWinner();
}

void ColocateController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

int ColocateController::getTurn(){
    return this->game->getTurn();
}
