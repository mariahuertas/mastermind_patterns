#ifndef CONTINUEROUNDCOMMAND_H
#define CONTINUEROUNDCOMMAND_H
#include "Command.h"
#include "views/models/GameView.h"

class ContinueRoundCommand: public Command
{
public:
    explicit ContinueRoundCommand(ColocateController *colocateController);
    void execute() override;
    bool isActive() override;

private:
    ColocateController *colocateController_;
};
#endif // CONTINUEROUNDCOMMAND_H
