#ifndef MASTERMIND_VIEWS_EXITCONTROLLER_H
#define MASTERMIND_VIEWS_EXITCONTROLLER_H

#include "Controller.h"

class ExitController: public Controller {
public:
    explicit ExitController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void exit();
};


#endif //MASTERMIND_VIEWS_EXITCONTROLLER_H
