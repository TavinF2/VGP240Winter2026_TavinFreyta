#include "CmdSetFillMode.h"

#include "Rasterizer.h"
#include "VariableCache.h"

bool CmdSetFillMode::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}
	VariableCache* vc = VariableCache::Get();
	std::string fillModeStr = params[0];
	FillMode fillMode = FillMode::Solid;
	if (fillModeStr == "Solid")
	{
		fillMode = FillMode::Solid;
	}
	else if (fillModeStr == "Wireframe")
	{
		fillMode = FillMode::Wireframe;
	}
	else
	{
		return false;
	}
	Rasterizer::Get()->SetFillMode(fillMode);
	return true;
}
