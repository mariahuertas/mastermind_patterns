#ifndef INITIALMENUVIEW_H
#define INITIALMENUVIEW_H
#include "compositeinitialcontroller.h"

class InitialMenuView
{
public:
    InitialMenuView() = default;
    void interact(CompositeInitialController *compositeInitialController);
    void printMenu(std::vector<Command*>vector);
    int getOption();
};

#endif // INITIALMENUVIEW_H
