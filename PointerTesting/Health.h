#pragma once
class Health
{
public:

	Health(int currentHealth);

	int GetHealth();
	void ShowHealth(int lives);
	void TakeDamage(int damage);

private:

	float m_currentHealth;
};

