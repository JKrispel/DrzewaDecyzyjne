#pragma once
#include "DecisionTreeNode.h"
#include <string>

class Action :
    public DecisionTreeNode
{
public:
    virtual std::string action() = 0; // symulacja akcji na potrzeby testowania
    DecisionTreeNode& makeDecision();
};

