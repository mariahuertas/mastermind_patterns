#ifndef LOGIC_H
#define LOGIC_H

#include "State.h"
#include "CompositeInitialController.h"
#include "CompositeInGameController.h"

class Logic
{
public:
    Logic();
    Controller *getController();

private:
    Game *game;
    CompositeInitialController *compositeInitialController;
    CompositeInGameController *compositeInGameController;
    Registry *registry;

};

#endif // LOGIC_H


