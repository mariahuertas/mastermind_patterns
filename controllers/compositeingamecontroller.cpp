#include "compositeingamecontroller.h"

CompositeInGameController::CompositeInGameController(Game *game):Controller(game)
{
    commandVector.push_back(new ContinueRoundCommand(colocateController));
    commandVector.push_back(new UndoCommand(game, &vectorGameMemento_));
    commandVector.push_back(new RedoCommand(game, &vectorGameMemento_));
    commandVector.push_back(new SaveCommand(game));
    commandVector.push_back(new ExitCommand(game));
}


vector<Command*> CompositeInGameController:: getCommandVector(){
    return this-> commandVector;
}
void CompositeInGameController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}
void CompositeInGameController:: setCommands(){

}

void CompositeInGameController::launchCommand(int option){
    this->commandVector[option]->execute();
}

void CompositeInGameController::storeMemento() {
    vectorGameMemento_.push_back(game->createMemento());
}
