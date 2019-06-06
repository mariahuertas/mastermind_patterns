#include <iostream>
#include "exitcommand.h"

ExitCommand::ExitCommand(Game *game): Command("Exit"){
    this->exitController = new ExitController(game);
}

void ExitCommand::execute(){
    this->exitController->exit();
    std::cout << "Thank you" << std::endl;
}

bool ExitCommand::isActive() {
    return true;
}
