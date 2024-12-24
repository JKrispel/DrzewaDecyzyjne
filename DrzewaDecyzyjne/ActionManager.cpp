#include "ActionManager.h"

void ActionManager::scheduleAction(std::unique_ptr<Action> action)
{
	queue.push(std::move(action));
}

void ActionManager::execute(int currentTime) // czas z pêtli gry
{
	// Action priorityCutoff = active[] ...
}
