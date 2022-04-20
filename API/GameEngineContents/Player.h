#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngineBase/GameEngineSound.h>

// 어떠한 객체는 1번에 1개의 상태만이 존재한다.
// 플레이어는 1번에 1개의 함수밖에 실행할수 없다.

// if 플레이어가 공격 중이라면
//    if 플레이어가 이동중이 아니라면
//       if

// 설명 :
class Player : public GameEngineActor
{
public:
	static Player* MainPlayer;
	// static std::vector<InventoryItem> ;

	// constrcuter destructer
	Player();
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

protected:

private:
	float Speed_;
	int RightNum;
	int LeftNum;
	int TopNum;
	int DownNum;

	void Start() override;
	void Update() override;
	void Render() override;

	

private:
	static float4 NextLevelPosition;

	float4 MoveDir;

	GameEngineRenderer* PlayerAnim;
	
	GameEngineRenderer* baba;

	bool IsMoveKey();

public:
	void PlayerMove();	

private:
	// FSM에서 금기가 있습니다.
	void IdleUpdate();	
	void MoveUpdate();

	void IdleStart();
	void MoveStart();
};

