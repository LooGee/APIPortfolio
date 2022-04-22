#pragma once
#include <GameEngine/GameEngineLevel.h>
#include<GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>

// Ό³Έν :
class Level_5 : public GameEngineActor
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


public:

	GameEngineRenderer* Level;

protected:

	void Start() override;

	void Render() override;

private:

};

