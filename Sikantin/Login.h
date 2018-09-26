#pragma once

#include "FDaftar.h"
#include "FMenu.h"
#include "stdafx.h"
#include "FUser.h"

namespace Sikantin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
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

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPass;

	private: System::Windows::Forms::TextBox^  txtLogin;




	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(149, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->txtPass);
			this->groupBox1->Controls->Add(this->txtLogin);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 55);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(346, 190);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Form Pendaftaran";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(320, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 21);
			this->button3->TabIndex = 17;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(124, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 28);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Admin Login";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(150, 151);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 13);
			this->linkLabel1->TabIndex = 15;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Daftar";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Belum mempunyai akun \? Klik ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(203, 80);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(128, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Perlihatkan Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(251, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 28);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(124, 54);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(207, 20);
			this->txtPass->TabIndex = 10;
			this->txtPass->UseSystemPasswordChar = true;
			this->txtPass->TextChanged += gcnew System::EventHandler(this, &Form1::txtPass_TextChanged);
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(124, 25);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(207, 20);
			this->txtLogin->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(104, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(104, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L":";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Username";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 256);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->Text = L"Login Sikantin";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 Form2^ f2 = gcnew Form2();
			 f2->ShowDialog();
			 
		 }

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
          // this->checkBox1					 
			 
			 //TEMPAT PASSWORD SHOW


		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			 MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			 MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * from sikantin.tbl_login WHERE username= '"+this->txtLogin->Text+"' and password= '"+this->txtPass->Text+"';",konDB);
			 MySqlDataReader^ readerDB;

			 try{

				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 int count = 0 ;
				 while(readerDB->Read()){
					 count = count + 1 ;
				 }
				 if(count==1){
					 MessageBox::Show("Username dan password cocok !");
					 this->Hide(); 
					 FUser^ fu = gcnew FUser();
					  fu->ShowDialog();
					  
					  
				 }
				 else if (count>1){
					 MessageBox::Show("Username dan password ganda .... Akses Ditolak !!!");
				 }
				 else
					 MessageBox::Show("Username dan password tidak cocok !");
				 
			 

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ADMIN DISINI
			 String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			 MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			 MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * from sikantin.tbl_admin WHERE username= '"+this->txtLogin->Text+"' and password= '"+this->txtPass->Text+"';",konDB);
			 MySqlDataReader^ readerDB;

			 try{

				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 int count = 0 ;
				 while(readerDB->Read()){
					 count = count + 1 ;
				 }
				 if(count==1){
					 MessageBox::Show("Username dan password admin cocok !");
					 this->Hide(); 
					 Form3^ fm = gcnew Form3();
					  fm->ShowDialog();
					  
					  
				 }
				 else if (count>1){
					 MessageBox::Show("Username dan password ganda .... Akses Ditolak !!!");
				 }
				 else
					 MessageBox::Show("Username dan password admin tidak cocok !");
				 
			 

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
		 }
private: System::Void txtPass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //BACKDOOR ADMIN
			 String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			 MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			 MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * from sikantin.tbl_kode WHERE username= '"+this->txtLogin->Text+"' and kode= '"+this->txtPass->Text+"';",konDB);
			 MySqlDataReader^ readerDB;

			 try{

				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 int count = 0 ;
				 while(readerDB->Read()){
					 count = count + 1 ;
				 }
				 if(count==1){
					 MessageBox::Show("Kode Unik Benar Silahkan Login ! !");
					 this->button2->Visible = true;
					 
					  
					  
				 }
				 else if (count>1){
					 MessageBox::Show("Username dan password tidak valid !!!");
				 }
				 else
					 MessageBox::Show("Username Atau Kode Unik Salah !");
				 
			 

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
		 }

		 //END
};
}
