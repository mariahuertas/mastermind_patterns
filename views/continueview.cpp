#include "continueview.h"
#include <cstdlib>
#include <ctype.h>
#include <iostream>
#include <assert.h>

void ContinueView::interact(ContinueController *continueController){
    assert(continueController!= nullptr);
    char option;
    do{
        std::cout << "¿Do you want to start a new round?" << std::endl;
        std::cin >> option;
        option = toupper(option);
    } while (option != 'Y' && option != 'N');
    continueController->continueGame(option);
}
