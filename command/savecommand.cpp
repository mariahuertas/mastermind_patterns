#include "savecommand.h"
#include "iostream"

SaveCommand::SaveCommand(Game *game): Command("Save"){
    this->saveController = new SaveController(game);
}

void SaveCommand::execute(){
    saveController->save();
    std::cout<< "saving game....done" << std::endl;
}

bool SaveCommand::isActive() {
    return true;
}

/*
#include "redocommand.h"

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
}*/
