#include "continuecontroller.h"

ContinueController::ContinueController(Game * game) : Controller(game){}

void ContinueController::continueGame(char respuesta){
    //assert
    if (respuesta == 'Y'){
        this->clear();
        this->setState(INITIAL);
    }
    else this->setState(EXIT);
}

void ContinueController::clear(){
    return game->clear();
}

void ContinueController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}
