# include <Siv3D.hpp> // Siv3D v0.6.14
#include "Player.h"

void Main()
{
	Player* player = new Player();
	player->Init();
	while (System::Update())
	{
		player->Update();
		player->Draw();
	}

	delete player;
}
