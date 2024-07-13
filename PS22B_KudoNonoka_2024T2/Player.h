#pragma once
#include "GameObject.h"

class Player : public GameObject
{
private:
	const Vec2 _setPos {200, 200};
	const Texture _setTexture{ U"🐥"_emoji };

public:
	void Init() override;
	void Update() override;
	void Draw() override;
};

