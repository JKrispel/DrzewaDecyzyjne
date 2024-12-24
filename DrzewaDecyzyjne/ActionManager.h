#pragma once
#include "Action.h"
#include <queue>
#include <set>
#include <memory>
// TODO ujednolici� sortowanie
class ActionManager
{	
	struct CompareActions {
		bool operator()(const std::unique_ptr<Action>& lhs, const std::unique_ptr<Action>& rhs) const {
			return (*lhs).priority > (*rhs).priority; // Por�wnaj obiekty typu Action po dereferencji
		}
	};
	// unique_ptr - usuni�cie Akcji z queue b�dzie niszczy� obiekt
	std::priority_queue<std::unique_ptr<Action>, std::vector<std::unique_ptr<Action>>, CompareActions> queue;
	std::set<std::unique_ptr<Action>, CompareActions> active;	// Sygnalizuje, kt�re akcje s� aktywne (isComplete() decyduje o usuni�ciu)
	// Obie struktury powinny by� uporz�dkowane rosn�co !! 
	void scheduleAction(std::unique_ptr<Action>);
	void execute(int currentTime);
};

