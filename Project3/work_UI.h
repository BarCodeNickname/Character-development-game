#pragma once
#include "Work_params.h"
#include "Character.h"
#define NO_OF_JOBS 3
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
	private: System::Windows::Forms::PictureBox^  baker_pic;
	private: System::Windows::Forms::PictureBox^  farmer_pic;
	private: System::Windows::Forms::PictureBox^  alchemist_pic;
	protected:

	protected:


	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  baker_label;
	private: System::Windows::Forms::Label^  farmer_label;
	private: System::Windows::Forms::Label^  alchemist_label;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int time;
		//System::Int32 gold;
	private: System::Windows::Forms::Label^  timer_label;
	private: System::Windows::Forms::Button^  done_button;
	private: System::Windows::Forms::PictureBox^  work_gif;
			 array<Work_params^>^job = gcnew array<Work_params^>(NO_OF_JOBS);
			 void hide_pictures();
			 int i;
	public:	 Character player;
#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(work_UI::typeid));
				 this->baker_pic = (gcnew System::Windows::Forms::PictureBox());
				 this->farmer_pic = (gcnew System::Windows::Forms::PictureBox());
				 this->alchemist_pic = (gcnew System::Windows::Forms::PictureBox());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->baker_label = (gcnew System::Windows::Forms::Label());
				 this->farmer_label = (gcnew System::Windows::Forms::Label());
				 this->alchemist_label = (gcnew System::Windows::Forms::Label());
				 this->timer_label = (gcnew System::Windows::Forms::Label());
				 this->done_button = (gcnew System::Windows::Forms::Button());
				 this->work_gif = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->baker_pic))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->farmer_pic))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alchemist_pic))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->work_gif))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // baker_pic
				 // 
				 this->baker_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"baker_pic.Image")));
				 this->baker_pic->Location = System::Drawing::Point(122, 116);
				 this->baker_pic->Name = L"baker_pic";
				 this->baker_pic->Size = System::Drawing::Size(150, 154);
				 this->baker_pic->TabIndex = 0;
				 this->baker_pic->TabStop = false;
				 this->baker_pic->Click += gcnew System::EventHandler(this, &work_UI::pictureBox1_Click);
				 // 
				 // farmer_pic
				 // 
				 this->farmer_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"farmer_pic.Image")));
				 this->farmer_pic->Location = System::Drawing::Point(404, 116);
				 this->farmer_pic->Name = L"farmer_pic";
				 this->farmer_pic->Size = System::Drawing::Size(150, 154);
				 this->farmer_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->farmer_pic->TabIndex = 1;
				 this->farmer_pic->TabStop = false;
				 this->farmer_pic->Click += gcnew System::EventHandler(this, &work_UI::pictureBox2_Click);
				 // 
				 // alchemist_pic
				 // 
				 this->alchemist_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alchemist_pic.Image")));
				 this->alchemist_pic->Location = System::Drawing::Point(677, 116);
				 this->alchemist_pic->Name = L"alchemist_pic";
				 this->alchemist_pic->Size = System::Drawing::Size(150, 154);
				 this->alchemist_pic->TabIndex = 2;
				 this->alchemist_pic->TabStop = false;
				 this->alchemist_pic->Click += gcnew System::EventHandler(this, &work_UI::pictureBox3_Click);
				 // 
				 // timer1
				 // 
				 this->timer1->Interval = 1000;
				 this->timer1->Tick += gcnew System::EventHandler(this, &work_UI::timer1_Tick);
				 // 
				 // baker_label
				 // 
				 this->baker_label->AutoSize = true;
				 this->baker_label->Location = System::Drawing::Point(189, 277);
				 this->baker_label->Name = L"baker_label";
				 this->baker_label->Size = System::Drawing::Size(35, 13);
				 this->baker_label->TabIndex = 3;
				 this->baker_label->Text = L"Baker";
				 // 
				 // farmer_label
				 // 
				 this->farmer_label->AutoSize = true;
				 this->farmer_label->Location = System::Drawing::Point(458, 277);
				 this->farmer_label->Name = L"farmer_label";
				 this->farmer_label->Size = System::Drawing::Size(39, 13);
				 this->farmer_label->TabIndex = 4;
				 this->farmer_label->Text = L"Farmer";
				 // 
				 // alchemist_label
				 // 
				 this->alchemist_label->AutoSize = true;
				 this->alchemist_label->Location = System::Drawing::Point(735, 277);
				 this->alchemist_label->Name = L"alchemist_label";
				 this->alchemist_label->Size = System::Drawing::Size(52, 13);
				 this->alchemist_label->TabIndex = 5;
				 this->alchemist_label->Text = L"Alchemist";
				 // 
				 // timer_label
				 // 
				 this->timer_label->AutoSize = true;
				 this->timer_label->Location = System::Drawing::Point(461, 381);
				 this->timer_label->Name = L"timer_label";
				 this->timer_label->Size = System::Drawing::Size(53, 13);
				 this->timer_label->TabIndex = 6;
				 this->timer_label->Text = L"Time left: ";
				 // 
				 // done_button
				 // 
				 this->done_button->Location = System::Drawing::Point(439, 181);
				 this->done_button->Name = L"done_button";
				 this->done_button->Size = System::Drawing::Size(75, 23);
				 this->done_button->TabIndex = 7;
				 this->done_button->Text = L"OK";
				 this->done_button->UseVisualStyleBackColor = true;
				 this->done_button->Visible = false;
				 this->done_button->Click += gcnew System::EventHandler(this, &work_UI::done_button_Click);
				 // 
				 // work_gif
				 // 
				 this->work_gif->Location = System::Drawing::Point(341, 94);
				 this->work_gif->Name = L"work_gif";
				 this->work_gif->Size = System::Drawing::Size(292, 284);
				 this->work_gif->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->work_gif->TabIndex = 8;
				 this->work_gif->TabStop = false;
				 this->work_gif->Visible = false;
				 // 
				 // work_UI
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(950, 510);
				 this->Controls->Add(this->work_gif);
				 this->Controls->Add(this->done_button);
				 this->Controls->Add(this->timer_label);
				 this->Controls->Add(this->alchemist_label);
				 this->Controls->Add(this->farmer_label);
				 this->Controls->Add(this->baker_label);
				 this->Controls->Add(this->alchemist_pic);
				 this->Controls->Add(this->farmer_pic);
				 this->Controls->Add(this->baker_pic);
				 this->Name = L"work_UI";
				 this->Text = L"work_UI";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->baker_pic))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->farmer_pic))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alchemist_pic))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->work_gif))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	//public: property System::Int32^ Gold_returned
	//{
	//	System::Int32^ get()
	//	{
	//		return gold;
	//	}
	//}
			//public: property Int32^ ReturnValue1{ Int32^ get();void set(Int32^ x); }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 0;
		job[i] = gcnew Work_params;
		job[i]->set_params("Baker", 100, 5, Image::FromFile("baker.gif"));

		hide_pictures();

		timer1->Enabled = true;
		work_gif->Image = job[i]->gif;
		work_gif->Visible = true;

		player.gold = player.gold + job[i]->income;
	
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 1;
		job[i] = gcnew Work_params;
		job[i]->set_params("Rice", 150,15, Image::FromFile("farmer.gif"));
		hide_pictures();
		timer1->Enabled = true;
		work_gif->Image = job[i]->gif;
		work_gif->Visible = true;
		player.gold = player.gold + job[i]->income;

	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		i = 2;
		job[i] = gcnew Work_params;
		job[i]->set_params("Alchemist", 150, 30, Image::FromFile("alchemy.gif"));
		hide_pictures();
		timer1->Enabled = true;
		work_gif->Image = job[i]->gif;
		work_gif->Visible = true;
		player.gold = player.gold + job[i]->income;

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		timer_label->Text = "Time left: " + System::Convert::ToString(job[i]->time);
	
		job[i]->time--;

		if (job[i]->time == -1)
		{
			work_gif->Visible = false;
			timer1->Enabled = false;
			done_button->Visible = true;


		}
	}
	private: System::Void done_button_Click(System::Object^  sender, System::EventArgs^  e) {


		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
};
}
