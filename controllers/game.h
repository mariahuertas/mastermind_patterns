#ifndef GAME_H
#define GAME_H

#include <GameMemento.h>
#include "proposedcombination.h"
#include "secretcombination.h"
#include "state.h"

class Game
{
public:
    Game();
    ~Game();
    State getState();
    void setState(State state);
    void read(char *combination);
    int getTurn();
    bool isWinner();
    ProposedCombination **getProposedCombination();
    char *getSecretCombination();
    void incrementTurn();
    void calculateResult();
    void generateMisteryColours();
    void clear();
    GameMemento* createMemento();
    void restoreMemento(GameMemento* gameMemento);

private:
    const static int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination **proposedCombination;
    State state;
    int turn;
};

#endif // GAME_H
