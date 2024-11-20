#include "Decision.h"
#include <memory>


DecisionTreeNode& Decision::makeDecision()
{
    std::shared_ptr<DecisionTreeNode> branch = getBranch();

    return branch->makeDecision();
}
