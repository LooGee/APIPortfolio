#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngine/GameEngineRenderer.h>


// Ό³Έν :
class MapBackGround : public GameEngineActor
{
public:
	// constrcuter destructer
	MapBackGround();
	~MapBackGround();

	// delete Function
	MapBackGround(const MapBackGround& _Other) = delete;
	MapBackGround(MapBackGround&& _Other) noexcept = delete;
	MapBackGround& operator=(const MapBackGround& _Other) = delete;
	MapBackGround& operator=(MapBackGround&& _Other) noexcept = delete;

public:

	GameEngineRenderer* World;
	

protected:
	void Start() override;

	void Render() override;



private:


};

