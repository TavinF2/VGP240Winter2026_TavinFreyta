#include "CmdCamera.h"
#include "Camera.h"
#include "VariableCache.h"

bool CmdSetCameraPosition::Execute(const std::vector <std::string>& params)
{
	if (params.size() < 3)
	{
		return false;
	}

	VariableCache* vc = VariableCache::Get();
	const float x = vc->GetFloat(params[0]);
	const float y = vc->GetFloat(params[1]);
	const float z = vc->GetFloat(params[2]);

	Camera::Get()->SetPosition({x, y, z});

	return true;
}

bool CmdSetCameraDirection::Execute(const std::vector <std::string>& params)
{
	if (params.size() < 3)
	{
		return false;
	}

	VariableCache* vc = VariableCache::Get();
	const float x = vc->GetFloat(params[0]);
	const float y = vc->GetFloat(params[1]);
	const float z = vc->GetFloat(params[2]);

	Camera::Get()->SetDirection({ x * MathHelper::DegToRad, y * MathHelper::DegToRad, z * MathHelper::DegToRad });

	return true;
}

bool CmdSetCameraNear::Execute(const std::vector <std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}

	Camera::Get()->SetNearPlane(VariableCache::Get()->GetFloat(params[0]));

	return true;
}

bool CmdSetCameraFar::Execute(const std::vector <std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}

	Camera::Get()->SetFarPlane(VariableCache::Get()->GetFloat(params[0]));

	return true;
}

bool CmdSetCameraFov::Execute(const std::vector <std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}

	Camera::Get()->SetFOV(VariableCache::Get()->GetFloat(params[0]));

	return true;
}