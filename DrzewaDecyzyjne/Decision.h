#pragma once
#include "DecisionTreeNode.h"
#include <memory>
class Decision :
    public DecisionTreeNode
{
public:

    virtual std::shared_ptr<DecisionTreeNode> getBranch() = 0;
    virtual DecisionTreeNode& makeDecision();
};

