#ifndef MASTERMIND_VIEWS_EXITCONTROLLER_H
#define MASTERMIND_VIEWS_EXITCONTROLLER_H

#include "controller.h"

class ExitController: public Controller {
public:
    ExitController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void exit();
};


#endif //MASTERMIND_VIEWS_EXITCONTROLLER_H
