#include "startview.h"

StartView::StartView(){}

void StartView:: interact(StartController *startController){
    std::cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores" << std::endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}
