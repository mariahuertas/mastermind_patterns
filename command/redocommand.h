#ifndef REDOCOMMAND_H
#define REDOCOMMAND_H

#include <vector>
#include "command.h"
#include "RedoController.h"

class RedoCommand: public Command
{
public:
    RedoCommand(Game *game, std::vector<GameMemento*> *mementoVector);
    void execute() override;
    bool isActive() override;

private:
    RedoController *redoController_;
    std::vector<GameMemento*> *mementoVector_;
};

#endif // REDOCOMMAND_H
