#include "ingamemenuview.h"

void InGameMenuView:: interact(CompositeInGameController *compositeInGameController){
    printMenu(compositeInGameController->getCommandVector());
    compositeInGameController->launchCommand(this->getOption());
}

void InGameMenuView:: printMenu(std::vector<Command*>commandVector){
    std::cout<< "Menu:"<<std::endl;
    for (unsigned int i=0; i<commandVector.size();i++){
        if(commandVector[i]->isActive()) {
            std::cout << "" << i + 1 << ":" << commandVector[i]->getTitle() << std::endl;
        }
    }
}

int InGameMenuView::getOption(){
    int choice;
    std::cout << "Choice: ";
    std::cin >> choice;
    return choice-1;
}