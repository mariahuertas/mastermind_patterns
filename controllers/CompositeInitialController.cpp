#include "CompositeInitialController.h"

CompositeInitialController::CompositeInitialController(Game *game, Registry *registry):Controller(game){
    commandVector.push_back(new StartCommand(game));
    commandVector.push_back(new LoadCommand(game));
    commandVector.push_back(new ExitCommand(game));
}

std::vector<Command*> CompositeInitialController:: getCommandVector(){
    return this-> commandVector;
}
void CompositeInitialController::accept(ControllerVisitor *controllerVisitor){
    controllerVisitor->visit(this);
}
void CompositeInitialController:: setCommands(){

}

void CompositeInitialController::launchCommand(int option){
    assert(0 <= option <= commandVector.size());
    this->commandVector[option]->execute();
}
