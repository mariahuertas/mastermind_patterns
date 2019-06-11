#include "RedoController.h"
#include "Game.h"

RedoController::RedoController(Game *game):Controller(game) {

}
void RedoController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void RedoController::redo() {
    registry->redo(this->game);
}

GameMementoInterface *RedoController::createMemento() {
    return this->game->createMemento();
}

void RedoController::restoreMemento(GameMementoInterface *gameMemento) {
    assert(gameMemento!= nullptr);
    game->restoreMemento(gameMemento);
}