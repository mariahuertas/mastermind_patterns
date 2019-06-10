#ifndef MASTERMIND_DAO_H
#define MASTERMIND_DAO_H

#include "iostream"
#include "string.h"

class DAO{
public:
    virtual void save(std::string fileWriter) = 0;
    virtual void load(std::string bufferedReader) = 0;
};

#endif //MASTERMIND_DAO_H
