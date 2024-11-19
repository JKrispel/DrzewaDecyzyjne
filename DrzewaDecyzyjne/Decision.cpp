#include "Decision.h"


DecisionTreeNode& Decision::makeDecision()
{
    auto branch = getBranch(); // ?

    return branch.makeDecision();
}
