#include "Follow.h"

std::unique_ptr<DecisionTreeNode> Follow::makeDecision()
{
	return std::make_unique<Follow>(*this);
}
