#include "MapData.h"
#include <GameEngine/GameEngineRendererTileMap.h>
#include <GameEngineBase/GameEngineWindow.h>


MapData::MapData()
{
	// Level_ = nullptr;
}

MapData::~MapData()
{
}

void MapData::Start()
{

	SetPosition({ 12,12 });
	SetScale({ 5, 5 });

	MapTile = CreateRendererToScale("Object_block.bmp",{25, 25});	
	MapTile->CreateAnimation("Object_block.bmp", "Wall", 234,236, 0.25f, true);
	MapTile->ChangeAnimation("Wall");

	//GetWorld->TileRangeSetting(5, 5, { 24,24 });


	
}

void MapData::Render()
{
	//DebugRectRender();
} 