#pragma once
#include <GameEngine/GameEngineLevel.h>
#include <GameEngine/GameEngineRendererTileMap.h>

// Ό³Έν :
class Menu : public GameEngineLevel
{
public:
	// constrcuter destructer
	Menu();
	~Menu();

	// delete Function
	Menu(const Menu& _Other) = delete;
	Menu(Menu&& _Other) noexcept = delete;
	Menu& operator=(const Menu& _Other) = delete;
	Menu& operator=(Menu&& _Other) noexcept = delete;


public:
	GameEngineRendererTileMap* tileMap;

	GameEngineActor* Object;

	GameEngineActor* Level;

protected:

	void Loading() override;
	void Update() override;

private:

};

