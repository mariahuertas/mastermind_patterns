#include "ContinueRoundCommand.h"

ContinueRoundCommand::ContinueRoundCommand(ColocateController* colocateController): Command("Next Round"){
    this->colocateController_ = colocateController;
}

void ContinueRoundCommand::execute(){
    GameView *gameView = new GameView();
    gameView->interact(this->colocateController_);
}

bool ContinueRoundCommand::isActive() {
    return true;
}
