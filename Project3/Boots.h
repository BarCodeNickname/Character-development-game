#pragma once
#include "Items.h"

public ref class Boots : public Items
{
public:
	int AdditionalAgility;
	Boots() {};
	Boots(int AdditionalAgility_, System::Drawing::Image^ image_path_, System::Int16 price_,int required_strenght_,int required_agility_);


};