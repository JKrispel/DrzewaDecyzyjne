#pragma once
#include "DecisionTreeNode.h"
#include <memory>
class Decision :
    public DecisionTreeNode
{
public:

    virtual std::unique_ptr<DecisionTreeNode> getBranch() = 0;
    virtual std::unique_ptr<DecisionTreeNode> makeDecision();
};

