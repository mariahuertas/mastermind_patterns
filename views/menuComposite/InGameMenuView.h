#ifndef INGAMEMENUVIEW_H
#define INGAMEMENUVIEW_H
#include "CompositeInGameController.h"

class InGameMenuView
{
public:
    InGameMenuView() = default;
    void interact(CompositeInGameController *compositeInGameController);
    void printMenu(std::vector<Command*>vector);
    int getOption();
};

#endif // INGAMEMENUVIEW_H
