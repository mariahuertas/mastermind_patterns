#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H
#include "controller.h"
#include "game.h"
#include "iostream"
#include "controllervisitor.h"
using namespace std;

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
