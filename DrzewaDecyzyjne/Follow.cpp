#include "Follow.h"

std::shared_ptr<DecisionTreeNode> Follow::makeDecision()
{
	return std::make_shared<Follow>(*this);
}
