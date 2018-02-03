#pragma once
#include "Sword.h"
public ref class Donatello_staff : public Sword
{
public:
	virtual int special_effect(int round) override
	{
		
		if (round % 2 != 0)
		{
			return lower_bound + (rand() % static_cast<int>(upper_bound - lower_bound + 1));

		}
		else
			return lower_bound + (rand() % static_cast<int>(upper_bound - lower_bound + 1));
		
		
		
	}
};