#include "Player.h"
#include <GameEngine/GameEngine.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngine/GameEngineImageManager.h>
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngineBase/GameEngineTime.h>
#include <GameEngine/GameEngineRenderer.h>

#include <GameEngine/GameEngineLevel.h> // 레벨을 통해서


Player* Player::MainPlayer = nullptr;


Player::Player()
	: Speed_(40.0f)
	, MoveDir(float4::ZERO)
	, PlayerAnim(nullptr)
	, RightNum(0)
	, LeftNum(0)
	, TopNum(0)
	, DownNum(0)
{
}

Player::~Player()
{
}

// 아무키도 눌리지 않았다면 false
// 아무키든 눌렸다면 true
bool Player::IsMoveKey()
{
	if (false == GameEngineInput::GetInst()->IsDown("MoveLeft") &&
		false == GameEngineInput::GetInst()->IsDown("MoveRight") &&
		false == GameEngineInput::GetInst()->IsDown("MoveUp") &&
		false == GameEngineInput::GetInst()->IsDown("MoveDown"))
	{		
		return false;
	}

	return true;
}

void Player::Start()
{
	SetPosition({370,620});
	SetScale({ 5, 5 });

	baba = CreateRendererToScale("baba.bmp", {40,40});
	baba->CreateAnimation("baba.bmp", "Idle_Right", 0, 2, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveRight_1", 3, 5, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveRight_2", 6, 8, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveRight_3", 9, 11, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveRight_4", 12, 14, 0.25f, true);

	baba->CreateAnimation("baba.bmp", "Idle_Top", 15, 17, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveTop_1", 18, 20, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveTop_2", 21, 23, 0.25f, true);
    baba->CreateAnimation("baba.bmp", "MoveTop_3", 24, 26, 0.25f, true);
    baba->CreateAnimation("baba.bmp", "MoveTop_4", 27, 29, 0.25f, true);

	baba->CreateAnimation("baba.bmp", "Idle_Left", 30, 32, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveLeft_1", 33, 35, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveLeft_2", 36, 38, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveLeft_3", 39, 41, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveLeft_4", 42, 44, 0.25f, true);

	baba->CreateAnimation("baba.bmp", "Idle_Down", 45, 47, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveDown_1", 48, 50, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveDown_2", 51, 53, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveDown_3", 54, 56, 0.25f, true);
	baba->CreateAnimation("baba.bmp", "MoveDown_4", 57, 59, 0.25f, true);

	baba->ChangeAnimation("Idle_Right");

	if (false == GameEngineInput::GetInst()->IsKey("MoveLeft"))
	{
		// 이때 대문자여야 합니다.
		GameEngineInput::GetInst()->CreateKey("MoveLeft", 'A');
		GameEngineInput::GetInst()->CreateKey("MoveRight", 'D');
		GameEngineInput::GetInst()->CreateKey("MoveUp", 'W');
		GameEngineInput::GetInst()->CreateKey("MoveDown", 'S');
	}	
}

void Player::PlayerMove()
{
	bool Right = GameEngineInput::GetInst()->IsDown("MoveRight");
	bool Left = GameEngineInput::GetInst()->IsDown("MoveLeft");
	bool Up = GameEngineInput::GetInst()->IsDown("MoveUp");
	bool Down = GameEngineInput::GetInst()->IsDown("MoveDown");

	if (true == Right)
	{
		MoveDir = float4::RIGHT * Speed_;		
		++RightNum;

		switch (RightNum)
		{		
		case 1:
			baba->ChangeAnimation("MoveRight_1");
			break;
		case 2:
			baba->ChangeAnimation("MoveRight_2");
			break;
		case 3:
			baba->ChangeAnimation("MoveRight_3");
			break;
		default:
			baba->ChangeAnimation("MoveRight_4");
			RightNum = 0;
			break;	
		}
		
	}
	if (true == Left)
	{
		MoveDir += float4::LEFT * Speed_;	
		++LeftNum;

		switch (LeftNum)
		{
		case 1:
			baba->ChangeAnimation("MoveLeft_1");
			break;
		case 2:
			baba->ChangeAnimation("MoveLeft_2");
			break;
		case 3:
			baba->ChangeAnimation("MoveLeft_3");
			break;
		default:
			baba->ChangeAnimation("MoveLeft_4");
			LeftNum = 0;
			break;
		}
	}
	if (true == Up)
	{
		MoveDir += float4::UP * Speed_;		
		++TopNum;

		switch (TopNum)
		{
		case 1:
			baba->ChangeAnimation("MoveTop_1");
			break;
		case 2:
			baba->ChangeAnimation("MoveTop_2");
			break;
		case 3:
			baba->ChangeAnimation("MoveTop_3");
			break;
		default:
			baba->ChangeAnimation("MoveTop_4");
			TopNum = 0;
			break;
		}
	}
	if (true == Down)
	{
		MoveDir += float4::DOWN * Speed_;		
		++DownNum;

		switch (DownNum)
		{
		case 1:
			baba->ChangeAnimation("MoveDown_1");
			break;
		case 2:
			baba->ChangeAnimation("MoveDown_2");
			break;
		case 3:
			baba->ChangeAnimation("MoveDown_3");
			break;
		default:
			baba->ChangeAnimation("MoveDown_4");
			DownNum = 0;
			break;
		}
	}
	
	if (false == IsMoveKey())
	{
		MoveDir = float4::ZERO;
		return;
	}

	SetPosition(Player::GetPosition() + MoveDir);
	
}

void Player::Update()
{	
	PlayerMove();
}






// 랜더러가 다 돌아가고 랜더링이 됩니다.
void Player::Render()
{

	
//	DebugRectRender();

}


