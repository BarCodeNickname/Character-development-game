#include "MyForm.h"

//#include "fight_UI.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm form;
	Application::Run(%form);

}

void Project3::MyForm::show_menu()
{
	gold_label->Text = "Gold: " + (System::Convert::ToString(player.gold));
	gold_label->Show();
	strenght_label->Text = "Strenght: " + (System::Convert::ToString(player.strenght));
	strenght_label->Show();
	agility_label->Text = "Agility: " + (System::Convert::ToString(player.agility));
	health_label->Text = "Health: " + (System::Convert::ToString(player.current_health)) + "/" + System::Convert::ToString(player.health);
	agility_label->Show();
	Ninja_pic->Show();
	Fight_button->Show();
	//throw gcnew System::NotImplementedException();
}

void Project3::MyForm::hide_menu()
{

	gold_label->Hide();

	strenght_label->Hide();

	agility_label->Hide();
	Ninja_pic->Hide();
	Fight_button->Hide();
	//throw gcnew System::NotImplementedException();
}

void Project3::MyForm::save_progress()
{
	std::ofstream save_file;
	save_file.open("save_file.txt");

	save_file.close();
	//throw gcnew System::NotImplementedException();
}

void Project3::MyForm::activate_sword(PictureBox ^ item)
{
	Image^ test;
	item->DoDragDrop(item->Image, DragDropEffects::Move);
	bool iseverythingok = false;
	test = item->Image;
	for (int i = 0; i < sw_vec.vector_of_all_swords->Count; i++)
	{

		if (sw_vec.vector_of_all_swords[i]->picture->PropertyIdList[0] == test->PropertyIdList[0])
		{
			if (player.agility <= sw_vec.vector_of_all_swords[i]->required_agility)
			{
				Info_box->Text = "You need" + System::Convert::ToString(sw_vec.vector_of_all_swords[i]->required_agility) + "agility to use this weapon";
				item->Image = test;
				break;
			}


			if (player.strenght <= sw_vec.vector_of_all_swords[i]->required_strenght)
			{
				Info_box->Text = "You need" + System::Convert::ToString(sw_vec.vector_of_all_swords[i]->required_strenght) + "strenght to use this weapon";
				item->Image = test;
				break;
			}
			player.active_sword = sw_vec.vector_of_all_swords[i];
			iseverythingok = true;
			//player.miecz_vector[i]->active = true;
			break;
		}
	}
	if (iseverythingok == true && IsSwordActive == true)
		item->Image = sw_test->Image; //Image::FromFile("alchemy.jpg");
	else
		item->Image = test;
	//throw gcnew System::NotImplementedException();
}

void Project3::MyForm::activate_armor(PictureBox ^ item)
{
	Image^ test;
	item->DoDragDrop(item->Image, DragDropEffects::Move);
	test = item->Image;
	bool iseverythingok = false;
	for (int i = 0; i < arm_vec.vecotr_of_all_armors->Count; i++)
	{

		if (arm_vec.vecotr_of_all_armors[i]->picture->PropertyIdList[0] == test->PropertyIdList[0])
		{
			if (player.agility <= sw_vec.vector_of_all_swords[i]->required_agility)
			{
				Info_box->Text = "You need" + System::Convert::ToString(arm_vec.vecotr_of_all_armors[i]->required_agility) + "agility to use this armor";
				item->Image = test;
				break;
			}


			if (player.strenght <= sw_vec.vector_of_all_swords[i]->required_strenght)
			{
				Info_box->Text = "You need" + System::Convert::ToString(arm_vec.vecotr_of_all_armors[i]->required_strenght) + "strenght to use this armor";
				item->Image = test;
				break;
				player.active_armor = arm_vec.vecotr_of_all_armors[i];
				iseverythingok = true;
				//player.miecz_vector[i]->active = true;
				break;
			}
		}
	}
	if (iseverythingok == true && IsArmorActive == true)
		item->Image = arm_test->Image; //Image::FromFile("bread.jpg");
	else
		item->Image = test;

	//throw gcnew System::NotImplementedException();
}

void Project3::MyForm::activate_boots(PictureBox ^ item)
{
	Image^ test;
	item->DoDragDrop(item->Image, DragDropEffects::Move);
	bool iseverythingok = false;
	test = item->Image;
	for (int i = 0; i < boots_vec.vecotr_of_all_boots->Count; i++)
	{

		if (boots_vec.vecotr_of_all_boots[i]->picture->PropertyIdList[0] == test->PropertyIdList[0])
		{
			if (player.agility <= boots_vec.vecotr_of_all_boots[i]->required_agility)
			{
				Info_box->Text = "You need" + System::Convert::ToString(sw_vec.vector_of_all_swords[i]->required_agility) + "agility to use this weapon";
				item->Image = test;
				break;
			}
			player.active_boots = boots_vec.vecotr_of_all_boots[i];
			iseverythingok = true;
			//player.miecz_vector[i]->active = true;
			break;
		}
	}
	if (iseverythingok == true && IsSwordActive == true)
		item->Image = boots_test->Image; //Image::FromFile("\\zdjecia gladiatus\\boots.png");
	else
		item->Image = test;


}

void Project3::MyForm::use_conumable_item(PictureBox ^ item)
{
	Image^ test;
	test = item->Image;
	bool iseverythingok = false;
	if (!player.health != player.current_health)
	{
		for (int i = 0; i < cons_vec.vector_of_all_consumables->Count; i++)
		{

			if (cons_vec.vector_of_all_consumables[i]->picture->PropertyIdList[0] == test->PropertyIdList[0])
			{
				if (cons_vec.vector_of_all_consumables[i]->add_health >= player.health - player.current_health)
				{
					player.current_health = player.current_health + (player.health - player.current_health);
				}
				else
				{
					player.current_health = player.current_health + cons_vec.vector_of_all_consumables[i]->add_health;
				}
			}
		}
		item->Image = consumable_test->Image;
		health_label->Text = "Health: " + (System::Convert::ToString(player.current_health)) + "/" + System::Convert::ToString(player.health);
	}

	
		
		

}

