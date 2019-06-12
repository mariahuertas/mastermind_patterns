#include "ResultDAO.h"

ResultDAO::ResultDAO(Result* result) {
    this->result = result;
}

void ResultDAO::save(std::string fileWriter) {
    //TODO: find a C++ library for saving the results, where fileWriter is an object of that library
    // fileWriter.write(this.result.getBlackToken() + "\n");
    // fileWriter.write(this.result.getWhiteToken() + "\n");
}

void ResultDAO::load(std::string bufferedReader) {
    //TODO: find a C++ library for loading the result, where bufferedReader is an object of that library
    // this.result.setBlackToken(bufferedReader.getLine());
    // this.result.setWhiteToken(bufferedReader.getLine());
}

Result* ResultDAO::getResul() {
    return this->result;
}
