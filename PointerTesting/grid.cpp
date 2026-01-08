#include "grid.h"
#include "player.h"

void grid::Initialise(Player* player)
{
	m_player = player;
	int x = rand() % SIZE_X;
	int y = rand() % SIZE_Y;

	player->SetPosition(x, y);


}
