#pragma once
#include <GameEngine/GameEngineLevel.h>
#include<GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>

// Ό³Έν :
class Level_3 : public GameEngineActor
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


public:

	GameEngineRenderer* Level;

protected:

	void Start() override;

	void Render() override;

private:

};

