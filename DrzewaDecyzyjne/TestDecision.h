#pragma once
#include "Decision.h"
class TestDecision :
    public Decision
{
    DecisionTreeNode& getBranch();
};

