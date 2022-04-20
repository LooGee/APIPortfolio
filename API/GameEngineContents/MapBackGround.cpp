#include "MapBackGround.h"
#include <GameEngineBase/GameEngineWindow.h>


MapBackGround::MapBackGround()
{
	// Level_ = nullptr;
}

MapBackGround::~MapBackGround()
{
}

void MapBackGround::Start()
{

	SetPosition({ 640,360 });
	SetScale({ 5, 5 });

	World = CreateRendererToScale("WorldObject.bmp", { 1280, 720 });
	World->CreateAnimation("WorldObject.bmp", "move1", 0, 2, 0.25f, true);
	World->ChangeAnimation("move1");

}

void MapBackGround::Render()
{
	DebugRectRender();
}