#pragma once
class Player;
class Event
{
public:	

	bool IsComplete();
	void Run();
	void Initialise(Player* player);

	Event();
private:

	Player* m_player;
	bool m_isComplete;
	int m_state;
	int m_currentEnemyHealth;
	int m_currentEnemyDamage;
};

