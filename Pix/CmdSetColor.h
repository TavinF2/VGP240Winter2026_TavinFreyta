#pragma once

#include "Command.h"

class CmdSetColor : public Command
{
public: 

	const char* GetName() override 
	{
		return "SetColor";
	}
	const char* GetDescription() override 
	{
		return "SetColor(r,g,b)\n \n - Sets the color of the next pixel using RGB.\n Values are between 0 and 1";
	}

	bool Execute(const std::vector<std::string>& params) override;
	

	

};