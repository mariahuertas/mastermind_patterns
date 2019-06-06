#include "logic.h"
#include "game.h"

Logic::Logic()
{
    game = new Game();
    //colocateController = new ColocateController(game);
    //startController = new StartController(game);
    //continueController = new ContinueController(game);
    registry = new Registry(game);
    compositeInitialController = new CompositeInitialController(game, registry);
    compositeInGameController = new CompositeInGameController(game, registry);

}

Controller *Logic::getController(){
    switch (game->getState()){
    case (INITIAL):
        return compositeInitialController;
    case (IN_GAME):
        return compositeInGameController;
        case (EXIT):
    default:
        return NULL;
    }
}

/* INITIAL,
    IN_GAME,
    REDO,
    SAVE,
    UNDO,
    LOAD,
    FINAL,
    EXIT*/
