#include "continueroundcommand.h"

ContinueRoundCommand::ContinueRoundCommand(ColocateController* colocateController): Command("Next Round"){
    colocateController_ = colocateController;
}

void ContinueRoundCommand::execute(){
    GameView *gameView = new GameView();
    gameView->interact(colocateController_);
}

bool ContinueRoundCommand::isActive() {
    return true;
}
