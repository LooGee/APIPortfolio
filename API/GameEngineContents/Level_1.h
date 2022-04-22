#pragma once
#include <GameEngine/GameEngineLevel.h>
#include<GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>

// Ό³Έν :
class Level_1 : public GameEngineActor
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

public:

	GameEngineRenderer* Level;




protected:

	void Start() override;

	void Render() override;


private:

};

