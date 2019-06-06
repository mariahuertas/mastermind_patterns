#ifndef CONTINUEROUNDCOMMAND_H
#define CONTINUEROUNDCOMMAND_H
#include "command.h"
#include "gameview.h"

class ContinueRoundCommand: public Command
{
public:
    ContinueRoundCommand(ColocateController *colocateController);
    void execute() override;
    bool isActive() override;

private:
    ColocateController *colocateController_;
};
#endif // CONTINUEROUNDCOMMAND_H
