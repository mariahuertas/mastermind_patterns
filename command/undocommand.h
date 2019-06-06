#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H
#include "command.h"
#include "vector"
#include "UndoController.h"

class UndoCommand: public Command
{
public:
    UndoCommand(Game *game, Registry *registry);
    void execute() override;
    bool isActive() override;


private:
    UndoController *undoController;
   Registry *mementoRegistry_;

};

#endif // UNDOCOMMAND_H
