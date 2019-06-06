#include <iostream>
#include "undocommand.h"

UndoCommand::UndoCommand(Game *game, Registry* registry): Command("Undo")
{
    this->undoController = new UndoController(game);
    mementoRegistry_ = registry;
}

void UndoCommand::execute(){
    undoController->undo();

        //undoController->restoreMemento(mementoVector_->at(static_cast<unsigned long>(mementoVector_->back()->getTurn() - 2)));
    std::cout<< "Deleting last combination....done" << std::endl << std::endl;
}

bool UndoCommand::isActive() {


}

