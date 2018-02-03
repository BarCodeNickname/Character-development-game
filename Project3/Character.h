
#pragma once

#include <iostream>
#include <string>
#include "Sword.h"
#include "Armor.h"
#include <random>
#include "Boots.h"
#include "Consumables.h"
public ref class Character
{

public:

	int strenght, agility,gold, health;
	int current_health;
	System::Collections::Generic::List<Sword^>^ miecz_vector = gcnew System::Collections::Generic::List<Sword^>();
	System::Collections::Generic::List<Armor^>^ armor_vector = gcnew System::Collections::Generic::List<Armor^>();
	System::Collections::Generic::List<Boots^>^ boots_vector = gcnew System::Collections::Generic::List<Boots^>();
	System::Collections::Generic::List<Consumables^>^ consumables_vector = gcnew System::Collections::Generic::List<Consumables^>();
	Sword^ active_sword;
	Armor^ active_armor;
	Boots^ active_boots;
	System::Drawing::Image^ picture;
	Character();
	Character(int s, int a, int h, int g, System::Drawing::Image^ p_,Sword^ active_sword_);
	Character(Character^ old_obj);
	/*	strenght(old_obj->strenght), agility(old_obj->agility), health(old_obj->health), gold(old_obj->gold), crit_chance(old_obj->crit_chance)
	{}*/
	Character^ operator= (const Character^ other);
	void set_parameters();
	bool dodge();
	//bool crit();


};