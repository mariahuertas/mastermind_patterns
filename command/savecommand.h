#ifndef SAVECOMMAND_H
#define SAVECOMMAND_H
#include "command.h"

class SaveCommand: public Command
{
public:
    SaveCommand(Game *game);
    void execute() override;
    bool isActive() override;
};

#endif // SAVECOMMAND_H
