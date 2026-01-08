#include <iostream>
#include "Health.h"
#include "Player.h"


int main()
{


	Health health(5);
	Player player;

	player.Initialise(health, 0, 0);

	player.AssignName();
	player.ShowHealth();
	player.TakeDamage(1);
	player.ShowHealth();


	return 0;
}

