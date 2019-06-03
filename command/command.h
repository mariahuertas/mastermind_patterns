#ifndef COMMAND_H
#define COMMAND_H
#include "string.h"
#include "game.h"
#include "controller.h"

class Command
{
public:
    virtual std::string getTitle(){return this->title;}
    virtual void execute()=0;
    Command(std::string title){this->title=title;}
    virtual bool isActive() = 0;

private:
    std::string title;

};

#endif // COMMAND_H
