#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <models/Registry.h>
#include "ControllerVisitor.h"
#include "State.h"

class Controller
{   
public:
    virtual void accept(ControllerVisitor *controllerVisitor)=0;
    void setState(State state);

protected:
    explicit Controller(Game *game);
    Game *game;
    Registry *registry;
};

#endif // CONTROLLER_H


