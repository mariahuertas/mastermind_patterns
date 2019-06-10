#include "ProposedCombinationDAO.h"

ProposedCombinationDAO::ProposedCombinationDAO(ProposedCombination *proposedCombination) : CombinationDAO(combination) {
    this->combination = proposedCombination;
}

ProposedCombination* ProposedCombinationDAO::getProposedCombination() {
    return static_cast<ProposedCombination *>(this->combination);
}
