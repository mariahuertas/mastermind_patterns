#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H
#include "controller.h"
#include "controllervisitor.h"

class ControllerVisitor;

class ContinueController : public Controller{
public:
    ContinueController(Game *game);
    void continueGame(char respuesta);
    void accept(ControllerVisitor *controllerVisitor) override;
    void clear();
};

#endif // CONTINUECONTROLLER_H
