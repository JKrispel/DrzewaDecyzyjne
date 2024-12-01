#pragma once
#include "FinalDecision.h"
#include <string>

class Follow :
    public FinalDecision
{
    std::shared_ptr<DecisionTreeNode> makeDecision();
};
