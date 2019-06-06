#include "compositeingamecontroller.h"

CompositeInGameController::CompositeInGameController(Game *game, Registry *registry) : Controller(game){
    colocateController = new ColocateController(game);
    commandVector.push_back(new ContinueRoundCommand(colocateController));
    commandVector.push_back(new UndoCommand(game, registry));
    commandVector.push_back(new RedoCommand(game, registry));
    commandVector.push_back(new SaveCommand(game));
    commandVector.push_back(new ExitCommand(game));
}


std::vector<Command*> CompositeInGameController:: getCommandVector(){
    return this-> commandVector;
}

void CompositeInGameController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}

void CompositeInGameController::launchCommand(int option){
this->commandVector[option]->execute();
}

