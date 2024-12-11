#include "Action.h"

bool Action::operator<(const Action& other) const
{
    return priority < other.priority;  // Ascending order
}
