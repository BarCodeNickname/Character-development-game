#pragma once

#include "Character.h"
#include "Sword_vector.h"
#include "Armor_vector.h"
#include "Boots_vector.h"
#include "Items.h"
#include "Consumables_vector.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for shop_UI
	/// </summary>
	public ref class shop_UI : public System::Windows::Forms::Form
	{
	public:
		shop_UI(void)
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
		~shop_UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  salesman_pic;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  item_1;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::GroupBox^  Info_box;
			 int counter = 0;
			 Sword_vector all_swords_vector;
			 Armor_vector arm_vec;
			 Consumables_vector cons_vec;
	private: System::Windows::Forms::PictureBox^  pictureBox12;

	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  Bought_items_counter_lbl;
			 Boots_vector boots_vec;
			 void text_box_message(Items^ it);
	private: System::Windows::Forms::Button^  back_button;
	public:  Character player;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	public:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(shop_UI::typeid));
			this->salesman_pic = (gcnew System::Windows::Forms::PictureBox());
			this->item_1 = (gcnew System::Windows::Forms::PictureBox());
			this->Info_box = (gcnew System::Windows::Forms::GroupBox());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->Bought_items_counter_lbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesman_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// salesman_pic
			// 
			this->salesman_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salesman_pic.Image")));
			this->salesman_pic->Location = System::Drawing::Point(526, 67);
			this->salesman_pic->Name = L"salesman_pic";
			this->salesman_pic->Size = System::Drawing::Size(205, 207);
			this->salesman_pic->TabIndex = 0;
			this->salesman_pic->TabStop = false;
			// 
			// item_1
			// 
			this->item_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item_1.Image")));
			this->item_1->Location = System::Drawing::Point(46, 67);
			this->item_1->Name = L"item_1";
			this->item_1->Size = System::Drawing::Size(75, 73);
			this->item_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->item_1->TabIndex = 1;
			this->item_1->TabStop = false;
			this->item_1->Click += gcnew System::EventHandler(this, &shop_UI::item_1_Click);
			this->item_1->MouseLeave += gcnew System::EventHandler(this, &shop_UI::item_1_MouseLeave);
			this->item_1->MouseHover += gcnew System::EventHandler(this, &shop_UI::item_1_MouseHover);
			// 
			// Info_box
			// 
			this->Info_box->Location = System::Drawing::Point(526, 309);
			this->Info_box->Name = L"Info_box";
			this->Info_box->Size = System::Drawing::Size(200, 100);
			this->Info_box->TabIndex = 2;
			this->Info_box->TabStop = false;
			// 
			// back_button
			// 
			this->back_button->Location = System::Drawing::Point(46, 441);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(75, 23);
			this->back_button->TabIndex = 3;
			this->back_button->Text = L"back";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &shop_UI::back_button_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(149, 67);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 73);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox2_Click);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox2_MouseLeave);
			this->pictureBox2->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox2_MouseHover);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(257, 67);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 73);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox3_Click);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox3_MouseLeave);
			this->pictureBox3->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox3_MouseHover);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(46, 146);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(75, 73);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox4_Click);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox4_MouseLeave);
			this->pictureBox4->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox4_MouseHover);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(149, 146);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(75, 73);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox5_Click);
			this->pictureBox5->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox5_MouseLeave);
			this->pictureBox5->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox5_MouseHover);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(257, 146);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(75, 73);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox6_Click);
			this->pictureBox6->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox6_MouseLeave);
			this->pictureBox6->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox6_MouseHover);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(257, 225);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(75, 73);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox9_Click);
			this->pictureBox9->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox9_MouseLeave);
			this->pictureBox9->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox9_MouseHover);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(46, 225);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(75, 73);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox7_Click);
			this->pictureBox7->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox7_MouseLeave);
			this->pictureBox7->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox7_MouseHover);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(149, 225);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(75, 73);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 11;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox8_Click);
			this->pictureBox8->MouseLeave += gcnew System::EventHandler(this, &shop_UI::pictureBox8_MouseLeave);
			this->pictureBox8->MouseHover += gcnew System::EventHandler(this, &shop_UI::pictureBox8_MouseHover);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(257, 304);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(75, 73);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox12_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(46, 304);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(75, 73);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 13;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(149, 304);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(75, 73);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &shop_UI::pictureBox11_Click);
			// 
			// Bought_items_counter_lbl
			// 
			this->Bought_items_counter_lbl->AutoSize = true;
			this->Bought_items_counter_lbl->Location = System::Drawing::Point(366, 9);
			this->Bought_items_counter_lbl->Name = L"Bought_items_counter_lbl";
			this->Bought_items_counter_lbl->Size = System::Drawing::Size(35, 13);
			this->Bought_items_counter_lbl->TabIndex = 15;
			this->Bought_items_counter_lbl->Text = L"label1";
			// 
			// shop_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 487);
			this->Controls->Add(this->Bought_items_counter_lbl);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->Info_box);
			this->Controls->Add(this->item_1);
			this->Controls->Add(this->salesman_pic);
			this->Name = L"shop_UI";
			this->Text = L"shop_UI";
			this->Load += gcnew System::EventHandler(this, &shop_UI::shop_UI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesman_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void shop_UI_Load(System::Object^  sender, System::EventArgs^  e) {
		Bought_items_counter_lbl->Text = "Items bought: 0";
		counter = 0;
		all_swords_vector.initialize_vector();
		arm_vec.initialize_vector();
		boots_vec.initialize_vector();
		cons_vec.initialize_vector();
		//pictureBox1->Image = all_swords_vector.vector_of_all_swords[0]->picture;
		pictureBox2->Image = all_swords_vector.vector_of_all_swords[1]->picture;
		pictureBox3->Image = all_swords_vector.vector_of_all_swords[2]->picture;
		pictureBox4->Image = arm_vec.vecotr_of_all_armors[0]->picture;
		pictureBox5->Image = arm_vec.vecotr_of_all_armors[1]->picture;
		pictureBox6->Image = arm_vec.vecotr_of_all_armors[2]->picture;
		pictureBox7->Image = boots_vec.vecotr_of_all_boots[0]->picture;
		pictureBox8->Image = boots_vec.vecotr_of_all_boots[1]->picture;
		pictureBox9->Image = boots_vec.vecotr_of_all_boots[2]->picture;
		pictureBox10->Image = cons_vec.vector_of_all_consumables[0]->picture;
		pictureBox11->Image = cons_vec.vector_of_all_consumables[1]->picture;
		pictureBox12->Image = cons_vec.vector_of_all_consumables[2]->picture;
		player.miecz_vector->Clear();
		player.armor_vector->Clear();
		player.boots_vector->Clear();
		player.consumables_vector->Clear();
	}
	private: System::Void item_1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		text_box_message(all_swords_vector.vector_of_all_swords[0]);
	}
	private: System::Void item_1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Info_box->Text = "\0";
	}
	private: System::Void item_1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= all_swords_vector.vector_of_all_swords[0]->price)
		{
			player.miecz_vector->Add(all_swords_vector.vector_of_all_swords[0]);
			player.gold = player.gold - all_swords_vector.vector_of_all_swords[0]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}

		else
			Info_box->Text = "You need more gold";
	}

	private: System::Void back_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= all_swords_vector.vector_of_all_swords[1]->price)
		{
			player.miecz_vector->Add(all_swords_vector.vector_of_all_swords[1]);
			player.gold = player.gold - all_swords_vector.vector_of_all_swords[1]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
			
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= all_swords_vector.vector_of_all_swords[2]->price)
		{
			player.miecz_vector->Add(all_swords_vector.vector_of_all_swords[2]);
			player.gold = player.gold - all_swords_vector.vector_of_all_swords[2]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= arm_vec.vecotr_of_all_armors[0]->price)
		{
			player.armor_vector->Add(arm_vec.vecotr_of_all_armors[0]);
			player.gold = player.gold - arm_vec.vecotr_of_all_armors[0]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= arm_vec.vecotr_of_all_armors[1]->price)
		{
			player.armor_vector->Add(arm_vec.vecotr_of_all_armors[1]);
			player.gold = player.gold - arm_vec.vecotr_of_all_armors[1]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= arm_vec.vecotr_of_all_armors[2]->price)
		{
			player.armor_vector->Add(arm_vec.vecotr_of_all_armors[2]);
			player.gold = player.gold - arm_vec.vecotr_of_all_armors[2]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		else
			Info_box->Text = "You need more gold";
	
	}
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= boots_vec.vecotr_of_all_boots[0]->price)
		{
			player.boots_vector->Add(boots_vec.vecotr_of_all_boots[0]);
			player.gold = player.gold - boots_vec.vecotr_of_all_boots[0]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= boots_vec.vecotr_of_all_boots[1]->price)
		{
			player.boots_vector->Add(boots_vec.vecotr_of_all_boots[1]);
			player.gold = player.gold - boots_vec.vecotr_of_all_boots[1]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (player.gold >= boots_vec.vecotr_of_all_boots[2]->price)
		{
			player.boots_vector->Add(boots_vec.vecotr_of_all_boots[2]);
			player.gold = player.gold - boots_vec.vecotr_of_all_boots[2]->price;
			counter++;
			Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
		}
		else
			Info_box->Text = "You need more gold";
	}
	private: System::Void pictureBox2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		text_box_message(all_swords_vector.vector_of_all_swords[1]);
	}
