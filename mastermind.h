#ifndef MASTERMIND_H
#define MASTERMIND_H
#include "controllers/logic.h"
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "views/mastermindview.h"

class MasterMind
{
public:
   MasterMind();
   ~MasterMind();
   void play();

private:
    Logic *logic;
    MasterMindView *masterMindView;
};

#endif
