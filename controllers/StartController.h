#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "ColocateController.h"
#include "ControllerVisitor.h"

class StartController: public Controller {
public:
    StartController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void start();
    char* getSecretCombination();
};

#endif // STARTCONTROLLER_H
