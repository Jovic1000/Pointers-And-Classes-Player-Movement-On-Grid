#pragma once
#include <iostream>

class Weapon
{
public:

	std::string GetName();
	int GetDamage();


	Weapon(std::string name, int damage);
private:
	std::string m_name;
	int m_damage;
};

