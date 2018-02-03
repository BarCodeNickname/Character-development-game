#include "Boots_vector.h"

System::Collections::Generic::List<Boots^>^ Boots_vector::initialize_vector()
{
	Boots basic_boots(5, System::Drawing::Image::FromFile("basic_boots.jpeg"), 100,0, 5);
	Boots boots_of_haste(10, System::Drawing::Image::FromFile("boots_of_haste.jpg"), 250,0, 13);
	Boots elvish_boots(15, System::Drawing::Image::FromFile("elvish_boots.jpeg"), 400, 0 ,30);
	vecotr_of_all_boots->Add(%basic_boots);
	vecotr_of_all_boots->Add(%boots_of_haste);
	vecotr_of_all_boots->Add(%elvish_boots);
	
	return vecotr_of_all_boots;
}
