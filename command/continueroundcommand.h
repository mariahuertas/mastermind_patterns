#ifndef CONTINUEROUNDCOMMAND_H
#define CONTINUEROUNDCOMMAND_H
#include "command.h"
#include "gameview.h"

class ContinueRoundCommand: public Command
{
public:
    ContinueRoundCommand(ColocateController *colocateController);
    void execute();
    bool isActive() override;

private:
    ColocateController *colocateController_;
};
#endif // CONTINUEROUNDCOMMAND_H
