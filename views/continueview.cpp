#include "continueview.h"
#include <cstdlib>
#include <ctype.h>

ContinueView::ContinueView(){}

void ContinueView::interact(ContinueController *continueController){
    char respuesta;
    do{
        std::cout << "¿Desea empezar una nueva partida?" << endl;
        std::cin >> respuesta;
        respuesta = toupper(respuesta);
    } while (respuesta != 'Y' && respuesta != 'N');
    continueController->continueGame(respuesta);
}
