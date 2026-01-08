#include <iostream>
#include "Health.h"
#include "Player.h"
#include "grid.h"


int main()
{

	
	Health health(5);
	Player player;
	grid map;

	player.Initialise(health, 0, 0);

	player.AssignName();
	player.ShowHealth();
	player.TakeDamage(1);
	player.ShowHealth();

	map.Initialise(&player);
	while (!map.IsGameOver())
	{
		map.Update();
		system("cls");
		map.Render();

	}

	return 0;
}

