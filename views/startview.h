#ifndef STARTVIEW_H
#define STARTVIEW_H
#include "startcontroller.h"
#include "secretcombinationview.h"
class StartView
{
public:
    StartView() = default;
    void interact(StartController *startController);
};

#endif // STARTVIEW_H
