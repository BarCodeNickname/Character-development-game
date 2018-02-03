#pragma once
public ref class Training_parameters
{
public:
		static int health_cost, agility_cost, strenght_cost;
		static int healt_counter=0, agility_counter=0, strenght_counter=0;
		Training_parameters() {};
		void setparameters() { health_cost = 5; agility_cost = 5; strenght_cost = 5; }
		//Training_parameters(int health_cost_, int agility_cost_, int strenght_cost_) { health_cost = health_cost_, agility_cost = agility_cost_, strenght_cost = strenght_cost_; }
};