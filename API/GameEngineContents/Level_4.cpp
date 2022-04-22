#include "Level_4.h"

#include "TitleLogo.h"
#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngineLevel.h>
#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineSound.h>



Level_4::Level_4()
{
}

Level_4::~Level_4()
{
}

void Level_4::Start()
{

	Level = CreateRendererToScale("Select_Ui.bmp", { 40, 40 });
	Level->CreateAnimation("Select_Ui.bmp", "UI_move", 0, 2, 0.25f, true);
	Level->ChangeAnimation("UI_move");

}


void Level_4::Render()
{

}
