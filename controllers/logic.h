#ifndef LOGIC_H
#define LOGIC_H
#include "game.h"
#include "colocatecontroller.h"
#include "startcontroller.h"
#include "continuecontroller.h"
#include "controller.h"
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

};

#endif // LOGIC_H


