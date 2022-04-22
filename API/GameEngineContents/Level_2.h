#pragma once
#include <GameEngine/GameEngineLevel.h>
#include<GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>

// Ό³Έν :
class Level_2 : public GameEngineActor
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


public:

	GameEngineRenderer* Level;

protected:

	void Start() override;

	void Render() override;

private:

};

