#include <iostream>

void AssignName(std::string Pointer);

int main()
{
	std::string m_playerName;
	std::string* m_namePointer = &m_playerName;
	int m_playerLives;
	int* m_livesPointer = &m_playerLives;

	AssignName();

	return 0;
}

void AssignName(std::string Pointer)
{

}