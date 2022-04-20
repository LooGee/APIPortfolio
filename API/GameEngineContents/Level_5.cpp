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

void Level_5::Loading()
{

	CreateActor<TitleBackGround>(0, "TitleLogo");

	CreateActor<TitleLogo>(1, "TitleLogo");

	GameEngineSound::SoundPlayControl("menu.mp3");

}

void Level_5::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{
		//환경설정 ui띄우기
	}

}