#include "Registry.h"
#include "game.h"

Registry::Registry(Game *game) {
    this->game = game;
}

void Registry::undo(Game *game){
    GameMementoInterface *gameMemento = game->createMemento();
    game->restoreMemento(undoList_.front());
    undoList_.pop_front();
    redoList_.push_front(gameMemento);
}

void Registry::redo(Game *game) {
    GameMementoInterface *gameMemento = game->createMemento();
    game->restoreMemento(redoList_.front());
    redoList_.push_front(gameMemento);
    undoList_.pop_front();
}

bool Registry::undoable()  {
    return !undoList_.empty();
}

bool Registry::redoable() {
    return !redoList_.empty();
}

void Registry::reset() {
    if (game->getTurn() == 0){
        undoList_.clear();
        redoList_.clear();
    }
}

void Registry::execute() {
    GameMementoInterface *gameMemento = game->createMemento();
    undoList_.push_front(gameMemento);
    redoList_.clear();
}
