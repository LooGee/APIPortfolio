#pragma once
#include "GameEngineActorSubObject.h"
#include "GameEngineEnum.h"
#include <map>
#include <vector>




// 설명 : 그리는걸 도와주는 클래스
class GameEngineImage;
class GameEngineCollision : public GameEngineActorSubObject
{
	friend GameEngineActor;
	friend GameEngineLevel;

public:
	// constrcuter destructer
	GameEngineCollision();
	~GameEngineCollision();

	// delete Function
	GameEngineCollision(const GameEngineCollision& _Other) = delete;
	GameEngineCollision(GameEngineCollision&& _Other) noexcept = delete;
	GameEngineCollision& operator=(const GameEngineCollision& _Other) = delete;
	GameEngineCollision& operator=(GameEngineCollision&& _Other) noexcept = delete;

	inline void SetPivot(const float4& _Pos)
	{
		Pivot_ = _Pos;
	}

	inline void SetScale(const float4& _Scale)
	{
		Scale_ = _Scale;
	}

	inline float4 GetCollisionPos()
	{
		return GetActor()->GetPosition() + Pivot_;
	}

	inline GameEngineRect GetRect()
	{
		return GameEngineRect(GetActor()->GetPosition() + Pivot_, Scale_);
	}


	// Player   Bullet
	// 방패     적의 총알을 막는다.
	// 방패     적의 총알

	// 충돌한 대상이 있는지 없는지만 체크하는 함수
	bool CollisionCheck(
		const std::string& _TargetGroup, 
		CollisionType _This = CollisionType::Circle, 
		CollisionType _Target = CollisionType::Circle
	);

	bool CollisionResult(
		const std::string& _TargetGroup,
		std::vector<GameEngineCollision*>& _ColResult,
		CollisionType _This = CollisionType::Circle,
		CollisionType _Target = CollisionType::Circle
	);

	void DebugRender();

private:
	friend class FrameAnimation;
	float4 Pivot_;
	float4 Scale_;

	std::string CollisionName_;


};
