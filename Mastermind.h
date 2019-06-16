#ifndef MASTERMIND_H
#define MASTERMIND_H
#include "controllers/Logic.h"
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "views/MastermindView.h"
#include <memory>

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
