#include "RedoController.h"
#include "Game.h"

RedoController::RedoController(Game *game):Controller(game) {

}
void RedoController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void RedoController::redo() {
    this->registry->redo(this->game);
}

