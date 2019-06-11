#ifndef SAVECOMMAND_H
#define SAVECOMMAND_H
#include "command.h"
#include "SaveController.h"

class SaveCommand: public Command
{
public:
    SaveCommand(Game *game);
    void execute() override;
    bool isActive() override;
private:
    SaveController *saveController;

};

#endif // SAVECOMMAND_H
