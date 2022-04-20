#pragma once
#include <GameEngine/GameEngine.h>


class Babaisyou : public GameEngine
{
public:
	// constrcuter destructer
	Babaisyou();
	~Babaisyou();

	// delete Function
	Babaisyou(const Babaisyou& _Other) = delete;
	Babaisyou(Babaisyou&& _Other) noexcept = delete;
	Babaisyou& operator=(const Babaisyou& _Other) = delete;
	Babaisyou& operator=(Babaisyou&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

