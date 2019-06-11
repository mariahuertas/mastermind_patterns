#include "MastermindView.h"

MasterMindView::MasterMindView(){
    startView = new StartView();
    gameView = new GameView ();
    continueView = new ContinueView ();
    initialMenuView = new InitialMenuView();
}

MasterMindView::~MasterMindView(){
    delete startView;
    delete gameView;
    delete continueView;
    delete initialMenuView;
}

void MasterMindView:: interact(Controller *controller){
    controller->accept(this);
}

void MasterMindView:: visit (StartController *startController){
    startView->interact(startController);
}

void MasterMindView:: visit (ColocateController *colocateController){
    gameView->interact(colocateController);
}

void MasterMindView::visit (ContinueController *continueController){
    continueView->interact(continueController);
}

void MasterMindView::visit (CompositeInitialController *compositeInitialController){
    initialMenuView->interact(compositeInitialController);
}

void MasterMindView::visit (CompositeInGameController *compositeInGameController){
    inGameMenuView->interact(compositeInGameController);
}

void MasterMindView::visit (ExitController *exitController){
}

void MasterMindView::visit (UndoController *undoController){
}

void MasterMindView::visit (RedoController *redoController){
}

void MasterMindView::visit (SaveController *saveController){
}