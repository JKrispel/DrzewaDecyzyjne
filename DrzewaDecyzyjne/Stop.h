#pragma once
#include "FinalDecision.h"
#include <string>

class Stop :
    public FinalDecision
{
    std::shared_ptr<DecisionTreeNode> makeDecision();
};

