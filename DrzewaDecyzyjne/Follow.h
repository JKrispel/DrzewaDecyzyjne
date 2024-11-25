#pragma once
#include "Action.h"
#include <string>

class Follow :
    public Action
{
    std::shared_ptr<DecisionTreeNode> makeDecision();
};
