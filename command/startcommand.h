#ifndef STARTCOMMAND_H
#define STARTCOMMAND_H
#include "command.h"
#include "game.h"
#include "startview.h"

class StartCommand: public Command
{
public:
    StartCommand(Game *game);
    void execute() override;
    bool isActive() override;


private:
    StartController *startController;

};

#endif // STARTCOMMAND_H
