#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H
#include "command.h"
#include "ExitController.h"

class ExitCommand: public Command
{
public:
    ExitCommand(Game *game);
    void execute() override;
    bool isActive() override;

private:
    ExitController *exitController;
};

#endif // EXITCOMMAND_H
