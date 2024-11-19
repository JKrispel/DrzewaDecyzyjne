#pragma once
#include "DecisionTreeNode.h"
class Decision :
    public DecisionTreeNode
{
public:

    virtual DecisionTreeNode& getBranch() = 0;
    virtual DecisionTreeNode& makeDecision();
};

