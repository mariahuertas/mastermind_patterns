#include "startcommand.h"

StartCommand::StartCommand(Game* game): Command("Comenzar partida")
{
    this->startController = new StartController(game);
    //startView = new StartView();
}

void StartCommand::execute(){
    std::cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores" << std::endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}

bool StartCommand::isActive() {
    return true;
}
