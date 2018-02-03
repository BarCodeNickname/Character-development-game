
#include "Character.h"


Character::Character()
{
	strenght = 10;
	agility = 10;
	health = 100;
	gold = 10;


	//throw gcnew System::NotImplementedException();
}

Character::Character(int s, int a, int h, int g, System::Drawing::Image^ p_, Sword^ active_sword_)
{
	strenght = s;
	agility = a;
	health = h;
	gold = g;
	picture = p_;
	active_sword = active_sword_;
	//throw gcnew System::NotImplementedException();
}
//
Character::Character(Character ^ old_obj)
{
	strenght = old_obj->strenght;
	agility = old_obj->agility;
	health = old_obj->health;
	gold = old_obj->gold;
	miecz_vector->AddRange(old_obj->miecz_vector);
	/*for (int i = 0; i < old_obj->miecz_queue->Count; i++)
	{
		Sword^ temp = old_obj->miecz_queue->Dequeue;

		this->miecz_queue->Enqueue(temp);
	}*/
	//throw gcnew System::NotImplementedException();
}

Character ^ Character::operator=(const Character ^ other)
{
	this->strenght = other->strenght;
	this->agility = other->agility;
	this->health = other->health;
	this->current_health = other->current_health;
	this->gold = other->gold;
	//other->miecz_vector.CopyTo(this->miecz_vector);
	//this->miecz_vector = gcnew System::Collections::Generic::List<Sword^>();
	if (other->miecz_vector->Count != 0)
		this->miecz_vector->AddRange(other->miecz_vector);
	else
		this->miecz_vector->Clear();
	if (other->armor_vector->Count != 0)
		this->armor_vector->AddRange(other->armor_vector);
	else
		this->armor_vector->Clear();
	if (other->boots_vector->Count != 0)
		this->boots_vector->AddRange(other->boots_vector);
	else
		this->boots_vector->Clear();
	if (other->consumables_vector->Count != 0)
		this->consumables_vector->AddRange(other->consumables_vector);
	else
		this->consumables_vector->Clear();
	this->active_boots = other->active_boots;
	this->active_sword = other->active_sword;
	this->active_armor = other->active_armor;
	this->picture = other->picture;

	//other->miecz_vector->MemberwiseClone(this->miecz_vector);
	/*for (int i = 0; i < other->miecz_queue->Count; i++)
	{
		Sword^ temp = other->miecz_queue->Dequeue;
		this->miecz_queue->Enqueue(&temp);
	}*/
	//this->miecz_vectr = other->miecz_vector;
	//for(int i =0;i<other->miecz_vector.LastIndexOf();i++)
	//throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
	return this;
}

void Character::set_parameters()
{
	strenght = 10;
	agility = 10;
	health = 100;
	gold = 100;
	current_health = health;

}

bool Character::dodge()
{
	double prob = 1.0* agility / 100;
	std::knuth_b rand_engine;
	std::bernoulli_distribution d(prob);


	return d(rand_engine);
}

//bool Character::crit()
//{
//
//
//
//}
