#include "Registry.h"
#include "Game.h"

Registry::Registry(Game *game) {
    assert(game!= nullptr);
    this->game = game;
    this->firstPrevious = 0;
    this->mementoVector_ = new std::vector <GameMementoInterface*>();
}

void Registry::registry() {
    for(unsigned int i=0; i<this->firstPrevious; i++){
        this->mementoVector_->pop_back();
    }
    this->firstPrevious = 0;
    this->mementoVector_->push_back(this->game->createMemento());
}

void Registry::undo(Game *game){
    assert(game!= nullptr);
    this->firstPrevious++;
    game->restoreMemento(this->mementoVector_->at(this->firstPrevious));
}

void Registry::redo(Game *game) {
    assert(game!= nullptr);
    this->firstPrevious--;
    game->restoreMemento(this->mementoVector_->at(this->firstPrevious));
}

bool Registry::undoable()  {
    return this->firstPrevious < this->mementoVector_->size() - 1;;
}

bool Registry::redoable() {
    return this->firstPrevious >= 1;
}

void Registry::reset() {
    if (this->game->getTurn() == 0){
        this->mementoVector_ = new std::vector <GameMementoInterface*>();
        this->mementoVector_->push_back(this->game->createMemento());
        this->firstPrevious= 0;
    }
}