#pragma once
#include <GameEngine/GameEngineLevel.h>

// Ό³Έν :
class Level_2 : public GameEngineLevel
{
public:
	// constrcuter destructer
	Level_2();
	~Level_2();

	// delete Function
	Level_2(const Level_2& _Other) = delete;
	Level_2(Level_2&& _Other) noexcept = delete;
	Level_2& operator=(const Level_2& _Other) = delete;
	Level_2& operator=(Level_2&& _Other) noexcept = delete;

protected:

	void Loading() override;
	void Update() override;

private:

};

