#pragma once
class Action
{
	float expiryTime;
	float priority;

	bool interrupt();
	bool canDoBoth(Action& other);
	bool isComplete();
	bool operator < (const Action& other) const;
};

