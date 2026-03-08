#include "CmdEndDraw.h"
#include "PrimativesManager.h"

bool CmdEndDraw::Execute(const std::vector <std::string>& params)
{
	//Send vertices to rasterizer
	return PrimativesManager::Get()->EndDraw();
}