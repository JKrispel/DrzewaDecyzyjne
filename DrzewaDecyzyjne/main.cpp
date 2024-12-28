// DrzewaDecyzyjne.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <memory>
#include "TestDecision.h"
#include "FinalDecision.h"
#include "ActionManager.h"
#include "Action.h"


int main()
{
    // przykladowy test
    // TestDecision zwraca Finalna Decyzje w zaleznosci od dystansu:
    // dystans < 5: Stop, else: Follow
    TestDecision rootNode;
    std::unique_ptr<DecisionTreeNode> decision = rootNode.makeDecision();
    std::cout << "Final Decision: " << typeid(*decision).name() << std::endl;

    // dodanie przykladowych Akcji do kolejki
    ActionManager manager;
    //przypadkowa kolejnosc
    manager.scheduleAction(std::move(std::make_unique<Action>(3.0f)));  // najnizszy priorytet
    manager.scheduleAction(std::move(std::make_unique<Action>(1.0f)));  // najwyzszy
    manager.scheduleAction(std::move(std::make_unique<Action>(2.0f)));  // sredni
    // poprawne uporzadkowanie

    while (!manager.queue.empty()) {
        std::cout << "Action with priority: " << manager.queue.top()->priority << std::endl;
        manager.queue.pop();
    }
}
