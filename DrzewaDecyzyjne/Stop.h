#pragma once
#include "FinalDecision.h"
#include <string>

class Stop :
    public FinalDecision
{
    std::unique_ptr<DecisionTreeNode> makeDecision();
};

