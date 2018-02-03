#pragma once
#include"Items.h"
public ref class Consumables:public Items
{
public:
	
	//System::Drawing::Image^ picture;
	int add_health;
	Consumables() {};
	Consumables(System::Drawing::Image^ picture_, int add_health_,int price_);
};