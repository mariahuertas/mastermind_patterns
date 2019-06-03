#include "ExitController.h"

ExitController::ExitController(Game *game):Controller(game){}

void ExitController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

void ExitController::exit(){
    game->setState(EXIT);
}


