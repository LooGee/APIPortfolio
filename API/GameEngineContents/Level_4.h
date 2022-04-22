#pragma once
#include <GameEngine/GameEngineLevel.h>
#include<GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>

// Ό³Έν :
class Level_4 : public GameEngineActor
{
public:
	// constrcuter destructer
	Level_4();
	~Level_4();

	// delete Function
	Level_4(const Level_4& _Other) = delete;
	Level_4(Level_4&& _Other) noexcept = delete;
	Level_4& operator=(const Level_4& _Other) = delete;
	Level_4& operator=(Level_4&& _Other) noexcept = delete;


public:

	GameEngineRenderer* Level;

protected:
	void Start() override;

	void Render() override;

private:

};

