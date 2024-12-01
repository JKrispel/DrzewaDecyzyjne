#pragma once
#include <memory>
class DecisionTreeNode
{
public:
	virtual std::unique_ptr<DecisionTreeNode> makeDecision() = 0;
};

