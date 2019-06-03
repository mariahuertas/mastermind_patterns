#ifndef MASTERMINDVIEW_H
#define MASTERMINDVIEW_H
#include "controller.h"
#include "controllervisitor.h"
#include "startcontroller.h"
#include "colocatecontroller.h"
#include "startview.h"
#include "gameview.h"
#include "continueview.h"
//////////////////////////////////////////////////////////////////////
#include "compositeinitialcontroller.h"
#include "compositeingamecontroller.h"
#include "initialmenuview.h"
#include "ingamemenuview.h"


class MasterMindView : public ControllerVisitor
{
public:
    MasterMindView();
    ~MasterMindView() override;
    void interact(Controller *controller);
    void visit (CompositeInitialController *compositeInitialController) override;
    void visit (ColocateController *colocateController) override;
    void visit (ContinueController *continueController) override;
    void visit (StartController *startController) override;
    void visit (CompositeInGameController *compositeInGameController) override;
    void visit (ExitController *exitController) override;
    void visit (UndoController *undoController) override;
    void visit (RedoController *redoController) override;




private:
    InitialMenuView *initialMenuView;
    InGameMenuView *inGameMenuView;
    StartView *startView;
    GameView *gameView;
    ContinueView *continueView;
};

#endif // MASTERMINDVIEW_H
