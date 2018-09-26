#pragma once

#include "stdafx.h"

namespace Sikantin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::TextBox^  txtPassNew;


	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::Label^  txtNotif;





	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtPassNew = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtNotif = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(370, 256);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(12, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(345, 45);
			this->panel2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pendaftaran";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->txtPass);
			this->groupBox1->Controls->Add(this->txtPassNew);
			this->groupBox1->Controls->Add(this->txtUser);
			this->groupBox1->Controls->Add(this->txtNotif);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(346, 190);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Form Pendaftaran";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Cyan;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(157, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 25);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(265, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Daftar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(124, 79);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(216, 20);
			this->txtPass->TabIndex = 10;
			this->txtPass->TextChanged += gcnew System::EventHandler(this, &Form2::txtPass_TextChanged);
			// 
			// txtPassNew
			// 
			this->txtPassNew->Location = System::Drawing::Point(124, 53);
			this->txtPassNew->Name = L"txtPassNew";
			this->txtPassNew->Size = System::Drawing::Size(216, 20);
			this->txtPassNew->TabIndex = 9;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(124, 24);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(216, 20);
			this->txtUser->TabIndex = 8;
			// 
			// txtNotif
			// 
			this->txtNotif->ForeColor = System::Drawing::Color::Black;
			this->txtNotif->Location = System::Drawing::Point(124, 102);
			this->txtNotif->Name = L"txtNotif";
			this->txtNotif->Size = System::Drawing::Size(216, 17);
			this->txtNotif->TabIndex = 7;
			this->txtNotif->Text = L"Pemberitahuan";
			this->txtNotif->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(104, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(104, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(104, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L":";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ulangi Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Username";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 256);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->Name = L"Form2";
			this->Text = L"Pendaftaran Anggota";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			 MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			 MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT into sikantin.tbl_login(username,password) VALUES ('"+this->txtUser->Text+"','"+this->txtPass->Text+"');",konDB);
			 MySqlDataReader^ readerDB;

			 try{

				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 MessageBox::Show("Data Telah Disimpan !") ;	

				 while(readerDB->Read()){
					 
				 }
				 
			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
				 
			 }

private: System::Void txtPass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(txtPassNew->Text == txtPass->Text){
				this->txtNotif->Visible = true ;
				this->txtNotif->Text = L"Password cocok !";
				this->txtNotif->ForeColor = System::Drawing::Color::Green;

			 }else if (txtPassNew->Text != txtPass->Text){
				this->txtNotif->Visible = true ;
				this->txtNotif->Text = L"Password tidak cocok !!!";
				this->txtNotif->ForeColor = System::Drawing::Color::Red;
			 }


		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				this->txtUser->Text = L"";
				this->txtPassNew->Text = L"";
				this->txtPass->Text =L"";
		 }
};
}
