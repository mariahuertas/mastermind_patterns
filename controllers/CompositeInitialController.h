#ifndef COMPOSITEINITIALCONTROLLER_H
#define COMPOSITEINITIALCONTROLLER_H
#include "Command.h"
#include "LoadCommand.h"
#include "SaveCommand.h"
#include "RedoCommand.h"
#include "UndoCommand.h"
#include "ExitCommand.h"
#include "StartCommand.h"
#include <vector>
#include "Controller.h"

class CompositeInitialController: public Controller
{
public:
    CompositeInitialController(Game *game, Registry *registry);
    void accept(ControllerVisitor *controllerVisitor) override;
    std::vector<Command*> getCommandVector();
    void setCommands();
    void launchCommand(int option);

private:
    std::vector<Command*> commandVector;

};

#endif // COMPOSITEINITIALCONTROLLER_H
