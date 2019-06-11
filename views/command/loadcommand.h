#ifndef LOADCOMMAND_H
#define LOADCOMMAND_H
#include "command.h"

class LoadCommand: public Command
{
public:
    LoadCommand(Game *game);
    void execute() override;
    bool isActive() override;
};

#endif // LOADCOMMAND_H
