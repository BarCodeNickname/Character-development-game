#include "Boots.h"

Boots::Boots(int AdditionalAgility_, System::Drawing::Image ^ image_path_, System::Int16 price_,int required_strenght_, int required_agility_)
{
	AdditionalAgility = AdditionalAgility_;
	picture = image_path_; price = price_;
	required_strenght = required_strenght_;
	required_agility = required_agility_;
	
}
