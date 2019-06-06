#ifndef MASTERMIND_REGISTRY_H
#define MASTERMIND_REGISTRY_H
#include <list>
#include "GameMementoInterface.h"

class Game;

class Registry {
public:
    Registry(Game *game);
    void undo(Game *game);
    void redo(Game *game);
    bool undoable();
    bool redoable();
    void reset();
    void execute();

private:
    std::list<GameMementoInterface*> undoList_;
    std::list<GameMementoInterface*> redoList_;
    Game *game;
};


#endif //MASTERMIND_REGISTRY_H
