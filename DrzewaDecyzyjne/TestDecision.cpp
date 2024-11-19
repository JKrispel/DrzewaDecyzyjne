#include "TestDecision.h"
#include "Stop.h"
#include "Follow.h"
#include <iostream>


DecisionTreeNode& TestDecision::getBranch()
{   
    int distance;
    std::cin >> distance;

    if (distance < 5) {
        
        Stop currentDecision;
        return currentDecision;
    }
    else {
        
        Follow currentDecision;
        return currentDecision;
    }
}
