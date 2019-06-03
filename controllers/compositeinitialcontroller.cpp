#include "compositeinitialcontroller.h"

CompositeInitialController::CompositeInitialController(Game *game):Controller(game){
    commandVector.push_back(new StartCommand(game));
    commandVector.push_back(new LoadCommand(game));
    commandVector.push_back(new ExitCommand(game));
}

vector<Command*> CompositeInitialController:: getCommandVector(){
    return this-> commandVector;
}
void CompositeInitialController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}
void CompositeInitialController:: setCommands(){

}

void CompositeInitialController::launchCommand(int option){
    this->commandVector[option]->execute();
}
