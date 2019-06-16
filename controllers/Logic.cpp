#include "Logic.h"
#include "Game.h"

Logic::Logic(){
    game = new Game();
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
        return nullptr;
    }
}