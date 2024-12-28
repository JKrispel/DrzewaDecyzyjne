#pragma once
class Action
{
public:
	float expiryTime;
	float priority;

	// konstruktor
	Action(float priority, float expiryTime = 0.0f)
		: expiryTime(expiryTime), priority(priority) {
	}

	bool interrupt();
	bool canDoBoth(Action& other);
	bool isComplete();
	bool operator < (const Action& other) const;
};

