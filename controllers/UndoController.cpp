#include "UndoController.h"
#include "game.h"
UndoController::UndoController(Game *game):Controller(game) {

}
void UndoController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void UndoController::undo() {
    registry->undo(this->game);
}

GameMementoInterface *UndoController::createMemento() {
    return this->game->createMemento();
}

void UndoController::restoreMemento(GameMementoInterface *gameMemento) {
    game->restoreMemento(gameMemento);
}

