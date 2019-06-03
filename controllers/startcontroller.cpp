#include "startcontroller.h"

StartController::StartController(Game *game):Controller(game){}

void StartController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

void StartController::start(){
    game->generateMisteryColours();
    game->setState(IN_GAME);
}

char* StartController::getSecretCombination(){
    return game->getSecretCombination();
}

void StartController::generateMisteryColours(){
    return game->generateMisteryColours();
}
