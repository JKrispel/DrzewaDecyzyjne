#pragma once
#include "DecisionTreeNode.h"
#include <string>
#include <memory>

class FinalDecision :
    public DecisionTreeNode
{
public:
    std::unique_ptr<DecisionTreeNode> makeDecision() = 0;
};

