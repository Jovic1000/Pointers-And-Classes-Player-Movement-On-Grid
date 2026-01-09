#include <iostream>
#include "Player.h"


int main()
{
	
	Player player;
	player.AssignName();
	player.ShowHealth();
	
	std::string weaponName = "Quack";
	int weaponDamage = player.GetAttack(weaponName);

	std::cout << player.GetName() << " Has Equiped A " << weaponName << " And Deals " << weaponDamage << " Damage!" << std::endl;

	player.TakeDamage(25);
	player.ShowHealth();
	return 0;
}

