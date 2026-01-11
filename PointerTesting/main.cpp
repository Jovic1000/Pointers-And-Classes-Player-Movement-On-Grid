#include <iostream>
#include "Player.h"
#include "Event.h"
#include "Health.h"



int main()
{
	
	Event* event(new Event);
	Player player;

	player.AssignName();
	player.ShowHealth();
	
	std::string weaponName = "Quack";
	int weaponDamage = player.GetAttack(weaponName);

	std::cout << player.GetName() << " Has Equiped A " << weaponName << " And Deals " << weaponDamage << " Damage!" << std::endl;

	player.TakeDamage(25);
	player.ShowHealth();





	event->Initialise(&player);
	



	while (!player.GetIsDead() && !event->IsComplete())
	{
		event->Run();
    }

	




	delete event;


	return 0;
}

