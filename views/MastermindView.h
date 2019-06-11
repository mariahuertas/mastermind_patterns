#ifndef MASTERMINDVIEW_H
#define MASTERMINDVIEW_H
#include "Controller.h"
#include "ControllerVisitor.h"
#include "StartController.h"
#include "ColocateController.h"
#include "StartView.h"
#include "views/models/GameView.h"
#include "ContinueView.h"
//////////////////////////////////////////////////////////////////////
#include "CompositeInitialController.h"
#include "CompositeInGameController.h"
#include "views/menuComposite/InitialMenuView.h"
#include "views/menuComposite/InGameMenuView.h"


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
    void visit(SaveController *saveController) override;

private:
    InitialMenuView *initialMenuView;
    InGameMenuView *inGameMenuView;
    StartView *startView;
    GameView *gameView;
    ContinueView *continueView;
};

#endif // MASTERMINDVIEW_H
