#include "Globals.h"
#include "Application.h"
#include "ModuleSceneHonda.h"
#include "ModuleRender.h"
#include "ModuleTextures.h"
#include "ModulePlayer.h"
#include "ModuleInput.h"
#include "ModuleAudio.h"
#include "ModuleFadeToBlack.h"
#include "SDL/include/SDL.h"


ModuleSceneHonda::ModuleSceneHonda()
{
}


ModuleSceneHonda::~ModuleSceneHonda()
{
}

bool ModuleSceneHonda::Start() {
	return true;
}

update_status ModuleSceneHonda::Update() {
	return UPDATE_CONTINUE;
}

bool ModuleSceneHonda::CleanUp() {
	return true;
}