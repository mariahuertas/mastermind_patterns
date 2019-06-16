#include "ContinueRoundCommand.h"

ContinueRoundCommand::ContinueRoundCommand(ColocateController* colocateController): Command("Next Round"){
    this->colocateController_ = colocateController;
}

void ContinueRoundCommand::execute(){
    auto *gameView = new GameView();
    gameView->interact(this->colocateController_);
    colocateController_->registryMemento();
}

bool ContinueRoundCommand::isActive() {
    return true;
}
