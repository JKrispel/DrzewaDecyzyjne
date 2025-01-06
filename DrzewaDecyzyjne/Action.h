#pragma once
#include <memory>

class Action
{
public:
	float expiryTime;
	float priority;
	bool complete;	// czy akcja została wykonana
	// konstruktor
	Action(float priority, float expiryTime = 10.0f, bool complete = false)
		: expiryTime(expiryTime), priority(priority), complete(complete) {
	}
	
	void execute();
	bool interrupt();
	bool canDoBoth(const std::unique_ptr<Action>& other); // warunek równoczesnego wykonywania Akcji
	bool isComplete() const;	// getter dla complete
};

