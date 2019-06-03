#include "redocommand.h"

RedoCommand::RedoCommand(Game *game, std::vector<GameMemento*> *mementoVector): Command("Redo")
{
    redoController_ = new RedoController(game);
    mementoVector_ = mementoVector;
}
void RedoCommand::execute(){
    redoController_->restoreMemento(mementoVector_->at(mementoVector_->back()->getTurn()));

    std::cout<< "adding combination....done" << std::endl << std::endl;
}

bool RedoCommand::isActive() {
    return true;
}


