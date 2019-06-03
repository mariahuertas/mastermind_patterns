#ifndef SECRETCOMBINATIONVIEW_H
#define SECRETCOMBINATIONVIEW_H
#include "startcontroller.h"

class SecretCombinationView
{
public:
    SecretCombinationView(StartController *startController);
    void printSecretCombination ();

private:
    StartController *startController;
};

#endif // SECRETCOMBINATIONVIEW_H
