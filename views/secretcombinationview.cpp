#include "secretcombinationview.h"

SecretCombinationView::SecretCombinationView(StartController *startController)
{
    this->startController=startController;
}

void SecretCombinationView:: printSecretCombination(){
    cout << "Mistery colours: ";
    char * combination = startController->getSecretCombination();

    for (int i=0; i<4; i++){
        cout << combination[i] << " ";
    }
    cout<<endl;
}
