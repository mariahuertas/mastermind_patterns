#ifndef SECRETCOMBINATIONVIEW_H
#define SECRETCOMBINATIONVIEW_H
#include "StartController.h"

class SecretCombinationView
{
public:
    SecretCombinationView(StartController *startController);
    void printSecretCombination ();

private:
    StartController *startController;
};

#endif // SECRETCOMBINATIONVIEW_H
