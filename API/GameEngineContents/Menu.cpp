#include "Menu.h"
#include "Player.h"
#include "Map.h"
#include "MapData.h"
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
	float x = 30;
	float y = 30;
	
	CreateActor<Map>();
	CreateActor<Player>();

	GameEngineSound::SoundPlayControl("menu.mp3");
	


}

void Menu::Update()
{
	if (true == GameEngineInput::GetInst()->IsDown("Exit"))
	{		
			GameEngine::GetInst().ChangeLevel("Tutorial");		
	}

}