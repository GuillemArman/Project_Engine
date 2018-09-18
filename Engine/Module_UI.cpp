#include "Globals.h"
#include "Application.h"
#include "Module_UI.h"


Module_UI::Module_UI(Application* app, bool start_enabled) : Module(app, start_enabled)
{
	
}

Module_UI::~Module_UI()
{}

// -----------------------------------------------------------------
bool Module_UI::Start()
{
	LOG("Setting up the UI");
	bool ret = true;
	//ImGui_ImplSdl_Init(App->window->window);
	return ret;
}

// -----------------------------------------------------------------
bool Module_UI::CleanUp()
{
	LOG("Cleaning UI");

	return true;
}

// -----------------------------------------------------------------
update_status Module_UI::Update(float dt)
{



	return UPDATE_CONTINUE;
}
