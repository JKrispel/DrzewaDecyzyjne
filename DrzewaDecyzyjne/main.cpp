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
    // TEST 1: Drzewa Decyzyjne
    std::cout << "TEST 1:" << std::endl;
    // TestDecision zwraca Finalna Decyzje w zaleznosci od dystansu:
    // dystans < 5: Stop, else: Follow
    TestDecision rootNode;
    std::unique_ptr<DecisionTreeNode> decision = rootNode.makeDecision();
    std::cout << "Final Decision: " << typeid(*decision).name() << std::endl;

    // TEST 2: Rosnący porządek Akcji w queue wg. priority (mniejsza wartość priority, wyższy priorytet)
    std::cout << "TEST 2:" << std::endl;
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
    // TODO dodaj przykładowe Akcje dla poniższych testów, napisz testy, queueSnapshot może okazać się zbędne (iteratory)
    // 
    // TEST 3: rosnący porządek Akcji w active
    std::cout << "TEST 3:" << std::endl;
    manager.scheduleAction(std::move(std::make_unique<Action>(3.0f)));  // najnizszy priorytet
    manager.scheduleAction(std::move(std::make_unique<Action>(1.0f)));  // najwyzszy
    manager.scheduleAction(std::move(std::make_unique<Action>(2.0f)));  // sredni
    // domyślne expiry time Akcji to 10.0f
    manager.execute(1.0f);  // przykładowa pierwsza klatka gry (czas: 1.0f)
    manager.execute(2.0f);
    manager.execute(3.0f);
    manager.execute(4.0f);
    // manager.execute(5.0f);  // bez tej linii za mała ilość klatek o 1 by wykonać wszystkie Akcje
    // Wynik: Wykonanie Akcji o priority równym 1 oraz 2. (za mało "czasu")
    // (uporządkowane wg. priority rosnąco)
    // 
    // Akcja co 2 klatki (pierwsza - dodanie do Active i wykonanie, druga - jeżeli complete to ją usuń) 
    // 
    // WAŻNE: Aktywna Akcja będzie wykonywana (execute()) w kółko, co klatkę dopóki właściwość complete
    // nie zmieni wartości na true.

    // oczekiwany wynik: Akcje z queue są wykonywane w porządku rosnącym względem priority
    // 
    // TEST 4: obsługa czasu wygaśnięcia (pomiar czasu)
    std::cout << "TEST 4:" << std::endl;
    // TEST 5: działanie interrupter()
    std::cout << "TEST 5:" << std::endl;
    // TEST 6: działanie canDoBoth(other)
    std::cout << "TEST 6:" << std::endl;
    // active za każdym razem puste przed wywołaniem canDoBoth(other)
    // akcje są wykonują się co klatkę = nie można zaobserwować ich kumulacji

}
