#ifndef MASTERMIND_VIEWS_GAMEMEMENTO_H
#define MASTERMIND_VIEWS_GAMEMEMENTO_H

#include <controllers/state.h>
#include "GameMementoInterface.h"
#include <models/game.h>
#include "proposedcombination.h"

class GameMemento : public GameMementoInterface {
public:
    GameMemento(Game *game, State state, int turn, ProposedCombination **proposedCombination, SecretCombination *secretCombination);
    void restoreMemento() override;

private:
    Game* game_;
    SecretCombination *secretCombination_;
    ProposedCombination **proposedCombination_;
    State state_;
    int turn_;
};


#endif //MASTERMIND_VIEWS_GAMEMEMENTO_H
