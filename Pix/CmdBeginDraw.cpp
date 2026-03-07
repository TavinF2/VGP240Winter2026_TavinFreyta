#include "CmdBeginDraw.h"
#include "PrimitivesManager.h"

bool CmdBeginDraw::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 1)
	{
		return false;
	}
	Topology topology = Topology::Point;
	if (params[0] == "Point")
	{
		topology = Topology::Point;
	}
	else if (params[0] == "Line")
	{
		topology = Topology::Line;
	}
	else if (params[0] == "Triangle")
	{
		topology = Topology::Triangle;
	}
	else
	{
		return false;
	}
	return PrimitivesManager::Get()->BeginDraw(topology);
}

