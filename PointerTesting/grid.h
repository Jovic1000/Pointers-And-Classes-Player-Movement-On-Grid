#pragma once

class Player;

class grid
{
public:

	void Initialise(Player* player);
	void Update();
	void Render();
	bool IsGameOver();

private:

	Player* m_player;
	int m_goal[2];
	int m_enemies[2][5];

};

const int SIZE_X = 10;
const int SIZE_Y = 10;