#ifndef __Module_UI__
#define __Module_UI__

#include "Module.h"

class Module_UI : public Module
{
public:

	Module_UI(Application* app, bool start_enabled = true);
	~Module_UI();

	
	bool CleanUp();
	bool Start();
	update_status Update(float dt);


	
};

#endif // __Module_UI__