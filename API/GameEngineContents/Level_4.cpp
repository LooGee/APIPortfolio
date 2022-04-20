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

void Level_4::Loading()
{

	CreateActor<TitleBackGround>(0, "TitleLogo");

	CreateActor<TitleLogo>(1, "TitleLogo");

	GameEngineSound::SoundPlayControl("menu.mp3");

}

void Level_4::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{
		//ȯ�漳�� ui����
	}

}