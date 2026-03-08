#pragma once

#include "Command.h"

class CmdSetCameraPosition : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraPosition";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraPosition(pos)\n"
			"\n"
			"- Sets the camera's position";
	}

	bool Execute(const std::vector <std::string>& params) override;
};

class CmdSetCameraDirection : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraDirection";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraDirection(dir)\n"
			"\n"
			"- Sets the camera's direction (degrees)";
	}

	bool Execute(const std::vector <std::string>& params) override;
};

class CmdSetCameraNear : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraNear";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraNear(nearPlane)\n"
			"\n"
			"- Sets the distance of the camera's near plane";
	}

	bool Execute(const std::vector <std::string>& params) override;
};

class CmdSetCameraFar : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraFar";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraFar(farPlane)\n"
			"\n"
			"- Sets the distance of the camera's far plane";
	}

	bool Execute(const std::vector <std::string>& params) override;
};

class CmdSetCameraFov : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraFov";
	}

	const char* GetDescription() override
	{
		return
			"SetCameraFov(fov)\n"
			"\n"
			"- Sets the camera's field of view";
	}

	bool Execute(const std::vector <std::string>& params) override;
};