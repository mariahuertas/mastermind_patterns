#include "SaveCommand.h"
#include "iostream"

SaveCommand::SaveCommand(Game *game): Command("Save"){
    this->saveController = new SaveController(game);
}

void SaveCommand::execute(){
    this->saveController->save();
    std::cout<< "saving game....done" << std::endl;
}

bool SaveCommand::isActive() {
    return true;
}