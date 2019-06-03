#ifndef INITIALMENUVIEW_H
#define INITIALMENUVIEW_H
#include "compositeinitialcontroller.h"

class InitialMenuView
{
public:
    InitialMenuView();
    void interact(CompositeInitialController *compositeInitialController);
    void printMenu(std::vector<Command*>vector);
    int getOption();

private:

};

#endif // INITIALMENUVIEW_H
