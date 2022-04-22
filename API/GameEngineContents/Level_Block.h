#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>
#include<GameEngine/GameEngineRendererTileMap.h>

// Ό³Έν :
class Level_Block : public GameEngineActor
{
public:
	// constrcuter destructer
	Level_Block();
	~Level_Block();

	// delete Function
	Level_Block(const Level_Block& _Other) = delete;
	Level_Block(Level_Block&& _Other) noexcept = delete;
	Level_Block& operator=(const Level_Block& _Other) = delete;
	Level_Block& operator=(Level_Block&& _Other) noexcept = delete;

public:

	GameEngineRenderer* Bridge;


protected:

	void Start() override;
	
	void Render() override;



private:


};

