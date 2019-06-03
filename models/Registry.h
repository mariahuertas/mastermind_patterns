#ifndef MASTERMIND_REGISTRY_H
#define MASTERMIND_REGISTRY_H
#include <list>
#include "GameMemento.h"
#include "controllers/game.h"
class Registry {
public:
    Registry(Game *game);

    void undo(Game *game);

    void redo(Game *game);

    bool undoable();

    bool redoable();

    void reset();

private:
    list<GameMemento*> undoList_;
    list<GameMemento*> redoList_;

    Game *game;

};


#endif //MASTERMIND_REGISTRY_H
