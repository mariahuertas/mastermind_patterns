#include <iostream>
#include "redocommand.h"

RedoCommand::RedoCommand(Game *game, Registry* registry): Command("Redo")
{
    redoController_ = new RedoController(game);
    mementoRegistry_ = registry;
}
void RedoCommand::execute(){
    //redoController_->restoreMemento(mementoVector_->at(mementoVector_->back()->getTurn()));

    std::cout<< "adding combination....done" << std::endl << std::endl;
}

bool RedoCommand::isActive() {
    return true;
}


