#include "Player.h"
#include "Health.h"
#include "Weapon.h"

Player::Player() : m_weapon(new Weapon("Sword", 10)), m_playerHealth(new Health(100)), m_x(0), m_y(0), m_isDead(false), m_name("")
{
}

Player::~Player()
{
	if (m_playerHealth != nullptr)
	{
		delete m_playerHealth;
	}

	if (m_weapon != nullptr)
	{
		delete m_weapon;
	}
}



void Player::AssignName()
{
	std::cout << "what is your name:" << std::endl;
	std::cin >> m_name;
}

std::string Player::GetName()
{
	return m_name;
}


void Player::GetPosition(int& x, int& y)
{
	x = m_x;
	y = m_y;

}

void Player::SetPosition(int x, int y)
{
	m_x = x;
	m_y = y;
}

bool Player::GetIsDead()
{
	return m_isDead;
}

void Player::KillPlayer()
{
	m_isDead = true;
}
 
void Player::TakeDamage(int playerDamage)
{
	m_playerHealth->TakeDamage(playerDamage);

	if (m_playerHealth->GetHealth() <= 0)
	{
		m_isDead = true;
	}
}

void Player::ShowHealth()
{
	m_playerHealth->ShowHealth(m_playerHealth->GetHealth());
}

int Player::GetAttack(std::string weaponName)
{
	weaponName = m_weapon->GetName();

	return m_weapon->GetDamage();
}

void Player::SetWeapon(Weapon* weapon)
{
	m_weapon = weapon;
}