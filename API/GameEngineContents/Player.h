#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngineBase/GameEngineSound.h>

// ��� ��ü�� 1���� 1���� ���¸��� �����Ѵ�.
// �÷��̾�� 1���� 1���� �Լ��ۿ� �����Ҽ� ����.

// if �÷��̾ ���� ���̶��
//    if �÷��̾ �̵����� �ƴ϶��
//       if

// ���� :
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
	// FSM���� �ݱⰡ �ֽ��ϴ�.
	void IdleUpdate();	
	void MoveUpdate();

	void IdleStart();
	void MoveStart();
};

