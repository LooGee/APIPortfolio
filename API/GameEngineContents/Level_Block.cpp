#include "Level_Block.h"

#include <GameEngineBase/GameEngineWindow.h>


Level_Block::Level_Block()
{
	// Level_ = nullptr;
}

Level_Block::~Level_Block()
{
}

void Level_Block::Start()
{
	
	
	Bridge = CreateRendererToScale("Wall_block.bmp", { 40, 40 },0, RenderPivot::CENTER, {410,620});
	Bridge->CreateAnimation("Wall_block.bmp", "Brige_Left_Top", 471, 473, 0.25f, true);
	Bridge->ChangeAnimation("Brige_Left_Top");

	Bridge = CreateRendererToScale("Wall_block.bmp", { 40, 40 }, 0, RenderPivot::CENTER, { 410,580 });
	Bridge->CreateAnimation("Wall_block.bmp", "Brige_Idle", 555,557, 0.25f, true);
	Bridge->ChangeAnimation("Brige_Idle");

	Bridge = CreateRendererToScale("Wall_block.bmp", { 40, 40 }, 0, RenderPivot::CENTER, { 490,540 });
	Bridge->CreateAnimation("Wall_block.bmp", "Brige_Right_Top_Left", 492, 494, 0.25f, true);
	Bridge->ChangeAnimation("Brige_Right_Top_Left");
	
	


}

void Level_Block::Render()
{
	DebugRectRender();
}