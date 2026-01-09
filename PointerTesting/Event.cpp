#include "Event.h"
#include <iostream>


Event::Event()
{
}

bool Event::IsComplete()
{
    return m_isComplete;
}

void Event::Initialise(Player*)
{
    m_state = rand() % 3;

    switch(m_state)
        case(0):
            m_currentEnemyHealth = (rand() % 46) + 30;
            m_currentEnemyDamage = (rand() % 11) + 5;
            std::cout << "Enemy Has Show Up";
            break;
    default:
        break;
    
}


