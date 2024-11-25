#pragma once
#include <memory>
class DecisionTreeNode
{
public:
	virtual std::shared_ptr<DecisionTreeNode> makeDecision() = 0;
};

