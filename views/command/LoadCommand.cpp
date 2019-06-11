#include "LoadCommand.h"

LoadCommand::LoadCommand(Game *game): Command("Load"){}

void LoadCommand::execute(){}

bool LoadCommand::isActive() {
    return true;
}
