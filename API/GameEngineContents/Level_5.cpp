#include "Level_5.h"

#include "TitleLogo.h"
#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngineLevel.h>
#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineSound.h>



Level_5::Level_5()
{
}

Level_5::~Level_5()
{
}

void Level_5::Start()
{

	Level = CreateRendererToScale("Select_Ui.bmp", { 40, 40 });
	Level->CreateAnimation("Select_Ui.bmp", "UI_move", 0, 2, 0.25f, true);
	Level->ChangeAnimation("UI_move");

}


void Level_5::Render()
{

}
