#include "ActionManager.h"

void ActionManager::scheduleAction(std::unique_ptr<Action> action)
{
	queue.push(std::move(action));
}

void ActionManager::execute(int currentTime) // czas z p�tli gry
{
	// Action priorityCutoff = active[] ...
}
