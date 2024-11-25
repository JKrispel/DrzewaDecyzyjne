#pragma once
#include "Action.h"
#include <string>

class Stop :
    public Action
{
    std::shared_ptr<DecisionTreeNode> makeDecision();
};

