#pragma once

#include "Character.h"

#include "Fight_algorithm.h"
#include "work_UI.h"
#include "training_UI.h"
#include <fstream>
#include "shop_UI.h"
#include "Fight_menu_UI.h"
#include "Sword_vector.h"
#include "Armor_vector.h"
#include "Boots_vector.h"
using namespace System::Threading;

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	//class MyForm_Controller;
//	template <class <Derived>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String ^gold_text;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(String ^text)
		{
			InitializeComponent();
			gold_text = text;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:  System::Windows::Forms::Label^  gold_label;
	private: System::Windows::Forms::Button^  exit_button;

	private: System::Windows::Forms::Label^  agility_label;
	private: System::Windows::Forms::PictureBox^  Ninja_pic;
	private: System::Windows::Forms::Button^  Fight_button;
	private: System::Windows::Forms::Label^  strenght_label;
	private:
	public:

	public:

		Character player;
		Character enemy;
		Character^ player_ptr = %player;
		//training_UI^ training_menu = gcnew training_UI;
		Image^ testimage;
		
		Image^ armor_test_image;
		Image^ boots_test_image;
		Image^ consumable_test_image;
	private: System::Windows::Forms::Button^  work_button;
	private: System::Windows::Forms::Button^  Training_button;
	private: System::Windows::Forms::PictureBox^  item1;
	private: System::Windows::Forms::PictureBox^  sword_picture;
	private: System::Windows::Forms::PictureBox^  armor_picture;


	private: System::Windows::Forms::PictureBox^  boots_picture;
	private: System::Windows::Forms::PictureBox^  item2;
	private: System::Windows::Forms::PictureBox^  item3;
	private: System::Windows::Forms::PictureBox^  item4;
	private: System::Windows::Forms::PictureBox^  item5;




	public:
	private: System::Windows::Forms::Button^  shop_button;
	private: System::Windows::Forms::Label^  health_label;
	private: System::Windows::Forms::GroupBox^  Info_box;
			 Sword_vector sw_vec;
			 Armor_vector arm_vec;
			 Boots_vector boots_vec;
			 Consumables_vector cons_vec;
			 int iterator = 0;
			 bool IsSwordActive = false;
			 bool IsArmorActive = false;
			 bool AreBootsActive = false;
	private: System::Windows::Forms::PictureBox^  arm_item1;
	private: System::Windows::Forms::PictureBox^  arm_item2;
	private: System::Windows::Forms::PictureBox^  arm_item3;
	private: System::Windows::Forms::PictureBox^  arm_item4;
	private: System::Windows::Forms::PictureBox^  arm_item5;


	private: System::Windows::Forms::PictureBox^  boots_item1;
	private: System::Windows::Forms::PictureBox^  boots_item2;
	private: System::Windows::Forms::PictureBox^  boots_item3;
	private: System::Windows::Forms::PictureBox^  boots_item4;
	private: System::Windows::Forms::PictureBox^  boots_item5;
	private: System::Windows::Forms::PictureBox^  consumable_item1;
	private: System::Windows::Forms::PictureBox^  consumable_item2;
	private: System::Windows::Forms::PictureBox^  consumable_item3;
	private: System::Windows::Forms::PictureBox^  consumable_item4;
	private: System::Windows::Forms::PictureBox^  consumable_item5;
private: System::Windows::Forms::PictureBox^  boots_test;
private: System::Windows::Forms::PictureBox^  arm_test;
private: System::Windows::Forms::PictureBox^  sw_test;
private: System::Windows::Forms::PictureBox^  consumable_test;



			 int it = 0;
			 void show_menu();
			 void hide_menu();
			 void save_progress();
			
			 void activate_sword(PictureBox^ item);
			 void activate_armor(PictureBox^ item);
			 void activate_boots(PictureBox^ item);
			 void use_conumable_item(PictureBox^ item);
			 System::Collections::Generic::List<System::Windows::Forms::PictureBox^>^ image_vector = gcnew System::Collections::Generic::List<System::Windows::Forms::PictureBox^>(); //vector of swords images
			 System::Collections::Generic::List<System::Windows::Forms::PictureBox^>^ boots_image_vector = gcnew System::Collections::Generic::List<System::Windows::Forms::PictureBox^>(); //vector of boots images
			 System::Collections::Generic::List<System::Windows::Forms::PictureBox^>^ armor_image_vector = gcnew System::Collections::Generic::List<System::Windows::Forms::PictureBox^>(); //vector of armor images
			 System::Collections::Generic::List<System::Windows::Forms::PictureBox^>^ consumables_image_vector = gcnew System::Collections::Generic::List<System::Windows::Forms::PictureBox^>(); //vector of armor images
#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->gold_label = (gcnew System::Windows::Forms::Label());
				 this->exit_button = (gcnew System::Windows::Forms::Button());
				 this->agility_label = (gcnew System::Windows::Forms::Label());
				 this->Ninja_pic = (gcnew System::Windows::Forms::PictureBox());
				 this->Fight_button = (gcnew System::Windows::Forms::Button());
				 this->strenght_label = (gcnew System::Windows::Forms::Label());
				 this->work_button = (gcnew System::Windows::Forms::Button());
				 this->shop_button = (gcnew System::Windows::Forms::Button());
				 this->Training_button = (gcnew System::Windows::Forms::Button());
				 this->item1 = (gcnew System::Windows::Forms::PictureBox());
				 this->sword_picture = (gcnew System::Windows::Forms::PictureBox());
				 this->armor_picture = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_picture = (gcnew System::Windows::Forms::PictureBox());
				 this->item2 = (gcnew System::Windows::Forms::PictureBox());
				 this->item3 = (gcnew System::Windows::Forms::PictureBox());
				 this->item4 = (gcnew System::Windows::Forms::PictureBox());
				 this->item5 = (gcnew System::Windows::Forms::PictureBox());
				 this->health_label = (gcnew System::Windows::Forms::Label());
				 this->Info_box = (gcnew System::Windows::Forms::GroupBox());
				 this->arm_item1 = (gcnew System::Windows::Forms::PictureBox());
				 this->arm_item2 = (gcnew System::Windows::Forms::PictureBox());
				 this->arm_item3 = (gcnew System::Windows::Forms::PictureBox());
				 this->arm_item4 = (gcnew System::Windows::Forms::PictureBox());
				 this->arm_item5 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_item1 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_item2 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_item3 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_item4 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_item5 = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_item1 = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_item2 = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_item3 = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_item4 = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_item5 = (gcnew System::Windows::Forms::PictureBox());
				 this->boots_test = (gcnew System::Windows::Forms::PictureBox());
				 this->arm_test = (gcnew System::Windows::Forms::PictureBox());
				 this->sw_test = (gcnew System::Windows::Forms::PictureBox());
				 this->consumable_test = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ninja_pic))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_picture))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->armor_picture))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_picture))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_test))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_test))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sw_test))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_test))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // gold_label
				 // 
				 this->gold_label->AutoSize = true;
				 this->gold_label->Location = System::Drawing::Point(646, 54);
				 this->gold_label->Name = L"gold_label";
				 this->gold_label->Size = System::Drawing::Size(35, 13);
				 this->gold_label->TabIndex = 1;
				 this->gold_label->Text = L"Gold: ";
				 this->gold_label->Visible = false;
				 this->gold_label->Click += gcnew System::EventHandler(this, &MyForm::gold_label_Click);
				 // 
				 // exit_button
				 // 
				 this->exit_button->Location = System::Drawing::Point(991, 508);
				 this->exit_button->Name = L"exit_button";
				 this->exit_button->Size = System::Drawing::Size(75, 23);
				 this->exit_button->TabIndex = 2;
				 this->exit_button->Text = L"exit";
				 this->exit_button->UseVisualStyleBackColor = true;
				 this->exit_button->Click += gcnew System::EventHandler(this, &MyForm::exit_button_Click);
				 // 
				 // agility_label
				 // 
				 this->agility_label->AutoSize = true;
				 this->agility_label->Location = System::Drawing::Point(514, 54);
				 this->agility_label->Name = L"agility_label";
				 this->agility_label->Size = System::Drawing::Size(40, 13);
				 this->agility_label->TabIndex = 4;
				 this->agility_label->Text = L"Agility: ";
				 this->agility_label->Visible = false;
				 // 
				 // Ninja_pic
				 // 
				 this->Ninja_pic->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->Ninja_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ninja_pic.Image")));
				 this->Ninja_pic->Location = System::Drawing::Point(247, 70);
				 this->Ninja_pic->Name = L"Ninja_pic";
				 this->Ninja_pic->Size = System::Drawing::Size(204, 200);
				 this->Ninja_pic->TabIndex = 5;
				 this->Ninja_pic->TabStop = false;
				 this->Ninja_pic->Visible = false;
				 // 
				 // Fight_button
				 // 
				 this->Fight_button->Location = System::Drawing::Point(58, 84);
				 this->Fight_button->Name = L"Fight_button";
				 this->Fight_button->Size = System::Drawing::Size(75, 23);
				 this->Fight_button->TabIndex = 6;
				 this->Fight_button->Text = L"Fight";
				 this->Fight_button->UseVisualStyleBackColor = true;
				 this->Fight_button->Visible = false;
				 this->Fight_button->Click += gcnew System::EventHandler(this, &MyForm::Fight_button_Click);
				 // 
				 // strenght_label
				 // 
				 this->strenght_label->AutoSize = true;
				 this->strenght_label->Location = System::Drawing::Point(398, 54);
				 this->strenght_label->Name = L"strenght_label";
				 this->strenght_label->Size = System::Drawing::Size(53, 13);
				 this->strenght_label->TabIndex = 3;
				 this->strenght_label->Text = L"Strenght: ";
				 this->strenght_label->Visible = false;
				 this->strenght_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
				 // 
				 // work_button
				 // 
				 this->work_button->Location = System::Drawing::Point(58, 131);
				 this->work_button->Name = L"work_button";
				 this->work_button->Size = System::Drawing::Size(75, 23);
				 this->work_button->TabIndex = 7;
				 this->work_button->Text = L"Work";
				 this->work_button->UseVisualStyleBackColor = true;
				 this->work_button->Click += gcnew System::EventHandler(this, &MyForm::work_button_Click);
				 // 
				 // shop_button
				 // 
				 this->shop_button->Location = System::Drawing::Point(58, 180);
				 this->shop_button->Name = L"shop_button";
				 this->shop_button->Size = System::Drawing::Size(75, 23);
				 this->shop_button->TabIndex = 8;
				 this->shop_button->Text = L"shop";
				 this->shop_button->UseVisualStyleBackColor = true;
				 this->shop_button->Click += gcnew System::EventHandler(this, &MyForm::shop_button_Click);
				 // 
				 // Training_button
				 // 
				 this->Training_button->Location = System::Drawing::Point(58, 230);
				 this->Training_button->Name = L"Training_button";
				 this->Training_button->Size = System::Drawing::Size(75, 23);
				 this->Training_button->TabIndex = 9;
				 this->Training_button->Text = L"Training";
				 this->Training_button->UseVisualStyleBackColor = true;
				 this->Training_button->Click += gcnew System::EventHandler(this, &MyForm::Training_button_Click);
				 // 
				 // item1
				 // 
				 this->item1->Location = System::Drawing::Point(752, 318);
				 this->item1->Name = L"item1";
				 this->item1->Size = System::Drawing::Size(33, 31);
				 this->item1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->item1->TabIndex = 10;
				 this->item1->TabStop = false;
				 this->item1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::item1_MouseDown);
				 // 
				 // sword_picture
				 // 
				 this->sword_picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sword_picture.Image")));
				 this->sword_picture->Location = System::Drawing::Point(475, 154);
				 this->sword_picture->Name = L"sword_picture";
				 this->sword_picture->Size = System::Drawing::Size(99, 99);
				 this->sword_picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->sword_picture->TabIndex = 11;
				 this->sword_picture->TabStop = false;
				 this->sword_picture->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::sword_picture_DragDrop);
				 this->sword_picture->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::sword_picture_DragEnter);
				 // 
				 // armor_picture
				 // 
				 this->armor_picture->AllowDrop = true;
				 this->armor_picture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->armor_picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"armor_picture.Image")));
				 this->armor_picture->Location = System::Drawing::Point(580, 154);
				 this->armor_picture->Name = L"armor_picture";
				 this->armor_picture->Size = System::Drawing::Size(97, 158);
				 this->armor_picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->armor_picture->TabIndex = 12;
				 this->armor_picture->TabStop = false;
				 this->armor_picture->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::armor_picture_DragDrop);
				 this->armor_picture->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::armor_picture_DragEnter);
				 // 
				 // boots_picture
				 // 
				 this->boots_picture->AllowDrop = true;
				 this->boots_picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boots_picture.Image")));
				 this->boots_picture->Location = System::Drawing::Point(578, 318);
				 this->boots_picture->Name = L"boots_picture";
				 this->boots_picture->Size = System::Drawing::Size(99, 101);
				 this->boots_picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_picture->TabIndex = 15;
				 this->boots_picture->TabStop = false;
				 this->boots_picture->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::boots_picture_DragDrop);
				 this->boots_picture->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::boots_picture_DragEnter);
				 // 
				 // item2
				 // 
				 this->item2->Location = System::Drawing::Point(791, 318);
				 this->item2->Name = L"item2";
				 this->item2->Size = System::Drawing::Size(33, 31);
				 this->item2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->item2->TabIndex = 16;
				 this->item2->TabStop = false;
				 this->item2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::item2_MouseDown);
				 // 
				 // item3
				 // 
				 this->item3->Location = System::Drawing::Point(830, 318);
				 this->item3->Name = L"item3";
				 this->item3->Size = System::Drawing::Size(33, 31);
				 this->item3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->item3->TabIndex = 18;
				 this->item3->TabStop = false;
				 this->item3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::item3_MouseDown);
				 // 
				 // item4
				 // 
				 this->item4->Location = System::Drawing::Point(869, 318);
				 this->item4->Name = L"item4";
				 this->item4->Size = System::Drawing::Size(33, 31);
				 this->item4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->item4->TabIndex = 19;
				 this->item4->TabStop = false;
				 this->item4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::item4_MouseDown);
				 // 
				 // item5
				 // 
				 this->item5->Location = System::Drawing::Point(908, 318);
				 this->item5->Name = L"item5";
				 this->item5->Size = System::Drawing::Size(33, 31);
				 this->item5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->item5->TabIndex = 20;
				 this->item5->TabStop = false;
				 this->item5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::item5_MouseDown);
				 // 
				 // health_label
				 // 
				 this->health_label->AutoSize = true;
				 this->health_label->Location = System::Drawing::Point(286, 53);
				 this->health_label->Name = L"health_label";
				 this->health_label->Size = System::Drawing::Size(42, 13);
				 this->health_label->TabIndex = 21;
				 this->health_label->Text = L"health: ";
				 // 
				 // Info_box
				 // 
				 this->Info_box->Location = System::Drawing::Point(58, 348);
				 this->Info_box->Name = L"Info_box";
				 this->Info_box->Size = System::Drawing::Size(225, 152);
				 this->Info_box->TabIndex = 22;
				 this->Info_box->TabStop = false;
				 // 
				 // arm_item1
				 // 
				 this->arm_item1->Location = System::Drawing::Point(752, 355);
				 this->arm_item1->Name = L"arm_item1";
				 this->arm_item1->Size = System::Drawing::Size(33, 31);
				 this->arm_item1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_item1->TabIndex = 23;
				 this->arm_item1->TabStop = false;
				 this->arm_item1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::arm_item1_MouseDown);
				 // 
				 // arm_item2
				 // 
				 this->arm_item2->Location = System::Drawing::Point(791, 355);
				 this->arm_item2->Name = L"arm_item2";
				 this->arm_item2->Size = System::Drawing::Size(33, 31);
				 this->arm_item2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_item2->TabIndex = 24;
				 this->arm_item2->TabStop = false;
				 this->arm_item2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::arm_item2_MouseDown);
				 // 
				 // arm_item3
				 // 
				 this->arm_item3->Location = System::Drawing::Point(830, 355);
				 this->arm_item3->Name = L"arm_item3";
				 this->arm_item3->Size = System::Drawing::Size(33, 31);
				 this->arm_item3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_item3->TabIndex = 25;
				 this->arm_item3->TabStop = false;
				 this->arm_item3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::arm_item3_MouseDown);
				 // 
				 // arm_item4
				 // 
				 this->arm_item4->Location = System::Drawing::Point(869, 355);
				 this->arm_item4->Name = L"arm_item4";
				 this->arm_item4->Size = System::Drawing::Size(33, 31);
				 this->arm_item4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_item4->TabIndex = 26;
				 this->arm_item4->TabStop = false;
				 this->arm_item4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::arm_item4_MouseDown);
				 // 
				 // arm_item5
				 // 
				 this->arm_item5->Location = System::Drawing::Point(908, 355);
				 this->arm_item5->Name = L"arm_item5";
				 this->arm_item5->Size = System::Drawing::Size(33, 31);
				 this->arm_item5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_item5->TabIndex = 27;
				 this->arm_item5->TabStop = false;
				 this->arm_item5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::arm_item5_MouseDown);
				 // 
				 // boots_item1
				 // 
				 this->boots_item1->Location = System::Drawing::Point(752, 392);
				 this->boots_item1->Name = L"boots_item1";
				 this->boots_item1->Size = System::Drawing::Size(33, 31);
				 this->boots_item1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_item1->TabIndex = 29;
				 this->boots_item1->TabStop = false;
				 this->boots_item1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::boots_item1_MouseDown);
				 // 
				 // boots_item2
				 // 
				 this->boots_item2->Location = System::Drawing::Point(791, 392);
				 this->boots_item2->Name = L"boots_item2";
				 this->boots_item2->Size = System::Drawing::Size(33, 31);
				 this->boots_item2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_item2->TabIndex = 30;
				 this->boots_item2->TabStop = false;
				 this->boots_item2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::boots_item2_MouseDown);
				 // 
				 // boots_item3
				 // 
				 this->boots_item3->Location = System::Drawing::Point(830, 392);
				 this->boots_item3->Name = L"boots_item3";
				 this->boots_item3->Size = System::Drawing::Size(33, 31);
				 this->boots_item3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_item3->TabIndex = 31;
				 this->boots_item3->TabStop = false;
				 this->boots_item3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::boots_item3_MouseDown);
				 // 
				 // boots_item4
				 // 
				 this->boots_item4->Location = System::Drawing::Point(869, 392);
				 this->boots_item4->Name = L"boots_item4";
				 this->boots_item4->Size = System::Drawing::Size(33, 31);
				 this->boots_item4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_item4->TabIndex = 32;
				 this->boots_item4->TabStop = false;
				 this->boots_item4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::boots_item4_MouseDown);
				 // 
				 // boots_item5
				 // 
				 this->boots_item5->Location = System::Drawing::Point(908, 392);
				 this->boots_item5->Name = L"boots_item5";
				 this->boots_item5->Size = System::Drawing::Size(33, 31);
				 this->boots_item5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_item5->TabIndex = 33;
				 this->boots_item5->TabStop = false;
				 this->boots_item5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::boots_item5_MouseDown);
				 // 
				 // consumable_item1
				 // 
				 this->consumable_item1->Location = System::Drawing::Point(752, 429);
				 this->consumable_item1->Name = L"consumable_item1";
				 this->consumable_item1->Size = System::Drawing::Size(33, 31);
				 this->consumable_item1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_item1->TabIndex = 36;
				 this->consumable_item1->TabStop = false;
				 this->consumable_item1->Click += gcnew System::EventHandler(this, &MyForm::consumable_item1_Click);
				 // 
				 // consumable_item2
				 // 
				 this->consumable_item2->Location = System::Drawing::Point(791, 429);
				 this->consumable_item2->Name = L"consumable_item2";
				 this->consumable_item2->Size = System::Drawing::Size(33, 31);
				 this->consumable_item2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_item2->TabIndex = 37;
				 this->consumable_item2->TabStop = false;
				 this->consumable_item2->Click += gcnew System::EventHandler(this, &MyForm::consumable_item2_Click);
				 // 
				 // consumable_item3
				 // 
				 this->consumable_item3->Location = System::Drawing::Point(830, 429);
				 this->consumable_item3->Name = L"consumable_item3";
				 this->consumable_item3->Size = System::Drawing::Size(33, 31);
				 this->consumable_item3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_item3->TabIndex = 38;
				 this->consumable_item3->TabStop = false;
				 this->consumable_item3->Click += gcnew System::EventHandler(this, &MyForm::consumable_item3_Click);
				 // 
				 // consumable_item4
				 // 
				 this->consumable_item4->Location = System::Drawing::Point(869, 429);
				 this->consumable_item4->Name = L"consumable_item4";
				 this->consumable_item4->Size = System::Drawing::Size(33, 31);
				 this->consumable_item4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_item4->TabIndex = 39;
				 this->consumable_item4->TabStop = false;
				 this->consumable_item4->Click += gcnew System::EventHandler(this, &MyForm::consumable_item4_Click);
				 // 
				 // consumable_item5
				 // 
				 this->consumable_item5->Location = System::Drawing::Point(908, 429);
				 this->consumable_item5->Name = L"consumable_item5";
				 this->consumable_item5->Size = System::Drawing::Size(33, 31);
				 this->consumable_item5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_item5->TabIndex = 40;
				 this->consumable_item5->TabStop = false;
				 this->consumable_item5->Click += gcnew System::EventHandler(this, &MyForm::consumable_item5_Click);
				 // 
				 // boots_test
				 // 
				 this->boots_test->Location = System::Drawing::Point(367, 534);
				 this->boots_test->Name = L"boots_test";
				 this->boots_test->Size = System::Drawing::Size(33, 31);
				 this->boots_test->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->boots_test->TabIndex = 35;
				 this->boots_test->TabStop = false;
				 this->boots_test->Visible = false;
				 // 
				 // arm_test
				 // 
				 this->arm_test->Location = System::Drawing::Point(328, 534);
				 this->arm_test->Name = L"arm_test";
				 this->arm_test->Size = System::Drawing::Size(33, 31);
				 this->arm_test->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->arm_test->TabIndex = 34;
				 this->arm_test->TabStop = false;
				 this->arm_test->Visible = false;
				 // 
				 // sw_test
				 // 
				 this->sw_test->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sw_test.Image")));
				 this->sw_test->Location = System::Drawing::Point(289, 534);
				 this->sw_test->Name = L"sw_test";
				 this->sw_test->Size = System::Drawing::Size(33, 31);
				 this->sw_test->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->sw_test->TabIndex = 28;
				 this->sw_test->TabStop = false;
				 this->sw_test->Visible = false;
				 // 
				 // consumable_test
				 // 
				 this->consumable_test->Location = System::Drawing::Point(406, 534);
				 this->consumable_test->Name = L"consumable_test";
				 this->consumable_test->Size = System::Drawing::Size(33, 31);
				 this->consumable_test->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->consumable_test->TabIndex = 41;
				 this->consumable_test->TabStop = false;
				 this->consumable_test->Visible = false;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1118, 577);
				 this->Controls->Add(this->consumable_test);
				 this->Controls->Add(this->consumable_item5);
				 this->Controls->Add(this->consumable_item4);
				 this->Controls->Add(this->consumable_item3);
				 this->Controls->Add(this->consumable_item2);
				 this->Controls->Add(this->consumable_item1);
				 this->Controls->Add(this->boots_test);
				 this->Controls->Add(this->arm_test);
				 this->Controls->Add(this->boots_item5);
				 this->Controls->Add(this->boots_item4);
				 this->Controls->Add(this->boots_item3);
				 this->Controls->Add(this->boots_item2);
				 this->Controls->Add(this->boots_item1);
				 this->Controls->Add(this->sw_test);
				 this->Controls->Add(this->arm_item5);
				 this->Controls->Add(this->arm_item4);
				 this->Controls->Add(this->arm_item3);
				 this->Controls->Add(this->arm_item2);
				 this->Controls->Add(this->arm_item1);
				 this->Controls->Add(this->Info_box);
				 this->Controls->Add(this->health_label);
				 this->Controls->Add(this->item5);
				 this->Controls->Add(this->item4);
				 this->Controls->Add(this->item3);
				 this->Controls->Add(this->item2);
				 this->Controls->Add(this->boots_picture);
				 this->Controls->Add(this->armor_picture);
				 this->Controls->Add(this->sword_picture);
				 this->Controls->Add(this->item1);
				 this->Controls->Add(this->Training_button);
				 this->Controls->Add(this->shop_button);
				 this->Controls->Add(this->work_button);
				 this->Controls->Add(this->Fight_button);
				 this->Controls->Add(this->Ninja_pic);
				 this->Controls->Add(this->agility_label);
				 this->Controls->Add(this->strenght_label);
				 this->Controls->Add(this->exit_button);
				 this->Controls->Add(this->gold_label);
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ninja_pic))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sword_picture))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->armor_picture))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_picture))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_item5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_item5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_item5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boots_test))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arm_test))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sw_test))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->consumable_test))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void gold_label_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private:  System::Void Fight_button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (player.active_sword == nullptr)
		{
			Info_box->Text = "You need a weapon! ";

		}
		
		else {
			if (player.active_boots != nullptr)
				player.agility = player.agility + player.active_boots->AdditionalAgility;
			Fight_menu_UI^ fight_menu = gcnew Fight_menu_UI();

			MyForm::Visible = false;

			player_ptr = %player;
			fight_menu->player = player_ptr;
			auto result = fight_menu->ShowDialog();
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				player_ptr = %fight_menu->player;
				player = player_ptr;
				if (player.current_health <= 0)
				{
					Info_box->Text = "You've lost";

				}

				//player.gold = player.gold + System::Convert::ToInt32(work_menu->Gold_returned);
				//	player.gold = params_of_work_UI->player->gold;

				health_label->Text = "Health: " + System::Convert::ToString(player.current_health) + "/" + System::Convert::ToString(player.health);
				MyForm::Visible = true;
			}
		}

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		sw_vec.initialize_vector();
		arm_vec.initialize_vector();
		boots_vec.initialize_vector();
		cons_vec.initialize_vector();
		//armor_test_image = Image::FromFile("bread.jpg");
		Info_box->Text = "\0";
		player.set_parameters();
		sword_picture->AllowDrop = true;
		//button1->Hide();
		show_menu();
		//testimage->FromFile("alchemy.jpg");
