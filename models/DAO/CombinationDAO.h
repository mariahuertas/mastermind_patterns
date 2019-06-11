#ifndef MASTERMIND_COMBINATIONDAO_H
#define MASTERMIND_COMBINATIONDAO_H

#include <models/Combination.h>
#include "DAO.h"

class CombinationDAO : public DAO{
public:
    CombinationDAO(Combination *combination);

    void save(std::string fileWriter) override;

    void load(std::string bufferedReader) override;

protected:
    Combination *combination;
};


#endif //MASTERMIND_COMBINATIONDAO_H