private: System::Void pictureBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(all_swords_vector.vector_of_all_swords[2]);
}
private: System::Void pictureBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(arm_vec.vecotr_of_all_armors[0]);
}
private: System::Void pictureBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox5_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(arm_vec.vecotr_of_all_armors[1]);
}
private: System::Void pictureBox5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox6_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(arm_vec.vecotr_of_all_armors[2]);
}
private: System::Void pictureBox6_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox7_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(boots_vec.vecotr_of_all_boots[0]);
}
private: System::Void pictureBox7_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox8_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(boots_vec.vecotr_of_all_boots[1]);
}
private: System::Void pictureBox8_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox9_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	text_box_message(boots_vec.vecotr_of_all_boots[2]);
}
private: System::Void pictureBox9_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Info_box->Text = "\0";
}
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player.gold >= cons_vec.vector_of_all_consumables[0]->price)
	{
		player.consumables_vector->Add(cons_vec.vector_of_all_consumables[0]);
		player.gold = player.gold - cons_vec.vector_of_all_consumables[0]->price;
		counter++;
		Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
	}

	else
		Info_box->Text = "You need more gold";
}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player.gold >= cons_vec.vector_of_all_consumables[1]->price)
	{
		player.consumables_vector->Add(cons_vec.vector_of_all_consumables[1]);
		player.gold = player.gold - cons_vec.vector_of_all_consumables[1]->price;
		counter++;
		Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
	}

	else
		Info_box->Text = "You need more gold";
}
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player.gold >= cons_vec.vector_of_all_consumables[2]->price)
	{
		player.consumables_vector->Add(cons_vec.vector_of_all_consumables[2]);
		player.gold = player.gold - cons_vec.vector_of_all_consumables[2]->price;
		counter++;
		Bought_items_counter_lbl->Text = "Items bought: " + System::Convert::ToString(counter);
	}

	else
		Info_box->Text = "You need more gold";
}
};
}
