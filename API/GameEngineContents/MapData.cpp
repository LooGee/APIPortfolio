#include "MapData.h"
#include <GameEngine/GameEngineRendererTileMap.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <stdio.h>


MapData::MapData()
{
	// Level_ = nullptr;
}

MapData::~MapData()
{
}

void MapData::Start()
{	

	/*MapTile = CreateRendererToScale("Object_block.bmp", { 30,30 });
	MapTile->CreateAnimation("Object_block.bmp", "Wall", 234, 236, 0.25f, true);
	MapTile->ChangeAnimation("Wall");*/

}


void MapData::LoadMapObject(const std::string& _MapName)
{

	//맵 이름 받아와서
	//맵 배열 받아서 크기 확인후
	//타일 갯수에 맞춰서 중앙에 배치하기
	//TileData enum 이용해서 같은 내용인지 확인하고
	//맞다면 creatActor이용해서 생성하기

	char MapTile_[Level_0_Width][Level_0_Height];

	for (int x = 0; x < Level_0_Width; x++)
	{
		for (int y = 0; y < Level_0_Height; y++)
		{
			const int InTile = MapTile_[x][y];

			
			if (Level_0_Width % 2 != 0)
			{
			  float z =  (WindowScale_X / 2) - (Level_0_Width / 2 * TileSize);
			}		
		}
	}
	

	/*for (int i = 0; i < 18; i++)
{

	for (int j = 0; j <24; j++)
	{
		Object = CreateActor<MapData>();
		Object->SetPosition({ x,y });
		x += 30;
	}
	y += 30;
	x = 30;
}

if (x.tile_num % 2 != 0)
{
	float x = (1280/2) + ((tile_num-1) /2 *tile_size)
}
else
{
	float x = (1280 / 2) + (tile_num / 2 * tile_size)
}
*/

	//};


	//for (int y = 0; y < MYHOUSE_CHIP_NUM_Y; y++)
	//{
	//	for (int x = 0; x < MYHOUSE_CHIP_NUM_X; x++)
	//	{
	//		const char chip = MapOject[y][x];
	//		if (chip < 0) continue;

	//		const float4 pos = {
	//			x * CHIP_SIZE + CHIP_SIZE * 0.5f,
	//			y * CHIP_SIZE + CHIP_SIZE,
	//		};

	//		MYHOUSE_TILE TileState_ = static_cast<MYHOUSE_TILE>(chip);
	//		std::map<int, Items*>::iterator ThisIter;

	//		const float4 IndexPos = {
	//		  x * CHIP_SIZE ,
	//		  y * CHIP_SIZE,
	//		};

	//		TileIndex Index = { static_cast<int>(IndexPos.x / CHIP_SIZE), static_cast<int>(IndexPos.y / CHIP_SIZE) };
	//		int ChangeIndex = Index.X + (Index.Y * FARM_CHIP_NUM_Y);

	//		switch (TileState_)
	//		{
	//		case MYHOUSE_TILE::BAD_BOTTOM:
	//			MapObject_.insert(std::make_pair(ChangeIndex, CreateActor<BadBottom>((int)PLAYLEVEL::TOP_OBJECT)));
	//			ThisIter = --MapObject_.end();
	//			ThisIter->second->SetPosition({ pos.x, pos.y });
	//			break;
	//		case MYHOUSE_TILE::MOVE_FARM:
	//			MapObject_.insert(std::make_pair(ChangeIndex, CreateActor<MoveFarm>((int)PLAYLEVEL::TOP_OBJECT)));

	//			ThisIter = --MapObject_.end();
	//			ThisIter->second->GetRenderer()->CameraEffectOff();
	//			break;
	//		default:
	//			break;
	//		}
	//		ThisIter = --MapObject_.end();
	//		ThisIter->second->SetPosition(pos);
	//	}
	//}
	//Player::MainPlayer->CopyList(MapObject_);

}



void MapData::Render()
{
	//DebugRectRender();
} 