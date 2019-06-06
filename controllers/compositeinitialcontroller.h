#ifndef COMPOSITEINITIALCONTROLLER_H
#define COMPOSITEINITIALCONTROLLER_H
#include "command.h"
#include "loadcommand.h"
#include "savecommand.h"
#include "redocommand.h"
#include "undocommand.h"
#include "exitcommand.h"
#include "startcommand.h"
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
