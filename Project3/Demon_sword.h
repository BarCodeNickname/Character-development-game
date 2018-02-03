#pragma once
#include "Sword.h"
 public ref class Demon_sword : public Sword
{
public:
	virtual int special_effect(int round) override
	{
		int temp = upper_bound * 2;
		if (round % 2 == 0)
		{
			return temp;
		}
		else 
			return lower_bound + (rand() % static_cast<int>(upper_bound - lower_bound + 1));
	}



};