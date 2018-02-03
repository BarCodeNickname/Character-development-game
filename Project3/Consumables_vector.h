#pragma once
#include "Consumables.h"

public ref class Consumables_vector
{
public:
	System::Collections::Generic::List<Consumables^>^ vector_of_all_consumables = gcnew System::Collections::Generic::List<Consumables^>();
	System::Collections::Generic::List<Consumables^>^ initialize_vector();
};