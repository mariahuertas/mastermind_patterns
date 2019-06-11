#include "initialmenuview.h"

void InitialMenuView:: interact(CompositeInitialController *compositeInitialController){
    std::cout << "Welcome to the Mastermind. Insert 4 colors each round" << std::endl;
    compositeInitialController->setCommands();
    printMenu(compositeInitialController->getCommandVector());

    compositeInitialController->launchCommand(this->getOption());
}

void InitialMenuView:: printMenu(std::vector<Command*>commandVector){
    std::cout<< "Menu:"<<std::endl;
    for (unsigned int i=0; i<commandVector.size();i++){
        if(commandVector[i]->isActive()){
        std::cout<< "" << i+1 << ":"<< commandVector[i]->getTitle()<<std::endl;
        }
    }
}

int InitialMenuView::getOption(){
    int choice;
    std::cout << "Choice: ";
    std::cin >> choice;
    return choice-1;
}
