#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H

#include <models/ProposedCombination.h>
#include "Controller.h"
#include "iostream"
#include "ControllerVisitor.h"

class ColocateController : public Controller
{
public:
    void accept(ControllerVisitor *controllerVisitor) override;
    ColocateController(Game *game);
    bool isWinner();
    void read(char *combination);
    void calculateResult();
    ProposedCombination** getProposedCombination();
    void incrementTurn();
    int getTurn();
};

#endif // COLOCATECONTROLLER_H
