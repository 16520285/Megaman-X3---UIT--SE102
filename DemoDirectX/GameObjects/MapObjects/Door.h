﻿#pragma once

#include "./../../GameComponents/Animation.h"
#include "../Entity.h"
#include "GameObject.h"

//cửa
class Door : public Entity
{
public:
	~Door();
	Door(float posX, float posY, bool st);
	void Update(float dt);
	void OnCollision(Entity * other, SideCollisions side);
	//void Draw(D3DXVECTOR3 position = D3DXVECTOR3(), RECT sourceRect = RECT(), D3DXVECTOR2 scale = D3DXVECTOR2(), D3DXVECTOR2 transform = D3DXVECTOR2(), float angle = 0, D3DXVECTOR2 rotationCenter = D3DXVECTOR2(), D3DXCOLOR colorKey = D3DCOLOR_XRGB(255, 255, 255));
	void ChangeStatus();
	void Draw(D3DXVECTOR2 transform);

protected:

	Animation *mAnimation,*mAnimationDoor,*mAnimationDoorClose,*mAnimationDoorOpen;
	bool isOpening;
	bool start;
};
