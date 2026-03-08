#include "CmdSetFillMode.h"
#include "Rasterizer.h"

bool CmdSetFillMode::Execute(const std::vector<std::string>& params)
{
	if (params.size() != 1)
	{
		return false;
	}

	std::string fillMode = params[0];

	std::transform(fillMode.begin(), fillMode.end(), fillMode.begin(), [](unsigned char c) { return std::tolower(c); });

	if (fillMode == "wireframe")
	{
		Rasterizer::Get()->SetFillMode(FillMode::Wireframe);
	}
	else if (fillMode == "solid")
	{
		Rasterizer::Get()->SetFillMode(FillMode::Solid);
	}
	else
	{
		return false;
	}

	return true;
}