#pragma once
#include "Work_params.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for work_UI
	/// </summary>
	public ref class work_UI : public System::Windows::Forms::Form
	{
	public:
		work_UI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~work_UI()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		int time;
		System::Int32 gold;
		array<Work_params^>^job = gcnew array<Work_params^>(NO_OF_JOBS);
		void hide_pictures();
		int i;
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"work_UI";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	public: property System::Int32^ Gold_returned
	{
		System::Int32^ get()
		{
			return gold;
		}
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 0;
		job[i] = gcnew Work_params;
		job[i]->set_params("Rice", 100, 5);
		/*job[1]->set_params("Baker", 150, 30);
		job[2]->set_params("Alchemist", 200, 50);*/
		//hide_pictures();

		timer1->Enabled = true;
		gold = Convert::ToInt32(job[i]->income);

		//timer1->Enabled = false;
		//player->gold = player->gold + job[i]->income;
	}
	public: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {



		timer_label->Text = "Time left: " + System::Convert::ToString(job[i]->time);
		job[i]->time--;

		if (job[i]->time == 0)
		{
			timer1->Enabled = false;
			work_UI::Close();

		}




	}
	private: System::Void baker_pic_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 1;
		job[i] = gcnew Work_params;
		job[i]->set_params("Baker", 150, 5);
	//	hide_pictures();
		timer1->Enabled = true;

		//timer1->Enabled = false;
		//player->gold = player->gold + job[i]->income;
	}
	private: System::Void alchemist_pic_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 2;
		job[i] = gcnew Work_params;
		job[i]->set_params("Alchemist", 150, 30);
		//hide_pictures();
		timer1->Enabled = true;

		//timer1->Enabled = false;
		//	player->gold = player->gold + job[i]->income;
	}
	private: System::Void work_UI_Leave(System::Object^  sender, System::EventArgs^  e) {
		//MyForm::gold_label->Text = "Gold: " + System::Convert::ToString(MyForm::player.gold);

	}
	};
}
