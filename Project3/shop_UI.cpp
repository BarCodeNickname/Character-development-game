#include "shop_UI.h"

void Project3::shop_UI::text_box_message(Items^ it)
{
	Info_box->Text = "Price: " + System::Convert::ToString(it->price) + " " + "Required strenght: " + System::Convert::ToString(it->required_strenght) + " "
		+ "Required agility: " + System::Convert::ToString(it->required_agility) + " ";
}
