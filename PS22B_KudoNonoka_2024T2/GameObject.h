#pragma once
class GameObject
{
protected:
	/// @brief 座標
	Vec2 _position;
	/// @brief 見た目
	Texture _texture;

public:
	/// @brief 初期化
	virtual void Init() = 0;

	/// @brief 座標更新
	virtual void Update() = 0;

	/// @brief 描画更新
	virtual void Draw() = 0;
};

