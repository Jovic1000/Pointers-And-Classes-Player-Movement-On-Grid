#pragma once
#include <iostream>

class Health;

class Player
{
public:

	Player();
	~Player();

	void Initialise(int x, int y);
	void AssignName();
	std::string GetName();
	void GetPosition(int& x, int& y);
	void SetPosition(int x, int y);
	bool GetIsDead();
	void KillPlayer();
	void TakeDamage(int playerDamage);
	void ShowHealth();

private:
	Health* m_playerHealth;
	int m_y;
	int m_x;
	std::string m_name;
	bool m_isDead;

};

