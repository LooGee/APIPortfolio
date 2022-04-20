#include "Level_3.h"
#include "TitleLogo.h"
#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngineLevel.h>
#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineSound.h>



Level_3::Level_3()
{
}

Level_3::~Level_3()
{
}

void Level_3::Loading()
{

	CreateActor<TitleBackGround>(0, "TitleLogo");

	CreateActor<TitleLogo>(1, "TitleLogo");

	GameEngineSound::SoundPlayControl("menu.mp3");

}

void Level_3::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{
		//환경설정 ui띄우기
	}

}