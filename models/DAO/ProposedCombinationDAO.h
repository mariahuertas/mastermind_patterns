#ifndef MASTERMIND_PROPOSEDCOMBINATIONDAO_H
#define MASTERMIND_PROPOSEDCOMBINATIONDAO_H

#include <models/proposedcombination.h>
#include "CombinationDAO.h"

class ProposedCombinationDAO : public CombinationDAO {
public:
    ProposedCombinationDAO(ProposedCombination *proposedCombination);
    ProposedCombination *getProposedCombination();
};


#endif //MASTERMIND_PROPOSEDCOMBINATIONDAO_H
