#ifndef MASTERMIND_REDOCONTROLLER_H
#define MASTERMIND_REDOCONTROLLER_H

#include <ControllerVisitor.h>
#include "Controller.h"

class RedoController: public Controller {
public:
    explicit RedoController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void redo();
};


#endif //MASTERMIND_REDOCONTROLLER_H
