#include "Babaisyou.h"
#include "Menu.h"
#include "Level_1.h"
#include "Level_2.h"
#include "Level_3.h"
#include "Level_4.h"
#include "Level_5.h"
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineBase/GameEngineDirectory.h>
#include <GameEngineBase/GameEngineFile.h>
#include <GameEngine/GameEngineImageManager.h>
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngineBase/GameEngineSound.h>

Babaisyou::Babaisyou() 
{
}

Babaisyou::~Babaisyou() 
{
}

void Babaisyou::GameInit() 
{
	GameEngineWindow::GetInst().SetWindowScaleAndPosition({ 100, 100 }, {1280, 720});

	{
		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Player");

		// 폴더안에 모든 이미지 파일을 찾는다.	

		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}

	{

		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Title");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}

	{
		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("UI");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}	
	{
		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Map");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}

	{
		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Wall");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}

	{
		// 현재 디렉토리
		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Icon");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
		}
	}

	{

		GameEngineDirectory ResourcesDir;
		ResourcesDir.MoveParent("API");
		ResourcesDir.Move("Resources");
		ResourcesDir.Move("Image");
		ResourcesDir.Move("Sound");

		// 폴더안에 모든 이미지 파일을 찾는다.
		std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile();

		for (size_t i = 0; i < AllImageFileList.size(); i++)
		{
			GameEngineSound::LoadRes(AllImageFileList[i].GetFullPath());
		}

	}


	GameEngineImage* baba = GameEngineImageManager::GetInst()->Find("baba.bmp");
	baba->Cut({ 24, 24 }, "y");

	GameEngineImage* World = GameEngineImageManager::GetInst()->Find("World.bmp");
	World->Cut({ 792, 432 }, "y");

	GameEngineImage* WorldObject = GameEngineImageManager::GetInst()->Find("WorldObject.bmp");
	WorldObject->Cut({ 792,432 }, "y");

	GameEngineImage* Wall_block = GameEngineImageManager::GetInst()->Find("Wall_block.bmp");
	Wall_block->Cut({ 24, 24 }, "y");

	GameEngineImage* Object_block = GameEngineImageManager::GetInst()->Find("Object_block.bmp");
	Object_block->Cut({ 24, 24 }, "y");

	GameEngineImage* Select_Ui = GameEngineImageManager::GetInst()->Find("Select_Ui.bmp");
	Select_Ui->Cut({ 32, 32}, "y");



	

	
	if (false == GameEngineInput::GetInst()->IsKey("Exit"))
	{
		GameEngineInput::GetInst()->CreateKey("Exit", VK_ESCAPE);
	}


	CreateLevel<Menu>("Menu");
	CreateLevel<Menu>("Level_1");
	CreateLevel<Menu>("Level_2");
	CreateLevel<Menu>("Level_3");
	CreateLevel<Menu>("Level_4");
	CreateLevel<Menu>("Level_5");

	ChangeLevel("Menu");
}

void Babaisyou::GameLoop() 
{

}
void Babaisyou::GameEnd() 
{
	
}