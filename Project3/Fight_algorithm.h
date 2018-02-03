#pragma once
#include "Character.h"
#include "fight_UI.h"
#include "Fight_algorithm_params.h"
#include <tuple>


public ref class Fight_algorithm : System::Object
{
public:
	Fight_algorithm();

	static void fight(Object^ data);
};