#pragma region
		image_vector->Add(item1);
		image_vector->Add(item2);
		image_vector->Add(item3);
		image_vector->Add(item4);
		image_vector->Add(item5);
		armor_image_vector->Add(arm_item1);
		armor_image_vector->Add(arm_item2);
		armor_image_vector->Add(arm_item3);
		armor_image_vector->Add(arm_item4);
		armor_image_vector->Add(arm_item5);
		boots_image_vector->Add(boots_item1);
		boots_image_vector->Add(boots_item2);
		boots_image_vector->Add(boots_item3);
		boots_image_vector->Add(boots_item4);
		boots_image_vector->Add(boots_item5);
		consumables_image_vector->Add(consumable_item1);
		consumables_image_vector->Add(consumable_item2);
		consumables_image_vector->Add(consumable_item3);
		consumables_image_vector->Add(consumable_item4);
		consumables_image_vector->Add(consumable_item5);
#pragma endregion
		
		for (int i = 0; i < 5; i++)
		{
			image_vector[i]->Image = Image::FromFile("zdjecia gladiatus\\hand.png");
			image_vector[i]->Visible = true;
		}
		//testimage = Image::FromFile("alchemy.jpg");
		sw_test->Image = image_vector[0]->Image;
		testimage = sw_test->Image;
		
		//testimage = image_vector[0]->Image;
		//testimage = sw_test->Image;
		for (int i = 0; i < 5; i++)
		{
			armor_image_vector[i]->Image = Image::FromFile("zdjecia gladiatus\\armor.png");
			armor_image_vector[i]->Visible = true;
		}
		arm_test->Image = armor_image_vector[0]->Image;
		armor_test_image = arm_test->Image;
		for (int i = 0; i < 5; i++)
		{
			boots_image_vector[i]->Image = Image::FromFile("zdjecia gladiatus\\boots.png");
			boots_image_vector[i]->Visible = true;
		}
		boots_test->Image = boots_image_vector[0]->Image;
		boots_test_image = boots_test->Image;
		for (int i = 0; i < 5; i++)
		{
			consumables_image_vector[i]->Image = Image::FromFile("food.png");
		}
		consumable_test->Image = consumables_image_vector[0]->Image;
		consumable_test_image = consumable_test->Image;
		//boots_test_image = boots_image_vector[0]->Image;
	}
	private: System::Void work_button_Click(System::Object^  sender, System::EventArgs^  e) {
		work_UI^ work_menu = gcnew work_UI;
		work_menu->player = player_ptr;
		MyForm::Visible = false;
		auto result = work_menu->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{

			player_ptr = %work_menu->player;
			player = player_ptr;
			//player.gold = player.gold + System::Convert::ToInt32(work_menu->Gold_returned);
			//	player.gold = params_of_work_UI->player->gold;

			gold_label->Text = "Gold: " + System::Convert::ToString(player.gold);
			MyForm::Visible = true;
		}

	}
	private: System::Void Training_button_Click(System::Object^  sender, System::EventArgs^  e) {
		training_UI^ training_menu = gcnew training_UI;
		training_menu->player = player_ptr;
		MyForm::Visible = false;
		auto result = training_menu->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			player_ptr = %training_menu->player;
			player = player_ptr;
			//player.gold = player.gold + System::Convert::ToInt32(training_menu->Gold_returned);
			//	player.gold = params_of_work_UI->player->gold;
			health_label->Text = "Health: " + (System::Convert::ToString(player.health));
			gold_label->Text = "Gold: " + System::Convert::ToString(player.gold);
			agility_label->Text = "Agility: " + System::Convert::ToString(player.agility);
			strenght_label->Text = "Strenght: " + System::Convert::ToString(player.strenght);
			MyForm::Visible = true;
		}
	}
	private: System::Void shop_button_Click(System::Object^  sender, System::EventArgs^  e) {
		shop_UI^ shop_menu = gcnew shop_UI;
		shop_menu->player = player_ptr;

		MyForm::Visible = false;
		auto result = shop_menu->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			//iterator = 0;
			player_ptr = %shop_menu->player;
			player = player_ptr;
			iterator = player.miecz_vector->Count;
			//item1->Image = player.miecz_vector[0]->picture;
			for (int i = 0; i < 5; i++)
			{
				if (image_vector[i]->Image == testimage &&player.miecz_vector->Count != 0)
				{
					image_vector[i]->Image = player.miecz_vector[player.miecz_vector->Count - 1]->picture;
					player.miecz_vector->Remove(player.miecz_vector[player.miecz_vector->Count - 1]);
					if (i != 4)
						testimage = image_vector[i + 1]->Image;
				}
				else
				{
					if (i != 4)
						testimage = image_vector[i + 1]->Image;
				}


				//image_vector[i]->Image = player.miecz_queue->Dequeue
				//break;

			}
			testimage = sw_test->Image;
			iterator = player.armor_vector->Count;
			for (int i = 0; i < 5; i++)
			{
				if (armor_image_vector[i]->Image == armor_test_image &&player.armor_vector->Count != 0)
				{
					armor_image_vector[i]->Image = player.armor_vector[player.armor_vector->Count - 1]->picture;
					player.armor_vector->Remove(player.armor_vector[player.armor_vector->Count - 1]);
					if (i != 4)
						armor_test_image = armor_image_vector[i + 1]->Image;
				}
				else
				{
					if (i != 4)
						armor_test_image = armor_image_vector[i + 1]->Image;
				}

			}
			armor_test_image = arm_test->Image;
			for (int i = 0; i < 5; i++)
			{
				if (boots_image_vector[i]->Image == boots_test_image &&player.boots_vector->Count != 0)
				{
					boots_image_vector[i]->Image = player.boots_vector[player.boots_vector->Count - 1]->picture;
					player.boots_vector->Remove(player.boots_vector[player.boots_vector->Count - 1]);
					if (i != 4)
						boots_test_image = boots_image_vector[i + 1]->Image;
				}
				else
				{
					if (i != 4)
						boots_test_image = boots_image_vector[i + 1]->Image;
				}

			}
			boots_test_image = boots_test->Image;
			for (int i = 0; i < 5; i++)
			{
				if (consumables_image_vector[i]->Image == consumable_test_image &&player.consumables_vector->Count != 0)
				{
					consumables_image_vector[i]->Image = player.consumables_vector[player.consumables_vector->Count - 1]->picture;
					player.consumables_vector->Remove(player.consumables_vector[player.consumables_vector->Count - 1]);
					if (i != 4)
						consumable_test_image = consumables_image_vector[i + 1]->Image;
				}
				else
				{
					if (i != 4)
						consumable_test_image = consumables_image_vector[i + 1]->Image;
				}

			}
			consumable_test_image = consumable_test->Image;
			gold_label->Text = "Gold: " + System::Convert::ToString(player.gold);
			MyForm::Visible = true;
		}
	}

	private: System::Void sword_picture_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		e->Effect = DragDropEffects::Move;
		IsSwordActive = true;
	}
	private: System::Void sword_picture_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		sword_picture->Image = (System::Drawing::Image^)e->Data->GetData(DataFormats::Bitmap);

		/*for (int i = 0; i < player.miecz_vector->Count; i++)
		{
			if(player.miecz_vector[i]->picture.)
		}*/
	}
	private: System::Void item1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_sword(item1);


	}

	private: System::Void item2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_sword(item2);
	}

	private: System::Void item3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_sword(item3);
	}
	private: System::Void item4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_sword(item4);
	}
	private: System::Void item5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_sword(item5);
	}
	private: System::Void arm_item1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_armor(arm_item1);
	}
	private: System::Void arm_item2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_armor(arm_item2);

	}
	private: System::Void arm_item3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_armor(arm_item3);
	}
	private: System::Void arm_item4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_armor(arm_item4);
	}
	private: System::Void arm_item5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_armor(arm_item5);
	}
	private: System::Void armor_picture_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		e->Effect = DragDropEffects::Move;
	}
	private: System::Void armor_picture_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		armor_picture->Image = (System::Drawing::Image^)e->Data->GetData(DataFormats::Bitmap);
		IsArmorActive = true;
	}
	private: System::Void boots_item1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_boots(boots_item1);
	}
	private: System::Void boots_item2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_boots(boots_item2);
	}
	private: System::Void boots_item3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_boots(boots_item3);
	}
	private: System::Void boots_item4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_boots(boots_item4);
	}
	private: System::Void boots_item5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		activate_boots(boots_item5);
	}
	private: System::Void boots_picture_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		boots_picture->Image = (System::Drawing::Image^)e->Data->GetData(DataFormats::Bitmap);
	}
private: System::Void boots_picture_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Move;
	AreBootsActive = true;
}
private: System::Void consumable_item1_Click(System::Object^  sender, System::EventArgs^  e) {
	use_conumable_item(consumable_item1);
}
private: System::Void consumable_item2_Click(System::Object^  sender, System::EventArgs^  e) {
	use_conumable_item(consumable_item2);
}
private: System::Void consumable_item3_Click(System::Object^  sender, System::EventArgs^  e) {
	use_conumable_item(consumable_item3);
}
private: System::Void consumable_item4_Click(System::Object^  sender, System::EventArgs^  e) {
	use_conumable_item(consumable_item4);
}
private: System::Void consumable_item5_Click(System::Object^  sender, System::EventArgs^  e) {
	use_conumable_item(consumable_item5);
}
};
}