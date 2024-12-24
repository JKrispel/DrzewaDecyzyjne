#pragma once
#include "Action.h"
#include <queue>
#include <set>
#include <memory>
// TODO ujednoliciæ sortowanie
class ActionManager
{	
	struct CompareActions {
		bool operator()(const std::unique_ptr<Action>& lhs, const std::unique_ptr<Action>& rhs) const {
			return (*lhs).priority > (*rhs).priority; // Porównaj obiekty typu Action po dereferencji
		}
	};
	// unique_ptr - usuniêcie Akcji z queue bêdzie niszczyæ obiekt
	std::priority_queue<std::unique_ptr<Action>, std::vector<std::unique_ptr<Action>>, CompareActions> queue;
	std::set<std::unique_ptr<Action>, CompareActions> active;	// Sygnalizuje, które akcje s¹ aktywne (isComplete() decyduje o usuniêciu)
	// Obie struktury powinny byæ uporz¹dkowane rosn¹co !! 
	void scheduleAction(std::unique_ptr<Action>);
	void execute(int currentTime);
};

