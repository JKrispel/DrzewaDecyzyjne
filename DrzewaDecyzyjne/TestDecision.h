#pragma once
#include "Decision.h"
class TestDecision :
    public Decision
{
    std::shared_ptr<DecisionTreeNode> getBranch();
};

