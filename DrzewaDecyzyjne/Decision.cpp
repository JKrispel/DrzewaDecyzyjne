#include "Decision.h"
#include <memory>


std::shared_ptr<DecisionTreeNode>  Decision::makeDecision()
{
    std::shared_ptr<DecisionTreeNode> branch = getBranch();

    return branch->makeDecision();
}
