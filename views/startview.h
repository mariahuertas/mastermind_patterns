#ifndef STARTVIEW_H
#define STARTVIEW_H
#include "startcontroller.h"
#include "views/models/secretcombinationview.h"
class StartView
{
public:
    StartView() = default;
    void interact(StartController *startController);
};

#endif // STARTVIEW_H
