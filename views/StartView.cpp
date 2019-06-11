#include "StartView.h"

void StartView:: interact(StartController *startController){
    std::cout << "Welcome to the mastermind. Insert 4 colors each round" << std::endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}
