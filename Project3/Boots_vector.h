#pragma once
#include "Boots.h"


public ref class Boots_vector
{
public:
	System::Collections::Generic::List<Boots^>^ vecotr_of_all_boots = gcnew System::Collections::Generic::List<Boots^>();
	System::Collections::Generic::List<Boots^>^ initialize_vector();

};