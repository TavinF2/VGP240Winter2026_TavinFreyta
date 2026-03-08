#include "CmdSetCorrectUV.h"
#include "VariableCache.h"
#include "PrimativesManager.h"

bool CmdSetCorrectUV::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}

	bool correctUV = VariableCache::Get()->GetBool(params[0]);
	PrimativesManager::Get()->SetCorrectUV(correctUV);

	return true;
}