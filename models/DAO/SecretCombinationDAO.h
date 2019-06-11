#ifndef MASTERMIND_SECRETCOMBINATIONDAO_H
#define MASTERMIND_SECRETCOMBINATIONDAO_H

#include <models/SecretCombination.h>
#include "CombinationDAO.h"

class SecretCombinationDAO : public CombinationDAO{
public:
    SecretCombinationDAO(SecretCombination *secretCombination);

    void load(std::string bufferedReader) override;

private:
    SecretCombination* secretCombination;
};


#endif //MASTERMIND_SECRETCOMBINATIONDAO_H
