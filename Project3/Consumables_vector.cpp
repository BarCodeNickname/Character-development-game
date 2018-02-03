#include "Consumables_vector.h"

System::Collections::Generic::List<Consumables^>^ Consumables_vector::initialize_vector()
{
	Consumables bread(System::Drawing::Image::FromFile("bread.jpg"), 10,10);
	Consumables rice(System::Drawing::Image::FromFile("rice_bowl.jpg"), 20,50);
	Consumables health_potion(System::Drawing::Image::FromFile("health_potion.png"), 2000,100);

	vector_of_all_consumables->Add(%bread);
	vector_of_all_consumables->Add(%rice);
	vector_of_all_consumables->Add(%health_potion);
	return vector_of_all_consumables;
}

