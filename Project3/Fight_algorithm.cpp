#include "Fight_algorithm.h"
#include "MyForm.h"

using namespace System::Windows::Forms;

Fight_algorithm::Fight_algorithm()
{
	//throw gcnew System::NotImplementedException();
}

void Fight_algorithm::fight(Object^ params)
{
	Fight_algorithm_params^ data = safe_cast<Fight_algorithm_params^>(params);
	try
	{


		
		int damage;
		int neglected = 0;
		if (data->player->active_armor)
			neglected = data->player->active_armor->Armor_rate;
		int round = 1;
		data->form->Invoke(data->form->sword_right_delegate, false);
		data->form->Invoke(data->form->sword_left_delegate, false);
		data->form->Invoke(data->form->health_label_delegate, "Health: " + (System::Convert::ToString(data->player->current_health)) + "%", true);
		data->form->Invoke(data->form->enemy_health_label_delegate, "Health: " + (System::Convert::ToString(data->oponent->health)) + "%", false);
		data->form->Invoke(data->form->enemy_pic_delegate);
		while (data->player->current_health > 0 && data->oponent->health > 0)
		{
			//damage = data->player->strenght;
			//damage = data->player->active_sword.deal_damage();
			System::Threading::Thread::Sleep(500);
			if (data->player->active_sword->GetType() != Donatello_staff::typeid)
			{
				data->form->Invoke(data->form->sword_right_delegate, true);
				//data->oponent->health = data->oponent->health - damage; //zmiana
				if (!data->oponent->dodge())
				{
					data->oponent->health = data->oponent->health - data->player->active_sword->special_effect(round) + 0.1*data->oponent->strenght;
					data->form->Invoke(data->form->health_label_delegate, "Health: " + (System::Convert::ToString(data->oponent->health)) + "%", false);
					System::Threading::Thread::Sleep(500);
				}
				else
				{

					//for (int i = 0; i < 200; i++)
					data->form->Invoke(data->form->hide_enemy_picture_delegate, true);
					System::Threading::Thread::Sleep(500);
					data->form->Invoke(data->form->hide_enemy_picture_delegate, false);
				}
				//System::Threading::Thread::Sleep(500);
				data->form->Invoke(data->form->sword_right_delegate, false);
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					data->form->Invoke(data->form->sword_right_delegate, true);
					//data->oponent->health = data->oponent->health - damage; //zmiana
					data->oponent->health = data->oponent->health - data->player->active_sword->special_effect(round) + 0.1*data->oponent->strenght;
					data->form->Invoke(data->form->health_label_delegate, "Health: " + (System::Convert::ToString(data->oponent->health)) + "%", false);
					System::Threading::Thread::Sleep(500);
					data->form->Invoke(data->form->sword_right_delegate, false);
				}
			}



			damage = data->oponent->active_sword->special_effect(round) + 0.1*data->player->strenght;

			if (data->oponent->active_sword->GetType() != Donatello_staff::typeid)
			{
				if (!data->player->dodge())
				{
					data->form->Invoke(data->form->sword_left_delegate, true);
					if (neglected < damage)
					{
						data->player->current_health = data->player->current_health - damage + neglected;
						data->form->Invoke(data->form->enemy_health_label_delegate, "Health: " + (System::Convert::ToString(data->player->current_health)) + "%", true);
						System::Threading::Thread::Sleep(500);
						data->form->Invoke(data->form->sword_left_delegate, false);
					}

					else
					{
						data->player->current_health = data->player->current_health - damage;
						data->form->Invoke(data->form->enemy_health_label_delegate, "Health: " + (System::Convert::ToString(data->player->current_health)) + "%", true);
						System::Threading::Thread::Sleep(500);
						data->form->Invoke(data->form->sword_left_delegate, false);
					}

				}
				else {
					data->form->Invoke(data->form->hide_player_picture_delegate, true);
					System::Threading::Thread::Sleep(500);
					data->form->Invoke(data->form->hide_player_picture_delegate, false);
				}


			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					data->form->Invoke(data->form->sword_left_delegate, true);
					data->player->current_health = data->player->current_health - data->oponent->active_sword->special_effect(round) + 0.1*data->oponent->strenght + neglected;

					data->form->Invoke(data->form->enemy_health_label_delegate, "Health: " + (System::Convert::ToString(data->player->current_health)) + "%", true);

					System::Threading::Thread::Sleep(500);
					data->form->Invoke(data->form->sword_left_delegate, false);
				}
			}
			round++;
			data->form->Invoke(data->form->round_label_delegate, round);
		}
		data->form->Invoke(data->form->done_button_delegate, true);


	}
	catch (System::Exception^)
	{
		data->form->Close();
	}
}
