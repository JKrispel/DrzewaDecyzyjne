// DrzewaDecyzyjne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "TestDecision.h"
#include "Action.h"


int main()
{
    // przykladowy test
    // TestDecision zwraca Finalna Decyzje w zaleznosci od dystansu:
    // dystans < 5: Stop, else: Follow 
    TestDecision rootNode;
    std::shared_ptr<DecisionTreeNode> decision = rootNode.makeDecision();
    std::cout << "Final Decision: " << typeid(*decision).name() << std::endl;
}