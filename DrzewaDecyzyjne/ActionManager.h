#pragma once
#include "Action.h"
#include <queue>
#include <set>

class ActionManager
{
	std::priority_queue<Action, std::vector<Action>, std::greater<>> queue;
	std::set<Action> active;

	void scheduleAction(Action& action);
	void execute();
};

