#include "CmdSetColor.h"

#include "Rasterizer.h"
#include "VariableCache.h"

bool CmdSetColor::Execute(const std::vector<std::string>& params)
{
	// needs at least 3 parameters for R G B

	if (params.size() < 3)
	{
		return false;
	}
	//Gets float form the variable cache if custom float is declared
	VariableCache* vc = VariableCache::Get();
	const float r = vc->GetFloat(params[0]);
	const float g = vc->GetFloat(params[1]);
	const float b = vc->GetFloat(params[2]);

	Rasterizer::Get()->SetColor({r, g, b, 1.0f});
	return true;

}

