#include "initialmenuview.h"

InitialMenuView::InitialMenuView()
{

}

void InitialMenuView:: interact(CompositeInitialController *compositeInitialController){
    cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores" << endl;
    compositeInitialController->setCommands();
    printMenu(compositeInitialController->getCommandVector());

    compositeInitialController->launchCommand(this->getOption());
}

void InitialMenuView:: printMenu(std::vector<Command*>commandVector){

    std::cout<< "Menu:"<<std::endl;

    for (unsigned int i=0; i<commandVector.size();i++){
        if(commandVector[i]->isActive()){
        std::cout<< "" << i+1 << ":"<< commandVector[i]->getTitle()<<endl;
        }
    }
}

int InitialMenuView::getOption(){
    int choice;
    cout << "Choice: ";
    cin >> choice;
    cout << "" << endl;
    return choice-1;
}
