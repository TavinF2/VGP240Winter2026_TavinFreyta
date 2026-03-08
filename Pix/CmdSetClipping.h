#pragma once

#include "Command.h"

class CmdSetClipping : public Command
{
public:
	const char* GetName() override
	{
		return "SetClipping";
	}

	const char* GetDescription() override
	{
		return
			"SetClipping(boolean)"
			"\n"
			"-Sets clipping on or off.";
	}

	bool Execute(const std::vector <std::string>& params) override;
};