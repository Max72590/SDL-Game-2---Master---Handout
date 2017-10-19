#pragma once


#include "Module.h"
#include "Animation.h"
#include "Globals.h"

class ModuleSceneHonda :
	public Module
{
public:
	ModuleSceneHonda();
	~ModuleSceneHonda();

	bool Start();
	update_status Update();
	bool CleanUp();


};

