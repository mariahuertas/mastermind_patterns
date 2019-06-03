#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "game.h"
#include "state.h"
#include "controllervisitor.h"

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
};

#endif // CONTROLLER_H


