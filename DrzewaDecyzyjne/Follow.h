#pragma once
#include "FinalDecision.h"
#include <string>

class Follow :
    public FinalDecision
{
    std::unique_ptr<DecisionTreeNode> makeDecision();
};
