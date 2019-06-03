#ifndef INGAMEMENUVIEW_H
#define INGAMEMENUVIEW_H
#include "compositeingamecontroller.h"


class InGameMenuView
{
public:
    InGameMenuView();
    void interact(CompositeInGameController *compositeInGameController);
    void printMenu(std::vector<Command*>vector);
    int getOption();
};

#endif // INGAMEMENUVIEW_H
