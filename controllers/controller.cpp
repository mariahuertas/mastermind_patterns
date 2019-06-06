#include <assert.h>
#include "controller.h"
#include "game.h"

Controller::Controller(Game *game){
    assert (game != nullptr);
    this->game = game;
    this->registry = &this->game->registry;
}

Game Controller::getGame(){
    return *game;
}

State Controller::getState(){
    return game->getState();
}
void Controller::setState(State state){
    //assert
    return game->setState(state);
}


