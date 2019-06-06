#ifndef LOGIC_H
#define LOGIC_H

#include "state.h"
#include "compositeinitialcontroller.h"
#include "compositeingamecontroller.h"

class Logic
{
public:
    Logic();
    Controller *getController();

private:
    Game *game;
    //ColocateController *colocateController;
    //StartController *startController;
    //ContinueController *continueController;
    CompositeInitialController *compositeInitialController;
    CompositeInGameController *compositeInGameController;
    Registry *registry;

};

#endif // LOGIC_H


