#pragma once
#include "Armor.h" 
public ref class Armor_vector
{
public:
	System::Collections::Generic::List<Armor^>^ vecotr_of_all_armors = gcnew System::Collections::Generic::List<Armor^>();
	System::Collections::Generic::List<Armor^>^ initialize_vector();
};