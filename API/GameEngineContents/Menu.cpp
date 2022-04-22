#include "Menu.h"
#include "Player.h"
#include "Map.h"
#include "MapData.h"
#include "Level_Block.h"
#include "Level_1.h"
#include "Level_2.h"
#include "Level_3.h"
#include "Level_4.h"
#include "Level_5.h"
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngineLevel.h>

#include <GameEngineBase/GameEngineSound.h>


Menu::Menu() 
{
}

Menu::~Menu() 
{
}

void Menu::Loading() 
{
	CreateActor<Map>();

	CreateActor<Level_Block>();
	//CreateActor<Player>();
	Level = CreateActor<Level_1>();
	Level->SetPosition({ 370,620 });

	Level = CreateActor<Level_2>();
	Level->SetPosition({ 410,540 });

	Level = CreateActor<Level_3>();
	Level->SetPosition({ 410,500 });

	Level = CreateActor<Level_4>();
	Level->SetPosition({ 450,540 });

	Level = CreateActor<Level_5>();
	Level->SetPosition({ 450,500 });	



	GameEngineSound::SoundPlayControl("menu.mp3");
	


}

void Menu::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{		
			GameEngine::GetInst().ChangeLevel("Tutorial");		
	}

}