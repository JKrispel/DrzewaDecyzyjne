#include "Stop.h"

std::unique_ptr<DecisionTreeNode> Stop::makeDecision()
{
	return std::make_unique<Stop>(*this);
}
