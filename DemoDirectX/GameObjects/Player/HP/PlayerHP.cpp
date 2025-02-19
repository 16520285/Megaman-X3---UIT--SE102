#include "PlayerHP.h"
PlayerHP::PlayerHP(float posx, float posy)
{
	this->SetPosition(posx, posy);
	mSprite= new Sprite("Resources/Megaman/MegaHP/FrameHP.png");
	mSprite->SetPosition(posX, posY);
	HP = 18;

	for (int i = 0; i < HP; i++) {
		mListSpriteLine.push_back(new Sprite("Resources/Megaman/MegaHP/LineHP.png"));
		mListSpriteLine[i]->SetPosition(posX, (posY - 25 + (HP-i)*2   ));
	}
		
}

PlayerHP::~PlayerHP()
{
}

void PlayerHP::Update(float dt)
{
}

void PlayerHP::Draw()
{
	mSprite->Draw();
	for (int i = 0; i < HP; i++) {
		mListSpriteLine[i]->Draw();
	}
}

void PlayerHP::AddDame(int dame)
{
	HP -= dame;
}
