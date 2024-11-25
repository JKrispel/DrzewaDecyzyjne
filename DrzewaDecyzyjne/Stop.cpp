#include "Stop.h"

std::shared_ptr<DecisionTreeNode> Stop::makeDecision()
{
	return std::make_shared<Stop>(*this);
}
