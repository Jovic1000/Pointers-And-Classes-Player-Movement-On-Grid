#include <iostream>
#include "Player.h"
#include "Event.h"
#include "Health.h"




int main()
{
	srand(time(NULL));
	Event* event(new Event);
	Player player;

	player.AssignName();
	player.ShowHealth();
	
	std::string weaponName = "Quack";
	int weaponDamage = player.GetAttack(weaponName);

	std::cout << player.GetName() << " Has Equiped A " << weaponName << " And Deals " << weaponDamage << " Damage!" << std::endl;

	

	

	Player* player2 = new Player;

	
	
	int rounds = 0;

	while (!player.GetIsDead())
	{
		system("cls");

		rounds++;
			
		event->Initialise(player2, rounds);

			

		event->Run();

		system("pause");

	}
	
	std::cout << "Rounds Complited: " << rounds;

	delete event;


	return 0;
}

