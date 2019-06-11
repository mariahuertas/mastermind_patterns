#include "StartController.h"
#include "Game.h"

StartController::StartController(Game *game):Controller(game){}

void StartController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

void StartController::start(){
    this->game->generateMisteryColours();
    this->game->setState(IN_GAME);
}

char* StartController::getSecretCombination(){
    return this->game->getSecretCombination();
}
