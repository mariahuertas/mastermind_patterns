#include "Registry.h"
#include "Game.h"

Registry::Registry(Game *game) {
    assert(game!= nullptr);
    this->game = game;
    this->firstPrevious = 0;
}

void Registry::undo(Game *game){
    assert(game!= nullptr);
    GameMementoInterface *gameMemento = game->createMemento();
    game->restoreMemento(undoList_.front());
    undoList_.pop_front();
    redoList_.push_front(gameMemento);
}

void Registry::redo(Game *game) {
    assert(game!= nullptr);
    GameMementoInterface *gameMemento = game->createMemento();
    game->restoreMemento(redoList_.front());
    redoList_.push_front(gameMemento);
    undoList_.pop_front();
}

bool Registry::undoable()  {
    return this->firstPrevious < this->undoList_.size() - 1;;
}

bool Registry::redoable() {
    return this->firstPrevious >= 1;
}

void Registry::reset() {
    if (game->getTurn() == 0){
        undoList_.clear();
        redoList_.clear();
        this->firstPrevious = 0;
    }
}

void Registry::execute() {
    GameMementoInterface *gameMemento = game->createMemento();
    undoList_.push_front(gameMemento);
    redoList_.clear();
}
