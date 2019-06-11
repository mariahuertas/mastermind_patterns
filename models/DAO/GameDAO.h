#ifndef MASTERMIND_GAMEDAO_H
#define MASTERMIND_GAMEDAO_H

#include <models/game.h>
#include "DAO.h"
#include "SecretCombinationDAO.h"

class GameDAO : public DAO{
public:
    GameDAO(Game *game);

    void load(std::string bufferedReader) override;

    void save(std::string fileWriter) override;

private:
    Game *game;
    SecretCombinationDAO *secretCombinationDAO;
};


#endif //MASTERMIND_GAMEDAO_H
