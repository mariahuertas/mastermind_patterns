#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <models/Registry.h>
#include "controllervisitor.h"
#include "state.h"

class Controller
{   
public:
    virtual void accept(ControllerVisitor *controllerVisitor)=0;
    void setState(State state);

protected:
    Controller(Game *game);
    State getState();
    Game getGame();
    Game *game;
    Registry *registry;
};

#endif // CONTROLLER_H


