#ifndef MASTERMIND_REGISTRY_H
#define MASTERMIND_REGISTRY_H
#include <list>
#include <vector>
#include "GameMementoInterface.h"

class Game;

class Registry {
public:
    explicit Registry(Game *game);
    void registry();
    void undo(Game *game);
    void redo(Game *game);
    bool undoable();
    bool redoable();
    void reset();

private:
    std::vector<GameMementoInterface*> *mementoVector_;
    Game *game;
    unsigned long firstPrevious;
};


#endif //MASTERMIND_REGISTRY_H
