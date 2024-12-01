#pragma once
#include "Decision.h"
class TestDecision :
    public Decision
{
    std::unique_ptr<DecisionTreeNode> getBranch();
};

