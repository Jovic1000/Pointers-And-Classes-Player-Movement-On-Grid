#include "Player.h"
#include "Health.h"

Player::Player()
{
	m_x = 0;
	m_y = 0;
	m_isDead = false;
	m_name = "";
}

void Player::Initialise(Health& playerHealth, int x, int y)
{
	m_playerHealth = &playerHealth;
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
