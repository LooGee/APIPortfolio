#pragma once
#include <GameEngine/GameEngineLevel.h>

// Ό³Έν :
class Level_5 : public GameEngineLevel
{
public:
	// constrcuter destructer
	Level_5();
	~Level_5();

	// delete Function
	Level_5(const Level_5& _Other) = delete;
	Level_5(Level_5&& _Other) noexcept = delete;
	Level_5& operator=(const Level_5& _Other) = delete;
	Level_5& operator=(Level_5&& _Other) noexcept = delete;

protected:

	void Loading() override;
	void Update() override;

private:

};

