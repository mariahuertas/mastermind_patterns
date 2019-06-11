#ifndef MASTERMIND_SAVECONTROLLER_H
#define MASTERMIND_SAVECONTROLLER_H

#include <controllervisitor.h>
#include "controller.h"

class SaveController : public Controller {
public:
    SaveController(Game *game);
    void accept(ControllerVisitor *controllerVisitor);
    void save();

};


#endif //MASTERMIND_SAVECONTROLLER_H
