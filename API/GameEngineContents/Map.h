#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>
#include<GameEngine/GameEngineRendererTileMap.h>

// ���� :
class Map : public GameEngineActor
{
public:
	// constrcuter destructer
	Map();
	~Map();

	// delete Function
	Map(const Map& _Other) = delete;
	Map(Map&& _Other) noexcept = delete;
	Map& operator=(const Map& _Other) = delete;
	Map& operator=(Map&& _Other) noexcept = delete;

public:

	GameEngineRenderer* World;

	GameEngineRenderer* WorldBackGround;

	GameEngineRendererTileMap* GetWorld;
	

protected:
	void Start() override;

	void Render() override;

	

private:


};

