#include "colocatecontroller.h"
#include "game.h"

ColocateController::ColocateController(Game *game) : Controller(game){}

ProposedCombination** ColocateController::getProposedCombination(){
    return game->getProposedCombination();
}

void ColocateController::incrementTurn(){
    return game->incrementTurn();
}

void ColocateController::read(char *combination){
    this->registry->execute();
    return game->read(combination);
}

void ColocateController::calculateResult(){
    return game->calculateResult();
}

bool ColocateController::isWinner(){
    return game->isWinner();
}

void ColocateController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

int ColocateController::getTurn(){
    return game->getTurn();
}
