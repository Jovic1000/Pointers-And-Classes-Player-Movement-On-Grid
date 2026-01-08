#pragma once
class Health
{
public:

	Health(int health);

	int GetHealth();
	void ShowHealth(int lives);
	void TakeDamage(int damage);

private:

	float m_currentHealth;
};

