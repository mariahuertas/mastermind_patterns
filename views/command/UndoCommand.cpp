#include <iostream>
#include "UndoCommand.h"

UndoCommand::UndoCommand(Game *game, Registry* registry): Command("Undo"){
    this->undoController = new UndoController(game);
    this->mementoRegistry_ = registry;
}

void UndoCommand::execute(){
    this->undoController->undo();
    std::cout<< "Deleting last combination....done" << std::endl;
}

bool UndoCommand::isActive() {
    return this->mementoRegistry_->undoable();
}

