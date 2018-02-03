#pragma once
#include "Enemies_vector.h"
#include "fight_UI.h"

#include "Fight_algorithm.h"
using namespace System::Threading;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Fight_menu_UI
	/// </summary>
	public ref class Fight_menu_UI : public System::Windows::Forms::Form
	{
	public:
		Fight_menu_UI(void)
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
		~Fight_menu_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  enemy_pic_1;
	private: System::Windows::Forms::PictureBox^  enemy_pic_2;
	private: System::Windows::Forms::PictureBox^  enemy_pic_3;
	private: System::Windows::Forms::PictureBox^  enemy_pic_4;
	private: System::Windows::Forms::Button^  Back_btn;


	private:
		Enemies_vector enem_vec;
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		Character player;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Fight_menu_UI::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_pic_1 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_pic_2 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_pic_3 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_pic_4 = (gcnew System::Windows::Forms::PictureBox());
			this->Back_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(93, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 206);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// enemy_pic_1
			// 
			this->enemy_pic_1->Location = System::Drawing::Point(769, 380);
			this->enemy_pic_1->Name = L"enemy_pic_1";
			this->enemy_pic_1->Size = System::Drawing::Size(115, 110);
			this->enemy_pic_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->enemy_pic_1->TabIndex = 1;
			this->enemy_pic_1->TabStop = false;
			this->enemy_pic_1->Click += gcnew System::EventHandler(this, &Fight_menu_UI::enemy_pic_1_Click);
			// 
			// enemy_pic_2
			// 
			this->enemy_pic_2->Location = System::Drawing::Point(769, 264);
			this->enemy_pic_2->Name = L"enemy_pic_2";
			this->enemy_pic_2->Size = System::Drawing::Size(115, 110);
			this->enemy_pic_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->enemy_pic_2->TabIndex = 2;
			this->enemy_pic_2->TabStop = false;
			this->enemy_pic_2->Click += gcnew System::EventHandler(this, &Fight_menu_UI::enemy_pic_2_Click);
			// 
			// enemy_pic_3
			// 
			this->enemy_pic_3->Location = System::Drawing::Point(769, 148);
			this->enemy_pic_3->Name = L"enemy_pic_3";
			this->enemy_pic_3->Size = System::Drawing::Size(115, 110);
			this->enemy_pic_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->enemy_pic_3->TabIndex = 3;
			this->enemy_pic_3->TabStop = false;
			this->enemy_pic_3->Click += gcnew System::EventHandler(this, &Fight_menu_UI::enemy_pic_3_Click);
			// 
			// enemy_pic_4
			// 
			this->enemy_pic_4->Location = System::Drawing::Point(769, 32);
			this->enemy_pic_4->Name = L"enemy_pic_4";
			this->enemy_pic_4->Size = System::Drawing::Size(115, 110);
			this->enemy_pic_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->enemy_pic_4->TabIndex = 4;
			this->enemy_pic_4->TabStop = false;
			// 
			// Back_btn
			// 
			this->Back_btn->Location = System::Drawing::Point(93, 483);
			this->Back_btn->Name = L"Back_btn";
			this->Back_btn->Size = System::Drawing::Size(75, 23);
			this->Back_btn->TabIndex = 5;
			this->Back_btn->Text = L"back";
			this->Back_btn->UseVisualStyleBackColor = true;
			this->Back_btn->Click += gcnew System::EventHandler(this, &Fight_menu_UI::Back_btn_Click);
			// 
			// Fight_menu_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 591);
			this->Controls->Add(this->Back_btn);
			this->Controls->Add(this->enemy_pic_4);
			this->Controls->Add(this->enemy_pic_3);
			this->Controls->Add(this->enemy_pic_2);
			this->Controls->Add(this->enemy_pic_1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Fight_menu_UI";
			this->Text = L"Fight_menu_UI";
			this->Load += gcnew System::EventHandler(this, &Fight_menu_UI::Fight_menu_UI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic_4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Fight_menu_UI_Load(System::Object^  sender, System::EventArgs^  e) {
		enem_vec.initialize_vector();
		enemy_pic_1->Image = enem_vec.vecotr_of_all_enemies[0]->picture;
		enemy_pic_2->Image = enem_vec.vecotr_of_all_enemies[1]->picture;
		enemy_pic_3->Image = enem_vec.vecotr_of_all_enemies[2]->picture;
		
		//enemy_pic_4->Image = enem_vec.vecotr_of_all_enemies[3]->picture;


	}
private: System::Void enemy_pic_1_Click(System::Object^  sender, System::EventArgs^  e) {
	fight_UI^ fight_menu = gcnew fight_UI();
	//Fight_menu_UI::Visible = false;
	Character^ player_ptr = %player;
	fight_menu->player = player_ptr;
	
									
	
	fight_menu->enemy = enem_vec.vecotr_of_all_enemies[0];
	

	fight_menu->Show();
	Thread^ newThread = gcnew Thread(gcnew ParameterizedThreadStart(Fight_algorithm::fight));
	newThread->Start(gcnew Fight_algorithm_params(%player, enem_vec.vecotr_of_all_enemies[0], fight_menu));

	//System::Windows::Forms::DialogResult result = ;
	if (fight_menu->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		player_ptr = %fight_menu->player;
		player = player_ptr;
		//player.gold = player.gold + System::Convert::ToInt32(work_menu->Gold_returned);
		//	player.gold = params_of_work_UI->player->gold;
		Fight_menu_UI::Visible = true;

	}
	if (enem_vec.vecotr_of_all_enemies[0]->health <= 0)
	{
		enemy_pic_1->Hide();
	}
}
private: System::Void enemy_pic_2_Click(System::Object^  sender, System::EventArgs^  e) {
	fight_UI^ fight_menu = gcnew fight_UI();
	//Fight_menu_UI::Visible = false;
	Character^ player_ptr = %player;
	fight_menu->player = player_ptr;



	fight_menu->enemy = enem_vec.vecotr_of_all_enemies[1];
	fight_menu->Show();
	Thread^ newThread = gcnew Thread(gcnew ParameterizedThreadStart(Fight_algorithm::fight));
	newThread->Start(gcnew Fight_algorithm_params(%player, enem_vec.vecotr_of_all_enemies[1], fight_menu));
	if (fight_menu->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		player_ptr = %fight_menu->player;
		player = player_ptr;
		//player.gold = player.gold + System::Convert::ToInt32(work_menu->Gold_returned);
		//	player.gold = params_of_work_UI->player->gold;
		Fight_menu_UI::Visible = true;
	}

}
private: System::Void enemy_pic_3_Click(System::Object^  sender, System::EventArgs^  e) {
	fight_UI^ fight_menu = gcnew fight_UI();
	Fight_menu_UI::Visible = false;
	Character^ player_ptr = %player;
	fight_menu->player = player_ptr;



	fight_menu->enemy = enem_vec.vecotr_of_all_enemies[2];
	fight_menu->Show();
	Thread^ newThread = gcnew Thread(gcnew ParameterizedThreadStart(Fight_algorithm::fight));
	newThread->Start(gcnew Fight_algorithm_params(%player, enem_vec.vecotr_of_all_enemies[2], fight_menu));

	if (fight_menu->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		player_ptr = %fight_menu->player;
		player = player_ptr;
		//player.gold = player.gold + System::Convert::ToInt32(work_menu->Gold_returned);
		//	player.gold = params_of_work_UI->player->gold;
		Fight_menu_UI::Visible = true;
		
	}
}
private: System::Void Back_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
}
};
}
