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
#include "controller.h"

class CompositeInitialController: public Controller
{
public:
    void accept(ControllerVisitor *controllerVisitor) override;
    CompositeInitialController(Game *game, Registry *registry);
    std::vector<Command*> getCommandVector();
    void setCommands();
    void launchCommand(int option);

private:
    std::vector<Command*> commandVector;

};

#endif // COMPOSITEINITIALCONTROLLER_H
