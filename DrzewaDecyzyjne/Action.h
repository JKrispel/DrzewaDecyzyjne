#pragma once
#include "DecisionTreeNode.h"
#include <string>
#include <memory>

class Action :
    public DecisionTreeNode
{
public:
    std::shared_ptr<DecisionTreeNode> makeDecision() = 0;
};

