#include "TestDecision.h"
#include "Stop.h"
#include "Follow.h"
#include <iostream>


std::unique_ptr<DecisionTreeNode> TestDecision::getBranch()
{   
    int distance;
    std::cout << "Podaj odleglosc od celu: (test only)\n";
    std::cin>>distance;

    if (distance < 5) {
        
        return std::make_unique<Stop>();
    }
    else {
        
        return std::make_unique<Follow>();
    }
}
