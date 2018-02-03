#include "Armor_vector.h"

System::Collections::Generic::List<Armor^>^ Armor_vector::initialize_vector()
{
	Armor light_armor(System::Convert::ToInt16(5), System::Drawing::Image::FromFile("light_armor.jpg"), 150,10,5);
	Armor medium_armor(System::Convert::ToInt16(30), System::Drawing::Image::FromFile("medium_armor.png"), 400,30,10);
	Armor heavy_armor(System::Convert::ToInt16(50), System::Drawing::Image::FromFile("Ancient_Nord_Armor.png"), 600,50,20);

	vecotr_of_all_armors->Add(%light_armor);
	vecotr_of_all_armors->Add(%medium_armor);
	vecotr_of_all_armors->Add(%heavy_armor);
	return vecotr_of_all_armors;
	//throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}
