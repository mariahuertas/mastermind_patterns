#ifndef MASTERMIND_VIEWS_UNDOCONTROLLER_H
#define MASTERMIND_VIEWS_UNDOCONTROLLER_H

#include <ControllerVisitor.h>
#include "Controller.h"

class UndoController: public Controller {
public:
    UndoController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void undo();
    void restoreMemento(GameMementoInterface* gameMemento);
    GameMementoInterface* createMemento();
};


#endif //MASTERMIND_VIEWS_UNDOCONTROLLER_H
