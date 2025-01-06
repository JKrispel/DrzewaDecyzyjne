#include "Action.h"
#include <iostream>

void Action::execute()
{
    // some work
    complete = true;
    std::cout << "Action with priority: " << priority << " executed!" << std::endl;    // debug
}

bool Action::interrupt()
{
    return false;
}

bool Action::canDoBoth(const std::unique_ptr<Action>& other)
{   
    return false;   
}

bool Action::isComplete() const
{
    return complete;
}
