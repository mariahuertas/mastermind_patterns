#ifndef COMPOSITEINGAMECONTROLLER_H
#define COMPOSITEINGAMECONTROLLER_H
#include "command.h"
#include "loadcommand.h"
#include "savecommand.h"
#include "redocommand.h"
#include "undocommand.h"
#include "exitcommand.h"
#include "startcommand.h"
#include "continueroundcommand.h"
#include <vector>
#include "controller.h"
#include "gameview.h"
#include "colocatecontroller.h"

class CompositeInGameController: public Controller
{
public:
    CompositeInGameController(Game *game, Registry *registry);
    void accept(ControllerVisitor *controllerVisitor) override;
    std::vector<Command*> getCommandVector();
    void launchCommand(int option);

private:
    std::vector<Command*> commandVector;
    ColocateController *colocateController;

};

#endif // COMPOSITEINGAMECONTROLLER_H
