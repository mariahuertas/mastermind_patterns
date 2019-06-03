#include "proposedcombination.h"

ProposedCombination::ProposedCombination():Combination(){
    result = new Result();
}

ProposedCombination::~ProposedCombination(){
    delete result;
}

Result* ProposedCombination::getResult(){
    return this->result;
}

void ProposedCombination:: setProposedCombination(char *proposedCombination){
    setCombination(proposedCombination);
}

void ProposedCombination::calculateResult(SecretCombination *secretCombination){
    char * combination = secretCombination->getCombination();
    bool *markedCombination = new bool [colours];
    for (int i= 0 ; i < colours; i++){
        markedCombination[i]= false;
    }
    for (int i=0; i<colours; i++){
        if (combination[i]==this->combination[i]){
            result->incrementBlackToken();
            markedCombination[i] = true;
        }

else{
        for (int j=0; j<colours; j++){
            if (combination[i]==this->combination[j] &&
                    j!=i && markedCombination[j] == false){
                result->incrementWhiteToken();
                markedCombination[j]= true;
            }
        }}
    }
}


bool ProposedCombination:: isWinner(){
    return (result->getBlackToken())==colours ? true:false;
}
