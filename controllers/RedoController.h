#ifndef MASTERMIND_REDOCONTROLLER_H
#define MASTERMIND_REDOCONTROLLER_H

#include <controllervisitor.h>
#include "controller.h"

class RedoController: public Controller {
public:
    RedoController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    void redo();
    void restoreMemento(GameMementoInterface* gameMemento);
    GameMementoInterface* createMemento();

};


#endif //MASTERMIND_REDOCONTROLLER_H
