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
    CompositeInGameController(Game *game);
    void accept(ControllerVisitor *controllerVisitor) override;
    vector<Command*> getCommandVector();
    void setCommands();
    void launchCommand(int option);
    void storeMemento();
    //void play();

private:
    std::vector<Command*> commandVector;
    ColocateController *colocateController;
    UndoCommand *undoCommand;
    std::vector <GameMemento*> vectorGameMemento_;

};

#endif // COMPOSITEINGAMECONTROLLER_H
