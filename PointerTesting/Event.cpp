#include "Event.h"
#include <iostream>
#include "Player.h"
#include "Weapon.h"


Event::Event() : m_currentEnemyDamage(0), m_currentEnemyHealth(0), m_isComplete(false), m_player(m_player), m_state(0)
{
}

bool Event::IsComplete()
{
    return m_isComplete;
}

void Event::Run()
{
    int weaponDamage = (rand() % 26) + 5;
    Weapon axe("sword", weaponDamage);

    switch (m_state)
    {
     case(0):
         char playerInput;
         std::cout << "Whould you like to attack(A) or dodge(D):" << std::endl;

         std::cin >> playerInput;
         system("cls");

         if (toupper(playerInput) == 'A')
         {
             std::cout << "You Strike The Ogre With Your Weapon" << std::endl;
             int weaponDamage = m_player->Player::GetAttack("");
             m_currentEnemyHealth = m_currentEnemyHealth - weaponDamage;


             if (m_currentEnemyHealth > 0)
             {
                 std::cout << "The Ogre Raises A Club And Bashes You With It" << std::endl;
                 m_player->TakeDamage(m_currentEnemyDamage);
             }
         };

         if (toupper(playerInput) == 'D')
         {
             int randDodge = rand() % 4 + 1;

             if (randDodge == 1)
             {
                 std::cout << "You Dodge And Manage To Avoid The Main Attack, But You Still Got Graised!" << std::endl;
                 m_player->TakeDamage(m_currentEnemyDamage / 2);
             }
             if (randDodge == 2)
             {
                 std::cout << "You Manage To Avoid The Attack From The Ogre Without Taking Damage!" << std::endl;
             }
             if (randDodge == 3)
             {
                 std::cout << "You Avoid The Attack With Ease And Recover Half A Life While Doing So!" << std::endl;
                 m_player->TakeDamage(-5);
             }

             m_player->ShowHealth();
             
             std::cout << m_currentEnemyHealth << std::endl;

             if (m_currentEnemyHealth < 0)
             {
                 std::cout << "You Have Defeated The Ogre!" << std::endl;
                 m_isComplete = true;
                 system("cls");
             }
         }
         break;
     case(1):
         std::cout << "You Find A Weapon Under A Tree" << std::endl;

         std::cout << "Its A Axe With " << weaponDamage << " Damage, Would You Like To Pick It Up? (Y)/(N)" << std::endl;
         std::cin >> playerInput;

         if (toupper(playerInput) == 'Y')
         {
             system("cls");
             std::cout << " You Have Chosen To Pick Up The Weapon!" << std::endl;
             m_player->SetWeapon(&axe);
             m_isComplete = true;
         }
         else
         {
             system("cls");
             std::cout << "You Have Chosen To Not Pick Up The Weapon" << std::endl;
             delete& axe;
             m_isComplete = true;
         }

         break;
     case(2):

         int healAmount = (rand() % 11) + 10;
         m_player->TakeDamage(-healAmount);

         std::cout << "You Have Healed " << healAmount << " Health!" << std::endl;

         m_player->ShowHealth();

         m_isComplete = true;

         break;
    }
}

void Event::Initialise(Player* player)
{
    m_state = rand() % 3;
    player = m_player;

    switch (m_state)
    {
     case(0):
     m_currentEnemyHealth = (rand() % 46) + 30;
     m_currentEnemyDamage = (rand() % 11) + 5;
     std::cout << "Enemy ogre appears!" << std::endl;
     break;
     case(1):

         //Do Nothing//

     break;
     case(2):
     std::cout << "You find a place to rest!" << std::endl;
     break;
     default:
         break;
    }
}


