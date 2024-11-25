#include "TestDecision.h"
#include "Stop.h"
#include "Follow.h"
#include <iostream>


std::shared_ptr<DecisionTreeNode> TestDecision::getBranch()
{   
    int distance;
    std::cout << "Podaj odleglosc od celu: (test only)\n";
    std::cin>>distance;

    if (distance < 5) {
        
        return std::make_shared<Stop>();
    }
    else {
        
        return std::make_shared<Follow>();
    }
}
