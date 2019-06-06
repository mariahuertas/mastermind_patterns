#include "startview.h"

//DELETE FILE: now it is startCommand
void StartView:: interact(StartController *startController){
    std::cout << "Welcome to the mastermind. Insert 4 colors each round" << std::endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}
