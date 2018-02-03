#pragma once
#include "Items.h"
public ref class Armor : public Items
{
	


public:
	System::Int16 Armor_rate;
	void set_parameters(System::Int16 armor_rate_, System::Drawing::Image^ image_path_, System::Int16 price_) {
		Armor_rate = armor_rate_;
		picture = image_path_; price = price_;
	}
	Armor(Armor^ other)
	{

		required_agility = other->required_agility;
		required_strenght = other->required_strenght;
		price = other->price;
		picture = other->picture;
		active = other->active;
		Armor_rate = other->Armor_rate;
	}
	Armor(System::Int16 armor_rate_, System::Drawing::Image^ image_path_, System::Int16 price_,int required_strenght_, int required_agility_)
	{
		Armor_rate = armor_rate_;
		picture = image_path_; price = price_;
		required_strenght = required_strenght_;
		required_agility = required_agility_;
	};



};