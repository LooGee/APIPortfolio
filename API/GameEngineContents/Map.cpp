#include "Map.h"

#include <GameEngineBase/GameEngineWindow.h>


Map::Map()
{
	// Level_ = nullptr;
}

Map::~Map()
{
}

void Map::Start()
{
	SetPosition({ 640,360 });
	SetScale({ 5, 5 });

	WorldBackGround = CreateRendererToScale("World.bmp", { 1280, 720 });
	WorldBackGround->CreateAnimation("World.bmp", "move", 0, 2, 0.25f, true);
	WorldBackGround->ChangeAnimation("move");

	World = CreateRendererToScale("WorldObject.bmp", { 1280, 720 });
	World->CreateAnimation("WorldObject.bmp", "move1", 0, 2, 0.25f, true);
	World->ChangeAnimation("move1");


}

void Map::Render()
{
	DebugRectRender();
}