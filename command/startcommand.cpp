#include "startcommand.h"

StartCommand::StartCommand(Game* game): Command("Comenzar partida"){
    this->startController = new StartController(game);
}

void StartCommand::execute(){
    std::cout << "Welcome to the mastermind. Insert 4 colors each round" << std::endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}

bool StartCommand::isActive() {
    return true;
}
