#pragma once
#include "Items.h"

public ref class Sword :public Items
{
public:

	System::Int16 lower_bound;
	System::Int16 upper_bound;
	
	void set_parameters(System::Int16 lower_bound_, System::Int16 upper_bound_, System::Drawing::Image^ image_path_, System::Int16 price_) {
		lower_bound = lower_bound_; upper_bound = upper_bound_;
		picture = image_path_; price = price_;
	}
	Sword() {};

	virtual int special_effect(int round) { return lower_bound + (rand() % static_cast<int>(upper_bound - lower_bound + 1)); };
	Sword(Sword^ other)
	{
		
		required_agility = other->required_agility;
		required_strenght = other->required_strenght;
		price = other->price;
		picture = other->picture;
		active = other->active;
		lower_bound = other->lower_bound;
		upper_bound = other->upper_bound;
	}
	Sword^ operator= (const Sword^ other)
	{
		this->required_agility = other->required_agility;
		this->required_strenght = other->required_strenght;
		this->price = other->price;
		this->picture = other->picture;
		this->active = other->active;
		this->lower_bound = other->lower_bound;
		this->upper_bound = other->upper_bound;
		return this;
	}
	int deal_damage(/*System::Int16 lower_bound, System::Int16 upper_bound*/)
	{

		return lower_bound + (rand() % static_cast<int>(upper_bound - lower_bound + 1));
	}
	~Sword() {};

};
