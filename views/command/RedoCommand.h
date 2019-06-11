#ifndef REDOCOMMAND_H
#define REDOCOMMAND_H

#include <vector>
#include "Command.h"
#include "RedoController.h"

class RedoCommand: public Command
{
public:
    RedoCommand(Game *game, Registry* registry);
    void execute() override;
    bool isActive() override;

private:
    RedoController *redoController_;
    Registry* mementoRegistry_;
};

#endif // REDOCOMMAND_H
