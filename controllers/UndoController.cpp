#include "UndoController.h"
#include "Game.h"
UndoController::UndoController(Game *game):Controller(game) {}

void UndoController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void UndoController::undo() {
    this->registry->undo(this->game);
}

GameMementoInterface *UndoController::createMemento() {
    return this->game->createMemento();
}

void UndoController::restoreMemento(GameMementoInterface *gameMemento) {
    assert(gameMemento!= nullptr);
    this->game->restoreMemento(gameMemento);
}

