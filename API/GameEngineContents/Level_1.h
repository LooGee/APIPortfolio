#pragma once
#include <GameEngine/GameEngineLevel.h>

// Ό³Έν :
class Level_1 : public GameEngineLevel
{
public:
	// constrcuter destructer
	Level_1();
	~Level_1();

	// delete Function
	Level_1(const Level_1& _Other) = delete;
	Level_1(Level_1&& _Other) noexcept = delete;
	Level_1& operator=(const Level_1& _Other) = delete;
	Level_1& operator=(Level_1&& _Other) noexcept = delete;

protected:

	void Loading() override;
	void Update() override;

private:

};

