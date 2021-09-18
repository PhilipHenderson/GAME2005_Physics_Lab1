#include "SuperSprite1.h"

#include "TextureManager.h"

SuperSprite1::SuperSprite1()
{
	TextureManager::Instance().load("../Assets/textures/ship3.png", "ship");

	auto size = TextureManager::Instance().getTextureSize("ship");
	setWidth(size.x);
	setHeight(size.y);
}

SuperSprite1::~SuperSprite1()
= default;

void SuperSprite1::draw()
{
	TextureManager::Instance().draw("ship",
		getTransform()->position.x, getTransform()->position.y, 0, 255, true);
}

void SuperSprite1::update()
{
}

void SuperSprite1::clean()
{
}
