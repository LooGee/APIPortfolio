#pragma once
#include <GameEngine/GameEngineRendererTileMap.h>
#include <GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>


// Ό³Έν :
class MapData : public GameEngineActor
{
public:
	// constrcuter destructer
	MapData();
	~MapData();

	// delete Function
	MapData(const MapData& _Other) = delete;
	MapData(MapData&& _Other) noexcept = delete;
	MapData& operator=(const MapData& _Other) = delete;
	MapData& operator=(MapData&& _Other) noexcept = delete;

public:

	GameEngineRenderer* MapTile;

	GameEngineRendererTileMap* GetWorld;

protected:
	void Start() override;

	void Render() override;



private:


};

