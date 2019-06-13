#include "ProposedCombinationView.h"

ProposedCombinationView::ProposedCombinationView(ColocateController *colocateController){
    this->colocateController=colocateController;
}

void ProposedCombinationView::readCombination(){
    Color *color;
    char value = ' ';
    char *combination;
    combination = new char [4];
    for(int i=0; i<4; i++){
        do{
            std::cout << "Insert color "<< i+1 <<": ";
            std::cin >> value;
            value = toupper(value);
        } while(color->isColor(value));
        combination[i] = value;
    }
    this->colocateController->read(combination);
}

void ProposedCombinationView::printCombination(){
    ProposedCombination **combination = this->colocateController->getProposedCombination();
    char *auxCombination;

    for (int i = 0; i < this->colocateController->getTurn()+1; i++){
        auxCombination = combination[i]->getCombination();
        for (int j=0; j<4; j++)
        {
            std::cout << "|" << auxCombination[j] << "|";
        }
        std::cout<<" ~ "<<"Black: "<< combination[i]->getResult()->getBlackToken()<<" White: "<< combination[i]->getResult()->getWhiteToken()<< std::endl;
    }
    std::cout<<std::endl;
}

