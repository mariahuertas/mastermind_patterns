#ifndef UNDOCOMMAND_H
#define UNDOCOMMAND_H
#include "command.h"
#include "vector"
#include "UndoController.h"

class UndoCommand: public Command
{
public:
    UndoCommand(Game *game, std::vector<GameMemento*> *mementoVector);
    void execute() override;
    bool isActive() override;


private:
    UndoController *undoController;
    std::vector<GameMemento*> *mementoVector_;

};

#endif // UNDOCOMMAND_H
