#pragma once
#include "Character.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for fight_UI
	/// </summary>
	public ref class fight_UI : public System::Windows::Forms::Form
	{
	public:
		fight_UI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			health_label_delegate = gcnew SetHealthLabel(this, &fight_UI::set_health_label_method);
			enemy_health_label_delegate = gcnew SetHealthLabel(this, &fight_UI::set_health_label_method);
			round_label_delegate = gcnew SetRoundLabel(this, &fight_UI::set_round_label_method);
			sword_right_delegate = gcnew SwordRightDelegate(this, &fight_UI::toggle_right_sword);
			sword_left_delegate = gcnew SwordLeftDelegate(this, &fight_UI::toggle_left_sword);
			enemy_pic_delegate = gcnew SetEnemyPicture(this, &fight_UI::set_enemy_pic_method);
			done_button_delegate = gcnew ShowDoneButton(this, &fight_UI::show_done_button_method);
			hide_enemy_picture_delegate = gcnew HideEnemyPicture(this, &fight_UI::hide_enemy_picture_method);
			hide_player_picture_delegate = gcnew HidePlayerPicture(this, &fight_UI::hide_player_picture_method);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fight_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  Ninja_pic;
	public: System::Windows::Forms::PictureBox^  enemy_pic;
	protected:

	public: System::Windows::Forms::Label^  health_label;
	public: System::Windows::Forms::Label^  enemy_health_label;
	public: System::Windows::Forms::PictureBox^  sword_right;
	public:
	public: System::Windows::Forms::PictureBox^  sword_left;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		Character player;
		Character enemy;
		delegate void SetHealthLabel(String^ str, bool true_means_player);
		delegate void SetRoundLabel(int no);
		delegate void SwordRightDelegate(bool visible);
		delegate void SwordLeftDelegate(bool visible);
		delegate void SetEnemyPicture();
		delegate void ShowDoneButton(bool t);
		delegate void HideEnemyPicture(bool visible);
		delegate void HidePlayerPicture(bool visible);
		SetHealthLabel^ health_label_delegate;
		SetHealthLabel^ enemy_health_label_delegate;
		SetRoundLabel^ round_label_delegate;
		SwordRightDelegate^ sword_right_delegate;
		SetEnemyPicture^ enemy_pic_delegate;
		ShowDoneButton^ done_button_delegate;
		HidePlayerPicture^ hide_player_picture_delegate;
		HideEnemyPicture^ hide_enemy_picture_delegate;
	private: System::Windows::Forms::Label^  round_label;
	private: System::Windows::Forms::Button^  done_button;
	public:
		SwordLeftDelegate^ sword_left_delegate;
		void set_health_label_method(String^ str, bool true_means_player) {
			if (true_means_player == true)
				health_label->Text = str;
			else
				enemy_health_label->Text = str;

		}
		void hide_player_picture_method(bool visible)
		{
			if (visible == true)
			{
				Ninja_pic->Visible = true;
			}
			else
			{
				Ninja_pic->Visible = false;
			}
		}
		void hide_enemy_picture_method(bool visible)
		{
			if (visible == true)
			{
				enemy_pic->Visible = true;
			}
			else
			{
				enemy_pic->Visible = false;
			}
		}
		void show_done_button_method(bool t)
		{
			if (t == true)
			done_button->Visible = true;
		}
		void set_enemy_pic_method()
		{
			enemy_pic->Visible = true;
		}
		void set_round_label_method(int no)
		{
			round_label->Text ="round:"+ System::Convert::ToString(no);
		}
		void toggle_right_sword(bool visible)
		{
			if (visible == true)
			{
				sword_right->Show();
				
			}
			else
			{
				sword_right->Hide();
			}
		}
		void toggle_left_sword(bool visible)
		{
			if (visible == true)
			{
				sword_left->Show();
			}
			else
			{
				sword_left->Hide();
			}
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(fight_UI::typeid));
			this->Ninja_pic = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_pic = (gcnew System::Windows::Forms::PictureBox());
			this->health_label = (gcnew System::Windows::Forms::Label());
			this->enemy_health_label = (gcnew System::Windows::Forms::Label());
			this->sword_right = (gcnew System::Windows::Forms::PictureBox());
			this->sword_left = (gcnew System::Windows::Forms::PictureBox());
			this->round_label = (gcnew System::Windows::Forms::Label());
			this->done_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ninja_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_right))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_left))->BeginInit();
			this->SuspendLayout();
			// 
			// Ninja_pic
			// 
			this->Ninja_pic->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Ninja_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ninja_pic.Image")));
			this->Ninja_pic->Location = System::Drawing::Point(12, 78);
			this->Ninja_pic->Name = L"Ninja_pic";
			this->Ninja_pic->Size = System::Drawing::Size(204, 200);
			this->Ninja_pic->TabIndex = 6;
			this->Ninja_pic->TabStop = false;
			// 
			// enemy_pic
			// 
			this->enemy_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"enemy_pic.Image")));
			this->enemy_pic->Location = System::Drawing::Point(571, 78);
			this->enemy_pic->Name = L"enemy_pic";
			this->enemy_pic->Size = System::Drawing::Size(193, 200);
			this->enemy_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->enemy_pic->TabIndex = 7;
			this->enemy_pic->TabStop = false;
			// 
			// health_label
			// 
			this->health_label->AutoSize = true;
			this->health_label->Location = System::Drawing::Point(60, 47);
			this->health_label->Name = L"health_label";
			this->health_label->Size = System::Drawing::Size(42, 13);
			this->health_label->TabIndex = 8;
			this->health_label->Text = L"health: ";
			// 
			// enemy_health_label
			// 
			this->enemy_health_label->AutoSize = true;
			this->enemy_health_label->Location = System::Drawing::Point(586, 47);
			this->enemy_health_label->Name = L"enemy_health_label";
			this->enemy_health_label->Size = System::Drawing::Size(42, 13);
			this->enemy_health_label->TabIndex = 9;
			this->enemy_health_label->Text = L"health: ";
			// 
			// sword_right
			// 
			this->sword_right->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sword_right.Image")));
			this->sword_right->Location = System::Drawing::Point(263, 47);
			this->sword_right->Name = L"sword_right";
			this->sword_right->Size = System::Drawing::Size(265, 274);
			this->sword_right->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->sword_right->TabIndex = 10;
			this->sword_right->TabStop = false;
			// 
			// sword_left
			// 
			this->sword_left->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sword_left.Image")));
			this->sword_left->Location = System::Drawing::Point(263, 47);
			this->sword_left->Name = L"sword_left";
			this->sword_left->Size = System::Drawing::Size(265, 274);
			this->sword_left->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->sword_left->TabIndex = 11;
			this->sword_left->TabStop = false;
			// 
			// round_label
			// 
			this->round_label->AutoSize = true;
			this->round_label->Location = System::Drawing::Point(368, 9);
			this->round_label->Name = L"round_label";
			this->round_label->Size = System::Drawing::Size(40, 13);
			this->round_label->TabIndex = 12;
			this->round_label->Text = L"round: ";
			// 
			// done_button
			// 
			this->done_button->Location = System::Drawing::Point(354, 167);
			this->done_button->Name = L"done_button";
			this->done_button->Size = System::Drawing::Size(75, 23);
			this->done_button->TabIndex = 13;
			this->done_button->Text = L"Done";
			this->done_button->UseVisualStyleBackColor = true;
			this->done_button->Visible = false;
			this->done_button->Click += gcnew System::EventHandler(this, &fight_UI::done_button_Click);
			// 
			// fight_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 425);
			this->Controls->Add(this->done_button);
			this->Controls->Add(this->round_label);
			this->Controls->Add(this->sword_left);
			this->Controls->Add(this->sword_right);
			this->Controls->Add(this->enemy_health_label);
			this->Controls->Add(this->health_label);
			this->Controls->Add(this->enemy_pic);
			this->Controls->Add(this->Ninja_pic);
			this->Name = L"fight_UI";
			this->Text = L"fight_UI";
			this->Load += gcnew System::EventHandler(this, &fight_UI::fight_UI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ninja_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_right))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_left))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
				Close();
			}
private: System::Void fight_UI_Load(System::Object^  sender, System::EventArgs^  e) {
	sword_left->Image = enemy.active_sword->picture;
	sword_right->Image = player.active_sword->picture;
	enemy_pic->Image = enemy.picture;

}
	private: System::Void done_button_Click(System::Object^  sender, System::EventArgs^  e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();



	}
};
}
