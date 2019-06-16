#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include "Controller.h"

class Command
{
public:
    explicit Command(std::string title){this->title= std::move(title);}
    virtual std::string getTitle(){return this->title;}
    virtual void execute()=0;
    virtual bool isActive() = 0;

private:
    std::string title;
};

#endif // COMMAND_H
