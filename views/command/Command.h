#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include "controller.h"

class Command
{
public:
    Command(std::string title){this->title=title;}
    virtual std::string getTitle(){return this->title;}
    virtual void execute()=0;
    virtual bool isActive() = 0;

private:
    std::string title;
};

#endif // COMMAND_H
