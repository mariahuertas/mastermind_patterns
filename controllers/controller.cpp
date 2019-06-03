#include "controller.h"

Controller::Controller(Game *game){
    assert (game != NULL);
    this->game = game;
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


