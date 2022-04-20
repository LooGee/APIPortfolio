#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineWindow.h>

TitleBackGround::TitleBackGround() 
{
	// Level_ = nullptr;
}

TitleBackGround::~TitleBackGround() 
{
}

void TitleBackGround::Start()
{
	SetPosition({ 640,360 });
	CreateRenderer("Title.bmp");
}

void TitleBackGround::Render() 
{
	DebugRectRender();
}