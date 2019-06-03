#include "ingamemenuview.h"

InGameMenuView::InGameMenuView()
{

}
void InGameMenuView:: interact(CompositeInGameController *compositeInGameController){
    compositeInGameController->setCommands();
    printMenu(compositeInGameController->getCommandVector());
    compositeInGameController->launchCommand(this->getOption());
    compositeInGameController->storeMemento();
}

void InGameMenuView:: printMenu(std::vector<Command*>commandVector){

    std::cout<< "Menu:"<<std::endl;

    for (unsigned int i=0; i<commandVector.size();i++){
        if(commandVector[i]->isActive()) {

            std::cout << "" << i + 1 << ":" << commandVector[i]->getTitle() << endl;
        }
    }
}

int InGameMenuView::getOption(){
    int choice;
    cout << "Choice: ";
    cin >> choice;
    cout << "" << endl;
    return choice-1;
}
