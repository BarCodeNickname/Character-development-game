#pragma once
#include "Character.h"
#include "Sword_vector.h"
public ref class Enemies_vector
{
public:
	System::Collections::Generic::List<Character^>^ vecotr_of_all_enemies = gcnew System::Collections::Generic::List<Character^>();
	System::Collections::Generic::List<Character^>^ initialize_vector();


};