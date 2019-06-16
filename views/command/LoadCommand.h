#ifndef LOADCOMMAND_H
#define LOADCOMMAND_H
#include "Command.h"

class LoadCommand: public Command
{
public:
    explicit LoadCommand(Game *game);
    void execute() override;
    bool isActive() override;
};

#endif // LOADCOMMAND_H
