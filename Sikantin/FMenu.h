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
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::TextBox^  Txt_rasa;

	private: System::Windows::Forms::TextBox^  Txt_jenis;

	private: System::Windows::Forms::TextBox^  Txt_harga;

	private: System::Windows::Forms::TextBox^  Txt_nama;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel3;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Txt_rasa = (gcnew System::Windows::Forms::TextBox());
			this->Txt_jenis = (gcnew System::Windows::Forms::TextBox());
			this->Txt_harga = (gcnew System::Windows::Forms::TextBox());
			this->Txt_nama = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(833, 476);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->Txt_rasa);
			this->groupBox1->Controls->Add(this->Txt_jenis);
			this->groupBox1->Controls->Add(this->Txt_harga);
			this->groupBox1->Controls->Add(this->Txt_nama);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Location = System::Drawing::Point(21, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(792, 335);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Form Input";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form3::groupBox1_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(469, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(317, 185);
			this->dataGridView1->TabIndex = 23;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Aquamarine;
			this->button6->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(592, 220);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 30);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Refresh";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(208, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Cyan;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(208, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(3, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(3, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Txt_rasa
			// 
			this->Txt_rasa->Location = System::Drawing::Point(111, 146);
			this->Txt_rasa->Name = L"Txt_rasa";
			this->Txt_rasa->Size = System::Drawing::Size(288, 20);
			this->Txt_rasa->TabIndex = 15;
			// 
			// Txt_jenis
			// 
			this->Txt_jenis->Location = System::Drawing::Point(111, 109);
			this->Txt_jenis->Name = L"Txt_jenis";
			this->Txt_jenis->Size = System::Drawing::Size(288, 20);
			this->Txt_jenis->TabIndex = 14;
			// 
			// Txt_harga
			// 
			this->Txt_harga->Location = System::Drawing::Point(111, 69);
			this->Txt_harga->Name = L"Txt_harga";
			this->Txt_harga->Size = System::Drawing::Size(288, 20);
			this->Txt_harga->TabIndex = 13;
			this->Txt_harga->TextChanged += gcnew System::EventHandler(this, &Form3::Txt_harga_TextChanged);
			// 
			// Txt_nama
			// 
			this->Txt_nama->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) {L"Molen", L"Banana"});
			this->Txt_nama->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->Txt_nama->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->Txt_nama->Location = System::Drawing::Point(111, 29);
			this->Txt_nama->Name = L"Txt_nama";
			this->Txt_nama->Size = System::Drawing::Size(288, 20);
			this->Txt_nama->TabIndex = 12;
			this->Txt_nama->TextChanged += gcnew System::EventHandler(this, &Form3::Txt_nama_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(95, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(95, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(95, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L":";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(95, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Rasa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Jenis";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Harga ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nama";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(22, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(792, 80);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form3::panel2_Paint);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(316, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input Menu";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(111, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(288, 90);
			this->panel3->TabIndex = 24;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 476);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->IsMdiContainer = true;
			this->Name = L"Form3";
			this->Text = L"Form Input Menu";
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			//INSERT SCRIPT	 
			 INSERT();
			 }
		 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Txt_nama->Text = L"" ;
			 this->Txt_harga->Text = L"";
			 this->Txt_jenis->Text = L"";
			 this->Txt_rasa->Text = L"";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 //DATAGRID SCRIPT DISINI
				
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
			void INSERT(){
				
			String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			MySqlCommand^ cmdDB= gcnew MySqlCommand("INSERT into sikantin.tbl_menu(nama,harga,jenis,rasa) VALUES ('"+this->Txt_nama->Text+"','"+this->Txt_harga->Text+"','"+this->Txt_jenis->Text+"','"+this->Txt_rasa->Text+"');",konDB);
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
			void DELETE() {
				String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			MySqlCommand^ cmdDB= gcnew MySqlCommand("DELETE from sikantin.tbl_menu WHERE nama = '"+this->Txt_nama->Text+"';",konDB);
			MySqlDataReader^ readerDB;

			try{

				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 MessageBox::Show("Data Telah Dihapus !") ;	
				 

				 while(readerDB->Read()){
			
			 }
				 
			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
			
			}
			private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
						 DELETE();
					 }

//TERAKHIR
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 UPDATE();
			 //UPDATE DISINI
		 }

		 void UPDATE() {
		 //SCRIPT UPDATE 

			String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			MySqlCommand^ cmdDB= gcnew MySqlCommand ("UPDATE sikantin.tbl_menu SET nama = '"+this->Txt_nama->Text+"',harga='"+this->Txt_harga->Text+"',jenis='"+this->Txt_jenis->Text+"',rasa='"+this->Txt_rasa->Text+"' WHERE nama='"+this->Txt_nama->Text+"';",konDB);
			MySqlDataReader^ readerDB;
			
			try{
				 
				 konDB->Open();
				 readerDB = cmdDB->ExecuteReader();
				 MessageBox::Show("Data Telah Di Update !") ;	
				 
				while(readerDB->Read()){
			
			 }
				 
			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);

			 }
			
			}
		 
private: System::Void Txt_nama_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //AutoComplete Disini
		// String^ koneksi=L"datasource=localhost;port=3306;username=root;password=;" ;
			// MySqlConnection^ konDB= gcnew MySqlConnection(koneksi);
			 //MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * from sikantin.tbl_menu WHERE nama ='"+this->Txt_nama->Text+"' and '"+this->Txt_harga->Text+"'= harga , '"+this->Txt_jenis->Text+"'= jenis,'"+this->Txt_rasa->Text+"'= rasa;",konDB);
			 //MySqlDataReader^ readerDB;

			// try{

				 //konDB->Open();
				 //readerDB = cmdDB->ExecuteReader();
				 //int count = 0 ;
				 //while(readerDB->Read()){
					// count = count + 1 ;
				// }
				 //if(count==1){
					// MessageBox::Show("Username dan password cocok !");
					 //this->Hide(); 
					 //Form3^ f3 = gcnew Form3();
					  //f3->ShowDialog();
					  
					  
				 //}
				// else if (count>1){
					// MessageBox::Show("Username dan password ganda .... Akses Ditolak !!!");
				// }
				 //else
			//		 MessageBox::Show("Username dan password tidak cocok !");
				 
			 

			 //}catch(Exception^ex){

//				 MessageBox::Show(ex->Message);

			 //}
		 }
private: System::Void Txt_harga_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}
