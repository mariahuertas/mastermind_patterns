#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "colocatecontroller.h"
#include "controllervisitor.h"

class StartController: public Controller {
public:
    void accept(ControllerVisitor *controllerVisitor) override;
    void start();
    void generateMisteryColours();
    char* getSecretCombination();
    StartController(Game *game);
};

#endif // STARTCONTROLLER_H
