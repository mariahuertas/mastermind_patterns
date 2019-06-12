#include "CombinationDAO.h"

CombinationDAO::CombinationDAO(Combination *combination) : combination(combination) {}

void CombinationDAO::save(std::string fileWriter) {
    //TODO: find a C++ library for saving the combination, where fileWriter is an object of that library
    // fileWriter.write(combibation.getCombination);
}

void CombinationDAO::load(std::string bufferedReader) {
    //TODO: find a C++ library for loading the combination, where bufferedReader is an object of that library
    // this.combination.setCombination(getLine(bufferedReader));
}

