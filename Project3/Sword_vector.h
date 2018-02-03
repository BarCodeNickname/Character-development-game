#pragma once
#include "Sword.h"
#include "Demon_sword.h"
#include "Donatello_staff.h"
public ref class Sword_vector
{

public:
	System::Collections::Generic::List<Sword^>^ vector_of_all_swords = gcnew System::Collections::Generic::List<Sword^>();
	System::Collections::Generic::List<Sword^>^ initialize_vector();

};