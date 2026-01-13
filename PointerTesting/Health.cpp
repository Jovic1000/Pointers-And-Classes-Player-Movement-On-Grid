#include "Health.h"
#include <iostream>

Health::Health(int currentHealth) : m_currentHealth(100)
{
}

int Health::GetHealth()
{
    return m_currentHealth;
}

void Health::ShowHealth(int lives)
{
    std::cout << "Lives: ";

    while (lives > 0)
    {
        std::cout << "!";
        lives = lives - 10;
    }
    std::cout << std::endl;
}

void Health::TakeDamage(int damage)
{
    m_currentHealth = m_currentHealth - damage;
}
