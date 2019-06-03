#include "undocommand.h"

UndoCommand::UndoCommand(Game *game, std::vector<GameMemento*> *mementoVector): Command("Undo")
{
    this->undoController = new UndoController(game);
    mementoVector_ = mementoVector;
}

void UndoCommand::execute(){
    undoController->restoreMemento(mementoVector_->at(static_cast<unsigned long>(mementoVector_->back()->getTurn() - 2)));
    std::cout<< "Deleting last combination....done" << std::endl << std::endl;
}

bool UndoCommand::isActive() {

    return (mementoVector_->size() > 0 ? true: false);

}

