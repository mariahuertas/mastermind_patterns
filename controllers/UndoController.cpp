#include "UndoController.h"

UndoController::UndoController(Game *game):Controller(game) {

}
void UndoController::accept(ControllerVisitor *controllerVisitor) {
controllerVisitor->visit(this);
}

void UndoController::undo() {

}

GameMemento *UndoController::createMemento() {
    return this->game->createMemento();
}

void UndoController::restoreMemento(GameMemento *gameMemento) {
    game->restoreMemento(gameMemento);
}

