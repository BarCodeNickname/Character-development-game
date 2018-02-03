
#pragma once
#include "Character.h"
#include "fight_UI.h"
public ref class Fight_algorithm_params : public System::Object
{
public:
	Character^ player;
	Character^ oponent;
	Project3::fight_UI^ form;
	
	Fight_algorithm_params(Character^ player_, Character^ oponent_, Project3::fight_UI^ form_)
	{
		player = player_;
		oponent = oponent_;
		form = form_;
	}

};