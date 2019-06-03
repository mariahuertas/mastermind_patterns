#include "RedoController.h"


RedoController::RedoController(Game *game):Controller(game) {

}
void RedoController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void RedoController::redo() {

}

GameMemento *RedoController::createMemento() {
    return this->game->createMemento();
}

void RedoController::restoreMemento(GameMemento *gameMemento) {
    game->restoreMemento(gameMemento);
}