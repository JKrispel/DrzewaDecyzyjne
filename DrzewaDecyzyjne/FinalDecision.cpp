#include "FinalDecision.h"
#include <memory>
#include <stdexcept>

//std::shared_ptr<DecisionTreeNode> Action::makeDecision()
//{
//	return std::make_shared<Action>(*this);
//}


	// // 'Action': cannot instantiate abstract class
	// przeczytaj 5.10 (Action Execution),
	// aby nie komplikowac implementacji decyzji,(zostawic Action jako abstract class) 
	// prawdopodobnie usune testowa symulacje akcji
	// Action Manager powinien obslugiwac wykonanie akcji zwracanej przez alg. decyzyjny
	// refaktoryzacje podejme po zapoznaniu sie z rozdzialem
	// czy Akcja wgl powinna byc klasa abstrakcyjna? nie
	// Akcja alg. decyzyjnego jako informacja dla interfejsu Menadzera Akcji