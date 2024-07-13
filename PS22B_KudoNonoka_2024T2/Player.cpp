#include "Player.h"

namespace {
	constexpr float move_speed = 3.0f;
}

void Player::Init()
{
	_position = _setPos;
	_texture = _setTexture;
}

void Player::Update()
{
	int x = 0, y = 0;

	if (KeyA.pressed())
	{
		x = -1;
	}

	if (KeyD.pressed())
	{
		x = 1;
	}

	if (KeyW.pressed())
	{
		y = -1;
	}

	if (KeyS.pressed())
	{
		y = 1;
	}

	auto moveDir = Vec2{ x, y }.normalize();

	if(x || y)
	_position += moveDir * move_speed;
}

void Player::Draw()
{
	_texture.drawAt(_position);
}
