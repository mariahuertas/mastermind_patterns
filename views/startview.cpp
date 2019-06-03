#include "startview.h"

StartView::StartView(){}

void StartView:: interact(StartController *startController){
    cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores" << endl;
    startController->start();
    SecretCombinationView *secretCombinationView = new SecretCombinationView (startController);
    secretCombinationView->printSecretCombination();
}
