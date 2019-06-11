#include "SaveController.h"

SaveController::SaveController(Game *game):Controller(game) {}

void SaveController::accept(ControllerVisitor *controllerVisitor) {
    controllerVisitor->visit(this);
}

void SaveController::save() {

}
