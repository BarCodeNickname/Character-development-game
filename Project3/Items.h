#pragma once
#include <string>
public ref class Items
{
public:
	System::Int16 required_strenght;
	System::Int16 required_agility;
	System::Int16 price;
	System::Drawing::Image^ picture;
	System::Boolean active=false;
	Items^ operator=(const Items^ other) {
		this->required_agility = other->required_agility;
		this->required_strenght = other->required_strenght;
		this->price = other->price;
		this->picture = other->picture;
		this->active = other->active;
		return this;
	}
	//Items() {};
	~Items() {};
};