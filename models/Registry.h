#ifndef MASTERMIND_REGISTRY_H
#define MASTERMIND_REGISTRY_H
#include <list>
#include <vector>
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
    int firstPrevious;
};


#endif //MASTERMIND_REGISTRY_H
