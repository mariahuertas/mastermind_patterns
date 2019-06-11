#include <iostream>
#include "RedoCommand.h"

RedoCommand::RedoCommand(Game *game, Registry* registry): Command("Redo")
{
    redoController_ = new RedoController(game);
    mementoRegistry_ = registry;
}
void RedoCommand::execute(){
    redoController_->redo();
    std::cout<< "adding combination....done" << std::endl;
}

bool RedoCommand::isActive() {
    return true;
}


