#include "MastermindView.h"

MasterMindView::MasterMindView(){
    this->startView = new StartView();
    this->gameView = new GameView ();
    this->continueView = new ContinueView ();
    this->initialMenuView = new InitialMenuView();
}

MasterMindView::~MasterMindView(){
    delete this->startView;
    delete this->gameView;
    delete this->continueView;
    delete this->initialMenuView;
}

void MasterMindView:: interact(Controller *controller){
    controller->accept(this);
}

void MasterMindView:: visit (StartController *startController){
    this->startView->interact(startController);
}

void MasterMindView:: visit (ColocateController *colocateController){
    this->gameView->interact(colocateController);
}

void MasterMindView::visit (ContinueController *continueController){
    this->continueView->interact(continueController);
}

void MasterMindView::visit (CompositeInitialController *compositeInitialController){
    this->initialMenuView->interact(compositeInitialController);
}

void MasterMindView::visit (CompositeInGameController *compositeInGameController){
    this->inGameMenuView->interact(compositeInGameController);
}

void MasterMindView::visit (ExitController *exitController){
}

void MasterMindView::visit (UndoController *undoController){
}

void MasterMindView::visit (RedoController *redoController){
}

void MasterMindView::visit (SaveController *saveController){
}