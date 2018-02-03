#include "Sword_vector.h"

System::Collections::Generic::List<Sword^>^ Sword_vector::initialize_vector()
{
	Sword miecz;
	Demon_sword demon_sword;
	Donatello_staff donatello_staff;

	miecz.set_parameters(1, 5, System::Drawing::Image::FromFile("sword_left.jpg"), 100);
	demon_sword.set_parameters(1, 20, System::Drawing::Image::FromFile("sword2.jpg"), 200);
	
	donatello_staff.set_parameters(10, 30, System::Drawing::Image::FromFile("donatello-staff.jpg"),300);

	vector_of_all_swords->Add(%miecz);
	vector_of_all_swords->Add(%demon_sword);
	vector_of_all_swords->Add(%donatello_staff);
	return vector_of_all_swords;
	//throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}
