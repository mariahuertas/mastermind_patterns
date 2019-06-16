#ifndef MASTERMIND_VIEWS_UNDOCONTROLLER_H
#define MASTERMIND_VIEWS_UNDOCONTROLLER_H

#include <ControllerVisitor.h>
#include "Controller.h"

class UndoController: public Controller {
public:
    explicit UndoController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void undo();
};


#endif //MASTERMIND_VIEWS_UNDOCONTROLLER_H
