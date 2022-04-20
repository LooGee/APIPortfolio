#pragma once
#include <GameEngine/GameEngineLevel.h>

// Ό³Έν :
class Level_3 : public GameEngineLevel
{
public:
	// constrcuter destructer
	Level_3();
	~Level_3();

	// delete Function
	Level_3(const Level_3& _Other) = delete;
	Level_3(Level_3&& _Other) noexcept = delete;
	Level_3& operator=(const Level_3& _Other) = delete;
	Level_3& operator=(Level_3&& _Other) noexcept = delete;

protected:

	void Loading() override;
	void Update() override;

private:

};

