#include "ResultDAO.h"

ResultDAO::ResultDAO(Result* result) {
    this->result = result;
}

void ResultDAO::save(std::string fileWriter) {
/*
 fileWriter.write(this.result.getBlacks() + "\n");
fileWriter.write(this.result.getWhites() + "\n");
 * */
}

void ResultDAO::load(std::string bufferedReader) {
/*
 this.result.setBlacks(Integer.parseInt(bufferedReader.readLine()));
this.result.setWhites(Integer.parseInt(bufferedReader.readLine()));
 * */
}

Result* ResultDAO::getResul() {
    return this->result;
}
