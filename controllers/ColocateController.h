#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H

#include <models/ProposedCombination.h>
#include "Controller.h"
#include "iostream"
#include "ControllerVisitor.h"

class ColocateController : public Controller
{
public:
    explicit ColocateController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    bool isWinner();
    void read(char *combination);
    void calculateResult();
    ProposedCombination** getProposedCombination();
    void incrementTurn();
    int getTurn();
    void registryMemento();
};

#endif // COLOCATECONTROLLER_H
