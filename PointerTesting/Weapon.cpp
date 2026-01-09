#include "Weapon.h"

Weapon::Weapon(std::string name, int damage) : m_name("sword"), m_damage(10)
{
}

int Weapon::GetDamage()
{
	return m_damage;
}

std::string Weapon::GetName()
{
	return m_name;
}