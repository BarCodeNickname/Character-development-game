#include "Enemies_vector.h"

System::Collections::Generic::List<Character^>^ Enemies_vector::initialize_vector()
{
	Sword_vector sw_vec;
	sw_vec.initialize_vector();
	Character enemy1(1, 1, 50, 2000, System::Drawing::Image::FromFile("enemy1.png"),sw_vec.vector_of_all_swords[0]);
	Character Leonardo(50, 20, 100, 2000, System::Drawing::Image::FromFile("Leonardo.jpg"), sw_vec.vector_of_all_swords[1]);
	Character Donatello(100, 30, 150, 2000,System::Drawing::Image::FromFile("donatello.jpg"), sw_vec.vector_of_all_swords[2]);
	vecotr_of_all_enemies->Add(%enemy1);
	vecotr_of_all_enemies->Add(%Leonardo);
	vecotr_of_all_enemies->Add(%Donatello);

	return vecotr_of_all_enemies;
	//throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}
