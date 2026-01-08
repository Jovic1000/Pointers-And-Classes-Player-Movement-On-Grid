#include "grid.h"
#include "player.h"
#include <conio.h>

////grid::grid() : m_player(new Player())
////{
////}
//
//grid::~grid()
//{
//	if (m_player != nullptr)
//	{
//		delete m_player;
//	}
//}
//
//void grid::Initialise()
//{
//	
//	int playerX = rand() % SIZE_X;
//	int playerY = rand() % SIZE_Y;
//
//	m_player->SetPosition(playerX, playerY);
//
//	bool overlap = true;
//
//	int goalX = rand() % SIZE_X;
//	int goalY = rand() % SIZE_Y;
//
//	do
//	{
//		
//
//
//		m_goal[0] = rand() % SIZE_X;
//		m_goal[1] = rand() % SIZE_Y;
//
//		if (goalX and goalY == playerX and playerY)
//		{
//			overlap = true;
//		}
//		else
//		{
//			overlap = false;
//		}
//
//	} while (overlap);
//	
//	int enemyX;
//	int enemyY;
//	
//	for (int i = 0; i < 5; )
//	{
//		
//		enemyX = rand() % SIZE_X;
//		enemyY = rand() % SIZE_Y;
//		m_enemies[0][i] = enemyX;
//		m_enemies[1][i] = enemyY;
//				
//		if (enemyX != goalX and enemyY != goalY || enemyX != playerX and enemyY != playerY)
//		{
//			i++;
//		}
//		
//		
//	}
//}
//
//void grid::Update()
//{
//
//	int playerX;
//	int playerY;
//
//	m_player->GetPosition(playerX, playerY);
//
//	char movement = toupper(_getch());
//	
//	switch (movement)
//	{
//	case ('A'):
//		if (playerY != 0)
//		{
//			playerY--;
//		}		
//		break;
//	case ('W'):
//		if (playerX != 0)
//		{
//			playerX--;
//		}
//		break;
//	case ('D'):
//		if (playerY != 9)
//		{
//			playerY++;
//		}
//		break;
//	case ('S'):
//		if (playerX != 9)
//		{
//			playerX++;
//		}
//		break;
//	default:
//		break;
//	}
//
//	m_player->SetPosition(playerX, playerY);
//
//	for (int i = 0; i < 5;i++ )
//	{
//		if (playerX == m_enemies[0][i] and playerY == m_enemies[1][i])
//		{
//			m_player->TakeDamage(1);
//		}
//	}
//}
//
//void grid::Render()
//{
//	int playerX;
//	int playerY;
//
//	char map[SIZE_X][SIZE_Y];
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			map[i][j] = '~';
//		}
//	}
//
//	m_player->GetPosition(playerX, playerY);
//
//	map[playerX][playerY] = 'P';
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			std::cout << map[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	m_player->ShowHealth();
//
//}
//
//bool grid::IsGameOver()
//{
//	int playerX;
//	int playerY;
//
//	m_player->GetPosition(playerX, playerY);
//
//	if (m_player->GetIsDead())
//	{
//		return true;
//	}
//
//	if (playerX == m_goal[0] and playerY == m_goal[1])
//	{
//
//		std::cout << "YOU WIN" << std::endl;
//		return true;
//
//		
//	}
//
//
//	
//	return false;
//}