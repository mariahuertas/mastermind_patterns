#ifndef COMPOSITEINGAMECONTROLLER_H
#define COMPOSITEINGAMECONTROLLER_H
#include "Command.h"
#include "LoadCommand.h"
#include "SaveCommand.h"
#include "RedoCommand.h"
#include "UndoCommand.h"
#include "ExitCommand.h"
#include "StartCommand.h"
#include "ContinueRoundCommand.h"
#include <vector>
#include "Controller.h"
#include "views/models/GameView.h"
#include "ColocateController.h"

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
