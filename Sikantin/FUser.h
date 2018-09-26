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
	/// Summary for FUser
	/// </summary>
	public ref class FUser : public System::Windows::Forms::Form
	{
	public:
		FUser(void)
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
		~FUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	protected: 

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 94);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(801, 335);
			this->dataGridView1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LawnGreen;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(833, 476);
			this->panel1->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkOrange;
			this->button6->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(719, 435);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 30);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Lihat Menu";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FUser::button6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Yellow;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(17, 15);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(801, 73);
			this->panel2->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(257, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu Makanan SiKantin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(17, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 30);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FUser::button1_Click);
			// 
			// FUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 476);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->IsMdiContainer = true;
			this->Name = L"FUser";
			this->Text = L"FUser";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 REFRESH();

			 }

				 void REFRESH(){
			String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			MySqlCommand^ cmdDB= gcnew MySqlCommand("SELECT * from sikantin.tbl_menu ;",konDB);
			

			try{

				 MySqlDataAdapter^ SA= gcnew MySqlDataAdapter();
				 SA->SelectCommand = cmdDB ;
				 DataTable^ DBdataset = gcnew DataTable();
				 SA->Fill(DBdataset);
				 BindingSource^ BSource = gcnew BindingSource();
				 
				 BSource->DataSource = DBdataset;
				 dataGridView1->DataSource = BSource ;
				 SA->Update(DBdataset);

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
		
				 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 Application::Exit();
			 }
};
}
