#ifndef STARTVIEW_H
#define STARTVIEW_H
#include "StartController.h"
#include "views/models/SecretCombinationView.h"
class StartView
{
public:
    StartView() = default;
    void interact(StartController *startController);
};

#endif // STARTVIEW_H
