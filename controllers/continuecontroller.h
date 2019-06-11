#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H
#include "controller.h"
#include "ControllerVisitor.h"

class ControllerVisitor;

class ContinueController : public Controller{
public:
    ContinueController(Game *game);
    void continueGame(char option);
    void accept(ControllerVisitor *controllerVisitor) override;
    void clear();
};

#endif // CONTINUECONTROLLER_H
