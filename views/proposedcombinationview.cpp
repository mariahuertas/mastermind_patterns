#include "proposedcombinationview.h"

ProposedCombinationView::ProposedCombinationView(ColocateController *colocateController)
{
    this->colocateController=colocateController;
}

void ProposedCombinationView::readCombination(){
    Color *color;
    char value = ' ';
    char *combination;
    combination = new char [4];
    for(int i=0; i<4; i++){
        do{
            cout << "Inserta el color "<< i+1 <<": ";
            cin >> value;
            value = toupper(value);
        } while(color->isColor(value));

        combination[i] = value;
    }
    colocateController->read(combination);
}

void ProposedCombinationView::printCombination(){
    ProposedCombination **combination = colocateController->getProposedCombination();
    char *auxCombination;

    for (int i = 0; i < colocateController->getTurn()+1; i++){
        auxCombination = combination[i]->getCombination();
        for (int j=0; j<4; j++)
        {
            cout << "|" << auxCombination[j] << "|";
        }
        cout<<" ~ "<<"Black: "<< combination[i]->getResult()->getBlackToken()<<" White: "<< combination[i]->getResult()->getWhiteToken();
        std::cout<< std::endl;
    }
    cout<<endl;
}

