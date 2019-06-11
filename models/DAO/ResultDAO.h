#ifndef MASTERMIND_RESULTDAO_H
#define MASTERMIND_RESULTDAO_H

#include <models/Result.h>
#include "DAO.h"

class ResultDAO : public DAO{
public:
    ResultDAO(Result *result);

    void save(std::string fileWriter) override;

    void load(std::string bufferedReader) override;

    Result* getResul();

private:
    Result *result;
};


#endif //MASTERMIND_RESULTDAO_H
