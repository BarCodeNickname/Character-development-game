#pragma once
#include "Character.h"
#include "Training_parameters.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for training_UI
	/// </summary>
	public ref class training_UI : public System::Windows::Forms::Form
	{
	public:
		training_UI(void)
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
		~training_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::Label^  Gold_lbl;
	private:

	protected:

	private: System::Windows::Forms::Label^  Strenght_label;
	private: System::Windows::Forms::Label^  Agility_lablel;


	private: System::Windows::Forms::Label^  Health_label;
	private: System::Windows::Forms::Button^  health_up;
	private: System::Windows::Forms::Button^  strenght_up;
	private: System::Windows::Forms::Button^  agility_up;



	private: System::Windows::Forms::Label^  health_cost_lbl;
	private: System::Windows::Forms::Label^  strenght_cost_lbl;
	private: System::Windows::Forms::Label^  Agility_cost_lbl;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  Back_btn;

	
			//int counter = 0;
			int fibbonacci(int n);
			int change_price(int counter, int cost);
			Training_parameters parameters;
	public: Character player;
#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(training_UI::typeid));
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->Gold_lbl = (gcnew System::Windows::Forms::Label());
				this->Strenght_label = (gcnew System::Windows::Forms::Label());
				this->Agility_lablel = (gcnew System::Windows::Forms::Label());
				this->Health_label = (gcnew System::Windows::Forms::Label());
				this->health_up = (gcnew System::Windows::Forms::Button());
				this->strenght_up = (gcnew System::Windows::Forms::Button());
				this->agility_up = (gcnew System::Windows::Forms::Button());
				this->health_cost_lbl = (gcnew System::Windows::Forms::Label());
				this->strenght_cost_lbl = (gcnew System::Windows::Forms::Label());
				this->Agility_cost_lbl = (gcnew System::Windows::Forms::Label());
				this->Back_btn = (gcnew System::Windows::Forms::Button());
				this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->Location = System::Drawing::Point(483, 65);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(204, 254);
				this->pictureBox1->TabIndex = 0;
				this->pictureBox1->TabStop = false;
				// 
				// Gold_lbl
				// 
				this->Gold_lbl->AutoSize = true;
				this->Gold_lbl->Location = System::Drawing::Point(514, 322);
				this->Gold_lbl->Name = L"Gold_lbl";
				this->Gold_lbl->Size = System::Drawing::Size(35, 13);
				this->Gold_lbl->TabIndex = 1;
				this->Gold_lbl->Text = L"Gold: ";
				// 
				// Strenght_label
				// 
				this->Strenght_label->AutoSize = true;
				this->Strenght_label->Location = System::Drawing::Point(103, 114);
				this->Strenght_label->Name = L"Strenght_label";
				this->Strenght_label->Size = System::Drawing::Size(47, 13);
				this->Strenght_label->TabIndex = 2;
				this->Strenght_label->Text = L"Strenght";
				// 
				// Agility_lablel
				// 
				this->Agility_lablel->AutoSize = true;
				this->Agility_lablel->Location = System::Drawing::Point(103, 161);
				this->Agility_lablel->Name = L"Agility_lablel";
				this->Agility_lablel->Size = System::Drawing::Size(40, 13);
				this->Agility_lablel->TabIndex = 3;
				this->Agility_lablel->Text = L"Agility: ";
				// 
				// Health_label
				// 
				this->Health_label->AutoSize = true;
				this->Health_label->Location = System::Drawing::Point(103, 76);
				this->Health_label->Name = L"Health_label";
				this->Health_label->Size = System::Drawing::Size(41, 13);
				this->Health_label->TabIndex = 4;
				this->Health_label->Text = L"Health:";
				// 
				// health_up
				// 
				this->health_up->Location = System::Drawing::Point(182, 65);
				this->health_up->Name = L"health_up";
				this->health_up->Size = System::Drawing::Size(22, 24);
				this->health_up->TabIndex = 5;
				this->health_up->Text = L"+";
				this->health_up->UseVisualStyleBackColor = true;
				this->health_up->Click += gcnew System::EventHandler(this, &training_UI::health_up_Click);
				// 
				// strenght_up
				// 
				this->strenght_up->Location = System::Drawing::Point(182, 105);
				this->strenght_up->Name = L"strenght_up";
				this->strenght_up->Size = System::Drawing::Size(22, 22);
				this->strenght_up->TabIndex = 6;
				this->strenght_up->Text = L"+";
				this->strenght_up->UseVisualStyleBackColor = true;
				this->strenght_up->Click += gcnew System::EventHandler(this, &training_UI::strenght_up_Click);
				// 
				// agility_up
				// 
				this->agility_up->Location = System::Drawing::Point(182, 150);
				this->agility_up->Name = L"agility_up";
				this->agility_up->Size = System::Drawing::Size(22, 24);
				this->agility_up->TabIndex = 7;
				this->agility_up->Text = L"+";
				this->agility_up->UseVisualStyleBackColor = true;
				this->agility_up->Click += gcnew System::EventHandler(this, &training_UI::agility_up_Click);
				// 
				// health_cost_lbl
				// 
				this->health_cost_lbl->AutoSize = true;
				this->health_cost_lbl->Location = System::Drawing::Point(223, 76);
				this->health_cost_lbl->Name = L"health_cost_lbl";
				this->health_cost_lbl->Size = System::Drawing::Size(33, 13);
				this->health_cost_lbl->TabIndex = 8;
				this->health_cost_lbl->Text = L"cost: ";
				// 
				// strenght_cost_lbl
				// 
				this->strenght_cost_lbl->AutoSize = true;
				this->strenght_cost_lbl->Location = System::Drawing::Point(223, 114);
				this->strenght_cost_lbl->Name = L"strenght_cost_lbl";
				this->strenght_cost_lbl->Size = System::Drawing::Size(30, 13);
				this->strenght_cost_lbl->TabIndex = 9;
				this->strenght_cost_lbl->Text = L"cost:";
				// 
				// Agility_cost_lbl
				// 
				this->Agility_cost_lbl->AutoSize = true;
				this->Agility_cost_lbl->Location = System::Drawing::Point(223, 161);
				this->Agility_cost_lbl->Name = L"Agility_cost_lbl";
				this->Agility_cost_lbl->Size = System::Drawing::Size(33, 13);
				this->Agility_cost_lbl->TabIndex = 10;
				this->Agility_cost_lbl->Text = L"cost: ";
				this->Agility_cost_lbl->Click += gcnew System::EventHandler(this, &training_UI::label4_Click);
				// 
				// Back_btn
				// 
				this->Back_btn->Location = System::Drawing::Point(68, 322);
				this->Back_btn->Name = L"Back_btn";
				this->Back_btn->Size = System::Drawing::Size(75, 23);
				this->Back_btn->TabIndex = 11;
				this->Back_btn->Text = L"Back";
				this->Back_btn->UseVisualStyleBackColor = true;
				this->Back_btn->Click += gcnew System::EventHandler(this, &training_UI::Back_btn_Click);
				// 
				// richTextBox1
				// 
				this->richTextBox1->Location = System::Drawing::Point(483, 338);
				this->richTextBox1->Name = L"richTextBox1";
				this->richTextBox1->Size = System::Drawing::Size(204, 121);
				this->richTextBox1->TabIndex = 12;
				this->richTextBox1->Text = L"";
				// 
				// training_UI
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(767, 478);
				this->Controls->Add(this->richTextBox1);
				this->Controls->Add(this->Back_btn);
				this->Controls->Add(this->Agility_cost_lbl);
				this->Controls->Add(this->strenght_cost_lbl);
				this->Controls->Add(this->health_cost_lbl);
				this->Controls->Add(this->agility_up);
				this->Controls->Add(this->strenght_up);
				this->Controls->Add(this->health_up);
				this->Controls->Add(this->Health_label);
				this->Controls->Add(this->Agility_lablel);
				this->Controls->Add(this->Strenght_label);
				this->Controls->Add(this->Gold_lbl);
				this->Controls->Add(this->pictureBox1);
				this->Name = L"training_UI";
				this->Text = L"training_UI";
				this->Load += gcnew System::EventHandler(this, &training_UI::training_UI_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
	private: System::Void training_UI_Load(System::Object^  sender, System::EventArgs^  e) {

		Gold_lbl->Text = "Gold: " + System::Convert::ToString(player.gold);
		//Gold_lbl->Text = "Gold: " + System::Convert::ToString(MyForm::player.gold);
		Health_label->Text = "Health: " + System::Convert::ToString(player.health);
		Strenght_label->Text = "Strenght: " + System::Convert::ToString(player.strenght);
		Agility_lablel->Text = "Agility: " + System::Convert::ToString(player.agility);
		if(parameters.agility_counter==0&&parameters.healt_counter==0&&parameters.strenght_counter==0)	{ parameters.setparameters(); }
		
		health_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.health_cost);
		Agility_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.agility_cost);
		strenght_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.strenght_cost);
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void health_up_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= parameters.health_cost)
		{
			player.health = player.health + 5;
			parameters.healt_counter++;
			parameters.health_cost = change_price(parameters.healt_counter, parameters.health_cost);
			Health_label->Text = "Health: " + System::Convert::ToString(player.health);
			player.gold = player.gold - parameters.health_cost;
			parameters.health_cost = change_price(1, parameters.health_cost);
			health_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.health_cost);
			Gold_lbl->Text = "Gold: " + System::Convert::ToString(player.gold);
		}
		else
			richTextBox1->Text = "Not enough gold";
	}
	private: System::Void strenght_up_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= parameters.strenght_cost)
		{
			player.strenght = player.strenght + 5;
			parameters.strenght_counter++;

			Strenght_label->Text = "Strenght: " + System::Convert::ToString(player.strenght);
			player.gold = player.gold - parameters.strenght_cost;
			parameters.strenght_cost = change_price(parameters.strenght_counter, parameters.strenght_cost);
			strenght_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.strenght_cost);
			Gold_lbl->Text = "Gold: " + System::Convert::ToString(player.gold);
		}
		else
			richTextBox1->Text = "Not enough gold";
	}
	private: System::Void agility_up_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= parameters.agility_cost)
		{
			player.agility = player.agility + 2;
			parameters.agility_counter++;

			Agility_lablel->Text = "Agility: " + System::Convert::ToString(player.agility);
			player.gold = player.gold - parameters.agility_cost;
			parameters.agility_cost = 2*change_price(parameters.agility_counter, parameters.agility_cost);
			//parameters.agility_cost = change_price(1, parameters.health_cost);
			Agility_cost_lbl->Text = "Cost: " + System::Convert::ToString(parameters.agility_cost);
			Gold_lbl->Text = "Gold: " + System::Convert::ToString(player.gold);
		}
		else
			richTextBox1->Text = "Not enough gold";
	}
	private: System::Void Back_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	};
}
