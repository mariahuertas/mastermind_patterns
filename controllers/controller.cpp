#include <assert.h>
#include "controller.h"
#include "game.h"

Controller::Controller(Game *game){
    assert (game != nullptr);
    this->game = game;
    this->registry = &this->game->registry;
}

void Controller::setState(State state){
    return game->setState(state);
}


