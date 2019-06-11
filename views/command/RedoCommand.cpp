#include <iostream>
#include "RedoCommand.h"

RedoCommand::RedoCommand(Game *game, Registry* registry): Command("Redo")
{
    this->redoController_ = new RedoController(game);
    this->mementoRegistry_ = registry;
}
void RedoCommand::execute(){
    this->redoController_->redo();
    std::cout<< "adding combination....done" << std::endl;
}

bool RedoCommand::isActive() {
    return true;
}


