#include <assert.h>
#include "Controller.h"
#include "Game.h"

Controller::Controller(Game *game){
    assert (game != nullptr);
    this->game = game;
    this->registry = &this->game->registry;
}

void Controller::setState(State state){
    return game->setState(state);
}


