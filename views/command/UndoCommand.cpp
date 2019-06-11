#include <iostream>
#include "UndoCommand.h"

UndoCommand::UndoCommand(Game *game, Registry* registry): Command("Undo"){
    this->undoController = new UndoController(game);
    mementoRegistry_ = registry;
}

void UndoCommand::execute(){
    undoController->undo();
    std::cout<< "Deleting last combination....done" << std::endl;
}

bool UndoCommand::isActive() {
    return true;
}

