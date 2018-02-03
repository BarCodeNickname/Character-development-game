#include "Consumables.h"

Consumables::Consumables(System::Drawing::Image ^ picture_, int add_health_, int price_)
{
	picture = picture_;
	add_health = add_health_;
	price = price_;
}
