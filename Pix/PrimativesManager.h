#pragma once

#include "Vertex.h"

enum class Topology
{
	Point,
	Line,
	Triangle
};

enum class CullMode
{
	None,	//No culling used
	Back,	//Cull items facing away from camera
	Front	//Cull items facing the camera
};

class PrimativesManager
{
public:
	static PrimativesManager* Get();

	void OnNewFrame();
	void SetCullMode(CullMode mode);
	void SetCorrectUV(bool correctUV);

	//Start accepting vertices
	bool BeginDraw(Topology topology, bool applyTransform = false);
	//Add vertices to the list, only if drawing is enabled
	void AddVertex(const Vertex& vertex);
	//Send all vertices to Rasterizer
	bool EndDraw();

private:
	PrimativesManager();

	std::vector <Vertex> mVertexBuffer;
	Topology mToplogy = Topology::Point;
	CullMode mCullMode = CullMode::None;

	bool mDrawBegin = false;
	bool mApplyTransform = false;
	bool mCorrectUV = false;
};