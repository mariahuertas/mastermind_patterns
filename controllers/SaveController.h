#ifndef MASTERMIND_SAVECONTROLLER_H
#define MASTERMIND_SAVECONTROLLER_H

#include <ControllerVisitor.h>
#include "Controller.h"

class SaveController : public Controller {
public:
    explicit SaveController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void save();

};


#endif //MASTERMIND_SAVECONTROLLER_H
