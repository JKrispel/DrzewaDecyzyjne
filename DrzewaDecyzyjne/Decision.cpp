#include "Decision.h"
#include <memory>


std::unique_ptr<DecisionTreeNode>  Decision::makeDecision()
{
    std::unique_ptr<DecisionTreeNode> branch = getBranch();

    return branch->makeDecision();
}
