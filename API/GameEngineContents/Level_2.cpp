#include "Level_2.h"
#include "TitleLogo.h"
#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngineLevel.h>
#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineSound.h>



Level_2::Level_2()
{
}

Level_2::~Level_2()
{
}

void Level_2::Loading()
{

	CreateActor<TitleBackGround>(0, "TitleLogo");

	CreateActor<TitleLogo>(1, "TitleLogo");

	GameEngineSound::SoundPlayControl("menu.mp3");

}

void Level_2::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{
		//환경설정 ui띄우기
	}

}