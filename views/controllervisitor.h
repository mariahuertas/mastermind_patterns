#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H

class StartController;
class ColocateController;
class ContinueController;
class ExitController;
class UndoController;
class RedoController;

class CompositeInGameController;
class CompositeInitialController;

class ControllerVisitor
{
public:
    virtual ~ControllerVisitor() = default;
    virtual void visit (StartController *startController)=0;
    virtual void visit (ColocateController *colocateController)=0;
    virtual void visit (ContinueController *continueController)=0;
    virtual void visit (ExitController *exitController)=0;
    virtual void visit (UndoController *undoController)=0;
    virtual void visit (RedoController *redoController)=0;

    virtual void visit (CompositeInitialController *compositeInitialController) =0;
    virtual void visit (CompositeInGameController *compositeInGameController) = 0;
};

#endif // CONTROLLERVISITOR_H
