#pragma once
#include<algorithm>
#include"ClientDetails.h"
#include"countRows.h"
#include"path.h"
#include"SerialNo.h"
#include"GlobalID.h"


namespace My57F4 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Diagnostics;
	/// <summary>
	/// Summary for StockTransferAdd
	/// </summary>
	public ref class StockTransferAdd : public System::Windows::Forms::Form
	{
	public:
		StockTransferAdd(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
//		static bool flag = false;
		  public:void SetFlag(bool flag)
		   {
			   	RECEIVED1->Enabled = flag;
		   }
				 static int value = 1;
				 static bool flag=true;
				 static int Del = 0;
				 static int Srno;
		public:	Process^ myProcess;
	public:Process^ myProcess2;
				String^ date;
				static int no;
	public: static ArrayList^ VchValues=gcnew ArrayList;
	public:static ArrayList^ DelList = gcnew ArrayList;
			
	
	private: System::Windows::Forms::Button^  PDetails;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Button^  RECEIVED;
	private: System::Windows::Forms::CheckBox^  RECEIVED1;
	private: System::Windows::Forms::CheckBox^  RECEIVED2;
			 			 			 			 
private: System::Windows::Forms::CheckBox^  RECEIVED3;
private: System::Windows::Forms::CheckBox^  RECEIVED5;
private: System::Windows::Forms::CheckBox^  RECEIVED4;
private: System::Windows::Forms::CheckBox^  RECEIVED6;
private: System::Windows::Forms::CheckBox^  RECEIVED10;
private: System::Windows::Forms::CheckBox^  RECEIVED9;
private: System::Windows::Forms::CheckBox^  RECEIVED8;
private: System::Windows::Forms::CheckBox^  RECEIVED7;
private: System::Windows::Forms::Button^  MODIFY;
private: System::Windows::Forms::CheckBox^  UPDATE1;
private: System::Windows::Forms::CheckBox^  UPDATE2;
private: System::Windows::Forms::CheckBox^  UPDATE7;
private: System::Windows::Forms::CheckBox^  UPDATE6;
private: System::Windows::Forms::CheckBox^  UPDATE5;
private: System::Windows::Forms::CheckBox^  UPDATE4;
private: System::Windows::Forms::CheckBox^  UPDATE3;
private: System::Windows::Forms::CheckBox^  UPDATE;
private: System::Windows::Forms::CheckBox^  UPDATE9;
private: System::Windows::Forms::CheckBox^  UPDATE8;
	private: System::Windows::Forms::CheckBox^  UPDATE_NAME;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  textBox78;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  Unit;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::Label^  Process;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox9;

private: System::Windows::Forms::Button^  VIEW;
private: System::Windows::Forms::ComboBox^  ADD;
private: System::Windows::Forms::Button^  ADD_Btn;
private: System::Windows::Forms::ErrorProvider^  errorProvider2;
private: System::Windows::Forms::Label^  NoRecrdToAdd;
private: System::Windows::Forms::Button^  DELETE_btn;
private: System::Windows::Forms::ComboBox^  DELETE_cmb;
private: System::Windows::Forms::ErrorProvider^  errorProvider3;


			 static int i=0;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StockTransferAdd()
		{
			if (components)
			{
				delete components;
			}
		}
		static	ArrayList ^ SrnoValues=gcnew ArrayList();
		static	ArrayList ^ Addrss=gcnew ArrayList();
		  int j;
		  		  		  
	private: System::Windows::Forms::Label^  Series;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Date;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

	private: System::Windows::Forms::Label^  VchNo;
	private: System::Windows::Forms::Label^  From;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  To;

	private: System::Windows::Forms::TextBox^  textBox1;
			 
			 
private: System::Windows::Forms::Button^  Save;
private: System::Windows::Forms::Button^  Quit;

private: System::Windows::Forms::Label^  Name_of_Form;

private: System::Windows::Forms::Button^  New;




private: System::Windows::Forms::ComboBox^  comboBox1;



		 
private: System::ComponentModel::IContainer^  components;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StockTransferAdd::typeid));
			this->Series = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->VchNo = (gcnew System::Windows::Forms::Label());
			this->From = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->To = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->Name_of_Form = (gcnew System::Windows::Forms::Label());
			this->New = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->PDetails = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->RECEIVED = (gcnew System::Windows::Forms::Button());
			this->RECEIVED1 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED2 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED3 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED4 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED5 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED6 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED7 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED8 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED9 = (gcnew System::Windows::Forms::CheckBox());
			this->RECEIVED10 = (gcnew System::Windows::Forms::CheckBox());
			this->MODIFY = (gcnew System::Windows::Forms::Button());
			this->UPDATE1 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE2 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE3 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE4 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE5 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE6 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE7 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE8 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE9 = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE = (gcnew System::Windows::Forms::CheckBox());
			this->UPDATE_NAME = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->Process = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Unit = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->VIEW = (gcnew System::Windows::Forms::Button());
			this->ADD = (gcnew System::Windows::Forms::ComboBox());
			this->ADD_Btn = (gcnew System::Windows::Forms::Button());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->NoRecrdToAdd = (gcnew System::Windows::Forms::Label());
			this->DELETE_btn = (gcnew System::Windows::Forms::Button());
			this->DELETE_cmb = (gcnew System::Windows::Forms::ComboBox());
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			this->SuspendLayout();
			// 
			// Series
			// 
			this->Series->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Series->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->Series->Location = System::Drawing::Point(177, 61);
			this->Series->Name = L"Series";
			this->Series->Size = System::Drawing::Size(100, 23);
			this->Series->TabIndex = 7;
			this->Series->Text = L"Series";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkBlue;
			this->label1->Location = System::Drawing::Point(252, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"OUTGOING";
			// 
			// Date
			// 
			this->Date->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->Date->Location = System::Drawing::Point(392, 61);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(100, 23);
			this->Date->TabIndex = 9;
			this->Date->Text = L"Date:";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::Black;
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::Color::LemonChiffon;
			this->dateTimePicker2->CustomFormat = L"dd-MM-yyyy, hh:mm:ss tt";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(443, 61);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(147, 20);
			this->dateTimePicker2->TabIndex = 17;
			this->dateTimePicker2->Value = System::DateTime(2017, 3, 21, 0, 0, 0, 0);
			// 
			// VchNo
			// 
			this->VchNo->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VchNo->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->VchNo->Location = System::Drawing::Point(671, 61);
			this->VchNo->Name = L"VchNo";
			this->VchNo->Size = System::Drawing::Size(100, 23);
			this->VchNo->TabIndex = 18;
			this->VchNo->Text = L"Vch No.";
			// 
			// From
			// 
			this->From->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->From->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->From->Location = System::Drawing::Point(177, 109);
			this->From->Name = L"From";
			this->From->Size = System::Drawing::Size(100, 23);
			this->From->TabIndex = 19;
			this->From->Text = L"From:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkBlue;
			this->label8->Location = System::Drawing::Point(252, 109);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 23);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ELITE ENGINEER";
			// 
			// To
			// 
			this->To->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->To->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->To->Location = System::Drawing::Point(524, 109);
			this->To->Name = L"To";
			this->To->Size = System::Drawing::Size(100, 23);
			this->To->TabIndex = 21;
			this->To->Text = L"To:";
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->textBox1->Location = System::Drawing::Point(741, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 23;
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Save->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save->Location = System::Drawing::Point(551, 575);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(89, 46);
			this->Save->TabIndex = 27;
			this->Save->Text = L"SAVE";
			this->Save->UseVisualStyleBackColor = false;
			this->Save->Click += gcnew System::EventHandler(this, &StockTransferAdd::Save_Click);
			// 
			// Quit
			// 
			this->Quit->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Quit->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quit->Location = System::Drawing::Point(646, 575);
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(89, 46);
			this->Quit->TabIndex = 28;
			this->Quit->Text = L"QUIT";
			this->Quit->UseVisualStyleBackColor = false;
			this->Quit->Click += gcnew System::EventHandler(this, &StockTransferAdd::Quit_Click);
			// 
			// Name_of_Form
			// 
			this->Name_of_Form->Font = (gcnew System::Drawing::Font(L"Arial", 9, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Name_of_Form->ForeColor = System::Drawing::Color::Yellow;
			this->Name_of_Form->Location = System::Drawing::Point(562, 12);
			this->Name_of_Form->Name = L"Name_of_Form";
			this->Name_of_Form->Size = System::Drawing::Size(184, 23);
			this->Name_of_Form->TabIndex = 30;
			this->Name_of_Form->Text = L"Add Stock Transfer Voucher";
			// 
			// New
			// 
			this->New->BackColor = System::Drawing::SystemColors::ControlLight;
			this->New->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->New->Location = System::Drawing::Point(456, 575);
			this->New->Name = L"New";
			this->New->Size = System::Drawing::Size(89, 46);
			this->New->TabIndex = 32;
			this->New->Text = L"REPORT";
			this->New->UseVisualStyleBackColor = false;
			this->New->Click += gcnew System::EventHandler(this, &StockTransferAdd::New_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(551, 108);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(230, 21);
			this->comboBox1->TabIndex = 33;
			this->comboBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::comboBox1_Validating);
			// 
			// PDetails
			// 
			this->PDetails->BackColor = System::Drawing::SystemColors::ControlLight;
			this->PDetails->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PDetails->Location = System::Drawing::Point(853, 108);
			this->PDetails->Name = L"PDetails";
			this->PDetails->Size = System::Drawing::Size(102, 51);
			this->PDetails->TabIndex = 29;
			this->PDetails->Text = L"NEW CLIENT DETAILS";
			this->PDetails->UseVisualStyleBackColor = false;
			this->PDetails->Click += gcnew System::EventHandler(this, &StockTransferAdd::PDetails_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// RECEIVED
			// 
			this->RECEIVED->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RECEIVED->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RECEIVED->Location = System::Drawing::Point(836, 575);
			this->RECEIVED->Name = L"RECEIVED";
			this->RECEIVED->Size = System::Drawing::Size(89, 46);
			this->RECEIVED->TabIndex = 34;
			this->RECEIVED->Text = L"RECEIVED";
			this->RECEIVED->UseVisualStyleBackColor = false;
			this->RECEIVED->Click += gcnew System::EventHandler(this, &StockTransferAdd::RECEIVED_Click);
			// 
			// RECEIVED1
			// 
			this->RECEIVED1->AutoSize = true;
			this->RECEIVED1->ForeColor = System::Drawing::Color::White;
			this->RECEIVED1->Location = System::Drawing::Point(1180, 240);
			this->RECEIVED1->Name = L"RECEIVED1";
			this->RECEIVED1->Size = System::Drawing::Size(80, 17);
			this->RECEIVED1->TabIndex = 35;
			this->RECEIVED1->Text = L"RECEIVED";
			this->RECEIVED1->UseVisualStyleBackColor = true;
			this->RECEIVED1->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::RECEIVED1_CheckedChanged);
			// 
			// RECEIVED2
			// 
			this->RECEIVED2->AutoSize = true;
			this->RECEIVED2->ForeColor = System::Drawing::Color::White;
			this->RECEIVED2->Location = System::Drawing::Point(1180, 265);
			this->RECEIVED2->Name = L"RECEIVED2";
			this->RECEIVED2->Size = System::Drawing::Size(80, 17);
			this->RECEIVED2->TabIndex = 36;
			this->RECEIVED2->Text = L"RECEIVED";
			this->RECEIVED2->UseVisualStyleBackColor = true;
			// 
			// RECEIVED3
			// 
			this->RECEIVED3->AutoSize = true;
			this->RECEIVED3->ForeColor = System::Drawing::Color::White;
			this->RECEIVED3->Location = System::Drawing::Point(1180, 288);
			this->RECEIVED3->Name = L"RECEIVED3";
			this->RECEIVED3->Size = System::Drawing::Size(80, 17);
			this->RECEIVED3->TabIndex = 37;
			this->RECEIVED3->Text = L"RECEIVED";
			this->RECEIVED3->UseVisualStyleBackColor = true;
			// 
			// RECEIVED4
			// 
			this->RECEIVED4->AutoSize = true;
			this->RECEIVED4->ForeColor = System::Drawing::Color::White;
			this->RECEIVED4->Location = System::Drawing::Point(1180, 310);
			this->RECEIVED4->Name = L"RECEIVED4";
			this->RECEIVED4->Size = System::Drawing::Size(80, 17);
			this->RECEIVED4->TabIndex = 38;
			this->RECEIVED4->Text = L"RECEIVED";
			this->RECEIVED4->UseVisualStyleBackColor = true;
			// 
			// RECEIVED5
			// 
			this->RECEIVED5->AutoSize = true;
			this->RECEIVED5->ForeColor = System::Drawing::Color::White;
			this->RECEIVED5->Location = System::Drawing::Point(1180, 336);
			this->RECEIVED5->Name = L"RECEIVED5";
			this->RECEIVED5->Size = System::Drawing::Size(80, 17);
			this->RECEIVED5->TabIndex = 39;
			this->RECEIVED5->Text = L"RECEIVED";
			this->RECEIVED5->UseVisualStyleBackColor = true;
			// 
			// RECEIVED6
			// 
			this->RECEIVED6->AutoSize = true;
			this->RECEIVED6->ForeColor = System::Drawing::Color::White;
			this->RECEIVED6->Location = System::Drawing::Point(1180, 359);
			this->RECEIVED6->Name = L"RECEIVED6";
			this->RECEIVED6->Size = System::Drawing::Size(80, 17);
			this->RECEIVED6->TabIndex = 40;
			this->RECEIVED6->Text = L"RECEIVED";
			this->RECEIVED6->UseVisualStyleBackColor = true;
			// 
			// RECEIVED7
			// 
			this->RECEIVED7->AutoSize = true;
			this->RECEIVED7->ForeColor = System::Drawing::Color::White;
			this->RECEIVED7->Location = System::Drawing::Point(1180, 384);
			this->RECEIVED7->Name = L"RECEIVED7";
			this->RECEIVED7->Size = System::Drawing::Size(80, 17);
			this->RECEIVED7->TabIndex = 41;
			this->RECEIVED7->Text = L"RECEIVED";
			this->RECEIVED7->UseVisualStyleBackColor = true;
			// 
			// RECEIVED8
			// 
			this->RECEIVED8->AutoSize = true;
			this->RECEIVED8->ForeColor = System::Drawing::Color::White;
			this->RECEIVED8->Location = System::Drawing::Point(1180, 407);
			this->RECEIVED8->Name = L"RECEIVED8";
			this->RECEIVED8->Size = System::Drawing::Size(80, 17);
			this->RECEIVED8->TabIndex = 42;
			this->RECEIVED8->Text = L"RECEIVED";
			this->RECEIVED8->UseVisualStyleBackColor = true;
			// 
			// RECEIVED9
			// 
			this->RECEIVED9->AutoSize = true;
			this->RECEIVED9->ForeColor = System::Drawing::Color::White;
			this->RECEIVED9->Location = System::Drawing::Point(1180, 430);
			this->RECEIVED9->Name = L"RECEIVED9";
			this->RECEIVED9->Size = System::Drawing::Size(80, 17);
			this->RECEIVED9->TabIndex = 43;
			this->RECEIVED9->Text = L"RECEIVED";
			this->RECEIVED9->UseVisualStyleBackColor = true;
			// 
			// RECEIVED10
			// 
			this->RECEIVED10->AutoSize = true;
			this->RECEIVED10->ForeColor = System::Drawing::Color::White;
			this->RECEIVED10->Location = System::Drawing::Point(1180, 453);
			this->RECEIVED10->Name = L"RECEIVED10";
			this->RECEIVED10->Size = System::Drawing::Size(80, 17);
			this->RECEIVED10->TabIndex = 44;
			this->RECEIVED10->Text = L"RECEIVED";
			this->RECEIVED10->UseVisualStyleBackColor = true;
			// 
			// MODIFY
			// 
			this->MODIFY->BackColor = System::Drawing::SystemColors::ControlLight;
			this->MODIFY->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MODIFY->Location = System::Drawing::Point(741, 575);
			this->MODIFY->Name = L"MODIFY";
			this->MODIFY->Size = System::Drawing::Size(89, 46);
			this->MODIFY->TabIndex = 45;
			this->MODIFY->Text = L"MODIFY";
			this->MODIFY->UseVisualStyleBackColor = false;
			this->MODIFY->Click += gcnew System::EventHandler(this, &StockTransferAdd::MODIFY_Click);
			// 
			// UPDATE1
			// 
			this->UPDATE1->AutoSize = true;
			this->UPDATE1->ForeColor = System::Drawing::Color::White;
			this->UPDATE1->Location = System::Drawing::Point(1278, 240);
			this->UPDATE1->Name = L"UPDATE1";
			this->UPDATE1->Size = System::Drawing::Size(70, 17);
			this->UPDATE1->TabIndex = 46;
			this->UPDATE1->Text = L"UPDATE";
			this->UPDATE1->UseVisualStyleBackColor = true;
			this->UPDATE1->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE1_CheckedChanged);
			// 
			// UPDATE2
			// 
			this->UPDATE2->AutoSize = true;
			this->UPDATE2->ForeColor = System::Drawing::Color::White;
			this->UPDATE2->Location = System::Drawing::Point(1278, 263);
			this->UPDATE2->Name = L"UPDATE2";
			this->UPDATE2->Size = System::Drawing::Size(70, 17);
			this->UPDATE2->TabIndex = 47;
			this->UPDATE2->Text = L"UPDATE";
			this->UPDATE2->UseVisualStyleBackColor = true;
			this->UPDATE2->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE2_CheckedChanged);
			// 
			// UPDATE3
			// 
			this->UPDATE3->AutoSize = true;
			this->UPDATE3->ForeColor = System::Drawing::Color::White;
			this->UPDATE3->Location = System::Drawing::Point(1278, 286);
			this->UPDATE3->Name = L"UPDATE3";
			this->UPDATE3->Size = System::Drawing::Size(70, 17);
			this->UPDATE3->TabIndex = 48;
			this->UPDATE3->Text = L"UPDATE";
			this->UPDATE3->UseVisualStyleBackColor = true;
			this->UPDATE3->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE3_CheckedChanged);
			// 
			// UPDATE4
			// 
			this->UPDATE4->AutoSize = true;
			this->UPDATE4->ForeColor = System::Drawing::Color::White;
			this->UPDATE4->Location = System::Drawing::Point(1278, 309);
			this->UPDATE4->Name = L"UPDATE4";
			this->UPDATE4->Size = System::Drawing::Size(70, 17);
			this->UPDATE4->TabIndex = 49;
			this->UPDATE4->Text = L"UPDATE";
			this->UPDATE4->UseVisualStyleBackColor = true;
			this->UPDATE4->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE4_CheckedChanged);
			// 
			// UPDATE5
			// 
			this->UPDATE5->AutoSize = true;
			this->UPDATE5->ForeColor = System::Drawing::Color::White;
			this->UPDATE5->Location = System::Drawing::Point(1278, 334);
			this->UPDATE5->Name = L"UPDATE5";
			this->UPDATE5->Size = System::Drawing::Size(70, 17);
			this->UPDATE5->TabIndex = 50;
			this->UPDATE5->Text = L"UPDATE";
			this->UPDATE5->UseVisualStyleBackColor = true;
			this->UPDATE5->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE5_CheckedChanged);
			// 
			// UPDATE6
			// 
			this->UPDATE6->AutoSize = true;
			this->UPDATE6->ForeColor = System::Drawing::Color::White;
			this->UPDATE6->Location = System::Drawing::Point(1278, 357);
			this->UPDATE6->Name = L"UPDATE6";
			this->UPDATE6->Size = System::Drawing::Size(70, 17);
			this->UPDATE6->TabIndex = 51;
			this->UPDATE6->Text = L"UPDATE";
			this->UPDATE6->UseVisualStyleBackColor = true;
			this->UPDATE6->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE6_CheckedChanged);
			// 
			// UPDATE7
			// 
			this->UPDATE7->AutoSize = true;
			this->UPDATE7->ForeColor = System::Drawing::Color::White;
			this->UPDATE7->Location = System::Drawing::Point(1278, 384);
			this->UPDATE7->Name = L"UPDATE7";
			this->UPDATE7->Size = System::Drawing::Size(70, 17);
			this->UPDATE7->TabIndex = 52;
			this->UPDATE7->Text = L"UPDATE";
			this->UPDATE7->UseVisualStyleBackColor = true;
			this->UPDATE7->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE7_CheckedChanged);
			// 
			// UPDATE8
			// 
			this->UPDATE8->AutoSize = true;
			this->UPDATE8->ForeColor = System::Drawing::Color::White;
			this->UPDATE8->Location = System::Drawing::Point(1278, 407);
			this->UPDATE8->Name = L"UPDATE8";
			this->UPDATE8->Size = System::Drawing::Size(70, 17);
			this->UPDATE8->TabIndex = 53;
			this->UPDATE8->Text = L"UPDATE";
			this->UPDATE8->UseVisualStyleBackColor = true;
			this->UPDATE8->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE8_CheckedChanged);
			// 
			// UPDATE9
			// 
			this->UPDATE9->AutoSize = true;
			this->UPDATE9->ForeColor = System::Drawing::Color::White;
			this->UPDATE9->Location = System::Drawing::Point(1278, 430);
			this->UPDATE9->Name = L"UPDATE9";
			this->UPDATE9->Size = System::Drawing::Size(70, 17);
			this->UPDATE9->TabIndex = 54;
			this->UPDATE9->Text = L"UPDATE";
			this->UPDATE9->UseVisualStyleBackColor = true;
			this->UPDATE9->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE9_CheckedChanged);
			// 
			// UPDATE
			// 
			this->UPDATE->AutoSize = true;
			this->UPDATE->ForeColor = System::Drawing::Color::White;
			this->UPDATE->Location = System::Drawing::Point(1278, 452);
			this->UPDATE->Name = L"UPDATE";
			this->UPDATE->Size = System::Drawing::Size(70, 17);
			this->UPDATE->TabIndex = 55;
			this->UPDATE->Text = L"UPDATE";
			this->UPDATE->UseVisualStyleBackColor = true;
			this->UPDATE->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE_CheckedChanged);
			// 
			// UPDATE_NAME
			// 
			this->UPDATE_NAME->ForeColor = System::Drawing::Color::White;
			this->UPDATE_NAME->Location = System::Drawing::Point(626, 138);
			this->UPDATE_NAME->Name = L"UPDATE_NAME";
			this->UPDATE_NAME->Size = System::Drawing::Size(155, 21);
			this->UPDATE_NAME->TabIndex = 56;
			this->UPDATE_NAME->Text = L"UPDATE CLIENT NAME";
			this->UPDATE_NAME->UseVisualStyleBackColor = true;
			this->UPDATE_NAME->CheckedChanged += gcnew System::EventHandler(this, &StockTransferAdd::UPDATE_NAME_CheckedChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(198, 45);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 14);
			this->textBox9->TabIndex = 28;
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox31->Location = System::Drawing::Point(441, 68);
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(209, 13);
			this->textBox31->TabIndex = 49;
			this->textBox31->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox31_Validating);
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox38->Location = System::Drawing::Point(6, 113);
			this->textBox38->Multiline = true;
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(14, 14);
			this->textBox38->TabIndex = 64;
			this->textBox38->Text = L"4";
			// 
			// textBox7
			// 
			this->textBox7->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox7->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(29, 160);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(160, 13);
			this->textBox7->TabIndex = 26;
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox40->Location = System::Drawing::Point(6, 160);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(14, 13);
			this->textBox40->TabIndex = 66;
			this->textBox40->Text = L"6";
			// 
			// textBox75
			// 
			this->textBox75->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox75->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox75->Location = System::Drawing::Point(258, 274);
			this->textBox75->Multiline = true;
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(47, 14);
			this->textBox75->TabIndex = 98;
			// 
			// textBox74
			// 
			this->textBox74->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox74->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox74->Location = System::Drawing::Point(198, 274);
			this->textBox74->Multiline = true;
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(49, 14);
			this->textBox74->TabIndex = 97;
			// 
			// textBox73
			// 
			this->textBox73->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox73->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox73->Location = System::Drawing::Point(29, 274);
			this->textBox73->Multiline = true;
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(64, 14);
			this->textBox73->TabIndex = 96;
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox54->Location = System::Drawing::Point(6, 45);
			this->textBox54->Multiline = true;
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(14, 14);
			this->textBox54->TabIndex = 36;
			this->textBox54->Text = L"1";
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 30);
			this->label3->TabIndex = 0;
			this->label3->Text = L"SNo.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox71
			// 
			this->textBox71->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox71->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox71->Location = System::Drawing::Point(659, 251);
			this->textBox71->Multiline = true;
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(322, 14);
			this->textBox71->TabIndex = 94;
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox70->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox70->Location = System::Drawing::Point(659, 228);
			this->textBox70->Multiline = true;
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(322, 14);
			this->textBox70->TabIndex = 93;
			// 
			// textBox69
			// 
			this->textBox69->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox69->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox69->Location = System::Drawing::Point(659, 205);
			this->textBox69->Multiline = true;
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(322, 14);
			this->textBox69->TabIndex = 92;
			// 
			// textBox68
			// 
			this->textBox68->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox68->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox68->Location = System::Drawing::Point(659, 182);
			this->textBox68->Multiline = true;
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(322, 14);
			this->textBox68->TabIndex = 91;
			// 
			// textBox67
			// 
			this->textBox67->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox67->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox67->Location = System::Drawing::Point(659, 160);
			this->textBox67->Multiline = true;
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(322, 13);
			this->textBox67->TabIndex = 90;
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox66->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox66->Location = System::Drawing::Point(659, 136);
			this->textBox66->Multiline = true;
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(322, 14);
			this->textBox66->TabIndex = 89;
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox65->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox65->Location = System::Drawing::Point(659, 113);
			this->textBox65->Multiline = true;
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(322, 14);
			this->textBox65->TabIndex = 88;
			// 
			// textBox64
			// 
			this->textBox64->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox64->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox64->Location = System::Drawing::Point(659, 90);
			this->textBox64->Multiline = true;
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(322, 14);
			this->textBox64->TabIndex = 87;
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox63->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox63->Location = System::Drawing::Point(659, 68);
			this->textBox63->Multiline = true;
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(322, 13);
			this->textBox63->TabIndex = 86;
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox52->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox52->Location = System::Drawing::Point(659, 45);
			this->textBox52->Multiline = true;
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(322, 14);
			this->textBox52->TabIndex = 85;
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox62->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox62->Location = System::Drawing::Point(441, 251);
			this->textBox62->Multiline = true;
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(209, 14);
			this->textBox62->TabIndex = 83;
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox61->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox61->Location = System::Drawing::Point(441, 228);
			this->textBox61->Multiline = true;
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(209, 14);
			this->textBox61->TabIndex = 82;
			this->textBox61->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox61_Validating);
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox60->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox60->Location = System::Drawing::Point(441, 205);
			this->textBox60->Multiline = true;
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(209, 14);
			this->textBox60->TabIndex = 81;
			this->textBox60->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox60_Validating);
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox59->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox59->Location = System::Drawing::Point(318, 251);
			this->textBox59->Multiline = true;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(113, 14);
			this->textBox59->TabIndex = 80;
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox58->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox58->Location = System::Drawing::Point(318, 228);
			this->textBox58->Multiline = true;
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(113, 14);
			this->textBox58->TabIndex = 79;
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox57->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox57->Location = System::Drawing::Point(318, 205);
			this->textBox57->Multiline = true;
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(113, 14);
			this->textBox57->TabIndex = 78;
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox51->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox51->Location = System::Drawing::Point(258, 251);
			this->textBox51->Multiline = true;
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(47, 14);
			this->textBox51->TabIndex = 77;
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox50->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox50->Location = System::Drawing::Point(258, 228);
			this->textBox50->Multiline = true;
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(47, 14);
			this->textBox50->TabIndex = 76;
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox49->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox49->Location = System::Drawing::Point(258, 205);
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(47, 14);
			this->textBox49->TabIndex = 75;
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox48->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox48->Location = System::Drawing::Point(198, 228);
			this->textBox48->Multiline = true;
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(49, 14);
			this->textBox48->TabIndex = 74;
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox47->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox47->Location = System::Drawing::Point(198, 205);
			this->textBox47->Multiline = true;
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(49, 13);
			this->textBox47->TabIndex = 73;
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox44->Location = System::Drawing::Point(6, 251);
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(14, 14);
			this->textBox44->TabIndex = 70;
			this->textBox44->Text = L"10";
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox36->Location = System::Drawing::Point(198, 251);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(49, 14);
			this->textBox36->TabIndex = 54;
			// 
			// textBox46
			// 
			this->textBox46->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox46->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox46->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox46->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox46->Location = System::Drawing::Point(29, 251);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(160, 13);
			this->textBox46->TabIndex = 72;
			// 
			// textBox45
			// 
			this->textBox45->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox45->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox45->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox45->Location = System::Drawing::Point(29, 228);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(160, 13);
			this->textBox45->TabIndex = 71;
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox43->Location = System::Drawing::Point(6, 228);
			this->textBox43->Multiline = true;
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(14, 14);
			this->textBox43->TabIndex = 69;
			this->textBox43->Text = L"9";
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox42->Location = System::Drawing::Point(6, 205);
			this->textBox42->Multiline = true;
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(14, 14);
			this->textBox42->TabIndex = 68;
			this->textBox42->Text = L"8";
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox41->Location = System::Drawing::Point(6, 182);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(14, 14);
			this->textBox41->TabIndex = 67;
			this->textBox41->Text = L"7";
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox39->Location = System::Drawing::Point(6, 136);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(14, 14);
			this->textBox39->TabIndex = 65;
			this->textBox39->Text = L"5";
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox37->Location = System::Drawing::Point(6, 90);
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(14, 14);
			this->textBox37->TabIndex = 63;
			this->textBox37->Text = L"3";
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox56->Location = System::Drawing::Point(6, 68);
			this->textBox56->Multiline = true;
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(14, 13);
			this->textBox56->TabIndex = 62;
			this->textBox56->Text = L"2";
			// 
			// textBox55
			// 
			this->textBox55->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox55->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox55->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox55->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox55->Location = System::Drawing::Point(29, 182);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(160, 13);
			this->textBox55->TabIndex = 61;
			// 
			// textBox53
			// 
			this->textBox53->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox53->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox53->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox53->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox53->Location = System::Drawing::Point(29, 205);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(160, 13);
			this->textBox53->TabIndex = 59;
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox35->Location = System::Drawing::Point(441, 160);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(209, 13);
			this->textBox35->TabIndex = 53;
			this->textBox35->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox35_Validating);
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox34->Location = System::Drawing::Point(441, 136);
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(209, 14);
			this->textBox34->TabIndex = 52;
			this->textBox34->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox34_Validating);
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox33->Location = System::Drawing::Point(441, 113);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(209, 14);
			this->textBox33->TabIndex = 51;
			this->textBox33->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox33_Validating);
			// 
			// Process
			// 
			this->Process->BackColor = System::Drawing::Color::LightSeaGreen;
			this->Process->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Process->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Process->Location = System::Drawing::Point(659, 3);
			this->Process->Name = L"Process";
			this->Process->Size = System::Drawing::Size(429, 30);
			this->Process->TabIndex = 84;
			this->Process->Text = L"Process";
			this->Process->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox32->Location = System::Drawing::Point(441, 90);
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(209, 14);
			this->textBox32->TabIndex = 50;
			this->textBox32->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox32_Validating);
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox30->Location = System::Drawing::Point(441, 45);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(209, 14);
			this->textBox30->TabIndex = 48;
			this->textBox30->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox30_Validating);
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox29->Location = System::Drawing::Point(441, 182);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(209, 14);
			this->textBox29->TabIndex = 47;
			this->textBox29->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::textBox29_Validating);
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox28->Location = System::Drawing::Point(318, 160);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(113, 13);
			this->textBox28->TabIndex = 46;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox27->Location = System::Drawing::Point(318, 136);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(113, 14);
			this->textBox27->TabIndex = 45;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Location = System::Drawing::Point(318, 113);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(113, 14);
			this->textBox26->TabIndex = 44;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &StockTransferAdd::textBox26_TextChanged);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Location = System::Drawing::Point(318, 90);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(113, 14);
			this->textBox25->TabIndex = 43;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox24->Location = System::Drawing::Point(318, 68);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(110, 13);
			this->textBox24->TabIndex = 42;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox22->Location = System::Drawing::Point(318, 182);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(113, 14);
			this->textBox22->TabIndex = 41;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox21->Location = System::Drawing::Point(258, 160);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(47, 13);
			this->textBox21->TabIndex = 40;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Location = System::Drawing::Point(258, 136);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(47, 14);
			this->textBox20->TabIndex = 39;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Location = System::Drawing::Point(258, 113);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(47, 14);
			this->textBox19->TabIndex = 38;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Location = System::Drawing::Point(258, 90);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(47, 14);
			this->textBox18->TabIndex = 37;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Location = System::Drawing::Point(258, 68);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(47, 13);
			this->textBox17->TabIndex = 36;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Location = System::Drawing::Point(258, 45);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(47, 14);
			this->textBox16->TabIndex = 35;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Location = System::Drawing::Point(258, 182);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(47, 14);
			this->textBox15->TabIndex = 34;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Location = System::Drawing::Point(198, 160);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 13);
			this->textBox14->TabIndex = 33;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(198, 136);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(49, 14);
			this->textBox13->TabIndex = 32;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Location = System::Drawing::Point(198, 113);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 14);
			this->textBox12->TabIndex = 31;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Location = System::Drawing::Point(198, 90);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 14);
			this->textBox11->TabIndex = 30;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(198, 68);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 13);
			this->textBox10->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(198, 182);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(49, 14);
			this->textBox8->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(29, 68);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 13);
			this->textBox3->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(198, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 30);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Qty.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(441, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(209, 30);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Amount(Rs.)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(318, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 30);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Price(Rs.)";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 30);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Item";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Unit
			// 
			this->Unit->BackColor = System::Drawing::Color::LightSeaGreen;
			this->Unit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Unit->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unit->Location = System::Drawing::Point(258, 3);
			this->Unit->Name = L"Unit";
			this->Unit->Size = System::Drawing::Size(51, 30);
			this->Unit->TabIndex = 3;
			this->Unit->Text = L"Unit";
			this->Unit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(29, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 13);
			this->textBox2->TabIndex = 24;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &StockTransferAdd::textBox2_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox4->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(29, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 13);
			this->textBox4->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox5->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(29, 113);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 13);
			this->textBox5->TabIndex = 26;
			// 
			// textBox6
			// 
			this->textBox6->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox6->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(29, 136);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 13);
			this->textBox6->TabIndex = 26;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox23->Location = System::Drawing::Point(318, 45);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(110, 14);
			this->textBox23->TabIndex = 29;
			// 
			// textBox72
			// 
			this->textBox72->BackColor = System::Drawing::Color::LightSeaGreen;
			this->textBox72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox72->Location = System::Drawing::Point(6, 274);
			this->textBox72->Multiline = true;
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(13, 14);
			this->textBox72->TabIndex = 95;
			// 
			// textBox76
			// 
			this->textBox76->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox76->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox76->Location = System::Drawing::Point(318, 274);
			this->textBox76->Multiline = true;
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(113, 14);
			this->textBox76->TabIndex = 73;
			// 
			// textBox77
			// 
			this->textBox77->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox77->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox77->Location = System::Drawing::Point(441, 274);
			this->textBox77->Multiline = true;
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(90, 14);
			this->textBox77->TabIndex = 73;
			// 
			// textBox78
			// 
			this->textBox78->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox78->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox78->Location = System::Drawing::Point(659, 274);
			this->textBox78->Multiline = true;
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(322, 14);
			this->textBox78->TabIndex = 73;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->AutoScroll = true;
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tableLayoutPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel3->ColumnCount = 7;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				89)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				57)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				57)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				120)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				215)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				502)));
			this->tableLayoutPanel3->Controls->Add(this->textBox78, 6, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox77, 5, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox76, 4, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox72, 0, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox23, 4, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox6, 1, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox5, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox4, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->Unit, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->label7, 5, 0);
			this->tableLayoutPanel3->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox8, 1, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox10, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox11, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox12, 2, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox13, 2, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox14, 2, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox15, 2, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox16, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox17, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox18, 3, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox19, 3, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox20, 3, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox21, 3, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox22, 3, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox24, 4, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox25, 4, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox26, 4, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox27, 4, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox28, 4, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox29, 4, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox30, 5, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox32, 5, 3);
			this->tableLayoutPanel3->Controls->Add(this->Process, 6, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox33, 5, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox34, 5, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox35, 5, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox53, 1, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox55, 1, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox56, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox37, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox39, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox41, 0, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox42, 0, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox43, 0, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox45, 1, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox46, 1, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox36, 2, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox44, 0, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox47, 2, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox48, 2, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox49, 3, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox50, 3, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox51, 3, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox57, 4, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox58, 4, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox59, 4, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox60, 5, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox61, 5, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox62, 5, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox52, 6, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox63, 6, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox64, 6, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox65, 6, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox66, 6, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox67, 6, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox68, 6, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox69, 6, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox70, 6, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox71, 6, 10);
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox54, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox73, 1, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox74, 1, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox75, 2, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox40, 0, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox7, 1, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox38, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox31, 5, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox9, 2, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(12, 187);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 12;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1162, 292);
			this->tableLayoutPanel3->TabIndex = 6;
			this->tableLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StockTransferAdd::tableLayoutPanel3_Paint);
			// 
			// VIEW
			// 
			this->VIEW->BackColor = System::Drawing::SystemColors::ControlLight;
			this->VIEW->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VIEW->Location = System::Drawing::Point(646, 628);
			this->VIEW->Name = L"VIEW";
			this->VIEW->Size = System::Drawing::Size(89, 63);
			this->VIEW->TabIndex = 58;
			this->VIEW->Text = L"VIEW CURRENT DATA";
			this->VIEW->UseVisualStyleBackColor = false;
			this->VIEW->Click += gcnew System::EventHandler(this, &StockTransferAdd::VIEW_Click);
			// 
			// ADD
			// 
			this->ADD->FormattingEnabled = true;
			this->ADD->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"\t\t\t\t\t\t"
			});
			this->ADD->Location = System::Drawing::Point(986, 83);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(161, 21);
			this->ADD->TabIndex = 59;
			this->ADD->SelectedIndexChanged += gcnew System::EventHandler(this, &StockTransferAdd::ADD_SelectedIndexChanged);
			this->ADD->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &StockTransferAdd::ADD_Validating);
			// 
			// ADD_Btn
			// 
			this->ADD_Btn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ADD_Btn->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADD_Btn->Location = System::Drawing::Point(551, 627);
			this->ADD_Btn->Name = L"ADD_Btn";
			this->ADD_Btn->Size = System::Drawing::Size(89, 64);
			this->ADD_Btn->TabIndex = 60;
			this->ADD_Btn->Text = L"ADD NEW DATA";
			this->ADD_Btn->UseVisualStyleBackColor = false;
			this->ADD_Btn->Click += gcnew System::EventHandler(this, &StockTransferAdd::ADD_Btn_Click);
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// NoRecrdToAdd
			// 
			this->NoRecrdToAdd->ForeColor = System::Drawing::Color::White;
			this->NoRecrdToAdd->Location = System::Drawing::Point(983, 57);
			this->NoRecrdToAdd->Name = L"NoRecrdToAdd";
			this->NoRecrdToAdd->Size = System::Drawing::Size(283, 23);
			this->NoRecrdToAdd->TabIndex = 61;
			this->NoRecrdToAdd->Text = L"SELECT NUMBER OF RECORDS TO ADD:";
			// 
			// DELETE_btn
			// 
			this->DELETE_btn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->DELETE_btn->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DELETE_btn->Location = System::Drawing::Point(741, 628);
			this->DELETE_btn->Name = L"DELETE_btn";
			this->DELETE_btn->Size = System::Drawing::Size(89, 64);
			this->DELETE_btn->TabIndex = 62;
			this->DELETE_btn->Text = L"DELETE  CURRENT DATA";
			this->DELETE_btn->UseVisualStyleBackColor = false;
			this->DELETE_btn->Click += gcnew System::EventHandler(this, &StockTransferAdd::DELETE_btn_Click);
			// 
			// DELETE_cmb
			// 
			this->DELETE_cmb->FormattingEnabled = true;
			this->DELETE_cmb->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"\t\t\t\t\t\t"
			});
			this->DELETE_cmb->Location = System::Drawing::Point(986, 124);
			this->DELETE_cmb->Name = L"DELETE_cmb";
			this->DELETE_cmb->Size = System::Drawing::Size(161, 21);
			this->DELETE_cmb->TabIndex = 63;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// StockTransferAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1354, 737);
			this->Controls->Add(this->DELETE_cmb);
			this->Controls->Add(this->DELETE_btn);
			this->Controls->Add(this->NoRecrdToAdd);
			this->Controls->Add(this->ADD_Btn);
			this->Controls->Add(this->ADD);
			this->Controls->Add(this->VIEW);
			this->Controls->Add(this->UPDATE_NAME);
			this->Controls->Add(this->UPDATE);
			this->Controls->Add(this->UPDATE9);
			this->Controls->Add(this->UPDATE8);
			this->Controls->Add(this->UPDATE7);
			this->Controls->Add(this->UPDATE6);
			this->Controls->Add(this->UPDATE5);
			this->Controls->Add(this->UPDATE4);
			this->Controls->Add(this->UPDATE3);
			this->Controls->Add(this->UPDATE2);
			this->Controls->Add(this->UPDATE1);
			this->Controls->Add(this->MODIFY);
			this->Controls->Add(this->RECEIVED10);
			this->Controls->Add(this->RECEIVED9);
			this->Controls->Add(this->RECEIVED8);
			this->Controls->Add(this->RECEIVED7);
			this->Controls->Add(this->RECEIVED6);
			this->Controls->Add(this->RECEIVED5);
			this->Controls->Add(this->RECEIVED4);
			this->Controls->Add(this->RECEIVED3);
			this->Controls->Add(this->RECEIVED2);
			this->Controls->Add(this->RECEIVED1);
			this->Controls->Add(this->RECEIVED);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->New);
			this->Controls->Add(this->Name_of_Form);
			this->Controls->Add(this->PDetails);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->To);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->From);
			this->Controls->Add(this->VchNo);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Series);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Name = L"StockTransferAdd";
			this->Text = resources->GetString(L"$this.Text");
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &StockTransferAdd::StockTransferAdd_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void StockTransferAdd_Load(System::Object^  sender, System::EventArgs^  e) {

//			 textBox1->SetStyle(System::Windows::Forms::ControlStyles->SupportsTransparentBackColor, true);
////		this->TransparencyKey = Color->FromKnownColor(KnownColor.Control);
		
			 this->Update();
			 RECEIVED1->Enabled =false;	
			 RECEIVED2->Enabled =false;	
			 RECEIVED3->Enabled =false;	
			 RECEIVED4->Enabled =false;	
			 RECEIVED5->Enabled =false;	
			 RECEIVED6->Enabled =false;	
			 RECEIVED7->Enabled =false;	
			 RECEIVED8->Enabled =false;	
			 RECEIVED9->Enabled =false;	
			 RECEIVED10->Enabled =false;	
//			 
			 UPDATE1->Enabled =false;	
			 UPDATE2->Enabled =false;	
			 UPDATE3->Enabled =false;	
			 UPDATE4->Enabled =false;	
			 UPDATE5->Enabled =false;	
			 UPDATE6->Enabled =false;	
			 UPDATE7->Enabled =false;	
			 UPDATE8->Enabled =false;	
			 UPDATE9->Enabled =false;	
			 UPDATE->Enabled =false;	

			 
			  DateTime^ dt = DateTime::Now;
			  date = dt->ToString("G");
			  dateTimePicker2->Text = date;
			//  dateTimePicker2->Text = dt->ToString("dd-MM-yyyy , hh:mm:ss tt",DateTimeFormatInfo::InvariantInfo);

			 OleDbConnection^ myconnection = gcnew OleDbConnection();
			
			 myconnection->ConnectionString = path::Path;
			 
			 myconnection->Open();

			  String^ query1 = "Select MAX(VchNo) from User_Elite";
			
				OleDbCommand^ mycom = gcnew OleDbCommand(query1,myconnection);
				mycom->ExecuteNonQuery();

				 OleDbDataReader^ myReader = mycom->ExecuteReader();

				 myReader->Read();

				
				String^ VCHNO = myReader->GetValue(0)->ToString();

				int i = Convert::ToInt32(VCHNO);
				i = i+1;

				textBox1->Text =Convert::ToString(i);

				String^ query2 = "Select COUNT(SrNo) from User_Elite where VchNo = "+VCHNO+"";
			
				OleDbCommand^ mycom2 = gcnew OleDbCommand(query2,myconnection);
				mycom2->ExecuteNonQuery();

				 OleDbDataReader^ myReader1 = mycom2->ExecuteReader();

				 myReader1->Read();
				 
				int cnt=CommonFunction::checkRecord(query2);
				if(cnt <= 0)
				 {
				 MessageBox::Show("No record exists for this Client");
				 return;
				 }
		
//				String^ query11 = "select * from User_Elite where VchNo ="+VCHNO+" ";
//
//				OleDbDataReader^ myReader3=  CommonFunction::GetData(query1);
//
//				 myReader3->Read();
//
//				if(cnt == 1)
//				{
//				  textBox2->Text=myReader1->GetValue(1)->ToString();
//
//				  textBox9->Text=myReader1->GetValue(2)->ToString();
//
//				  textBox16->Text=myReader1->GetValue(3)->ToString();
//
//				  textBox23->Text=myReader1->GetValue(4)->ToString();
//
//			      textBox30->Text=myReader1->GetValue(5)->ToString();
//
//				  textBox52->Text=myReader1->GetValue(6)->ToString();
//
//				  textBox5->Text=myReader1->GetValue(6)->ToString();
//
//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();
//				}
//				else if(cnt == 2)
//				{
//				 textBox2->Text=myReader1->GetValue(2)->ToString();
//
//				  textBox9->Text=myReader1->GetValue(3)->ToString();
//
//				  textBox16->Text=myReader1->GetValue(4)->ToString();
//
//				  textBox23->Text=myReader1->GetValue(5)->ToString();
//
//			      textBox30->Text=myReader1->GetValue(6)->ToString();
//
//				  textBox52->Text=myReader1->GetValue(7)->ToString();
//
////				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();
//
//				  String^ query1 = "select * from User_Elite where VchNo ="+VCHNO+" ";
//
//				  OleDbDataReader^ myReader1=  CommonFunction::GetData(query1);
//				  
//				  myReader1->Read();
//
//				  textBox3->Text=myReader1->GetValue(2)->ToString();
//
//				  textBox10->Text=myReader1->GetValue(3)->ToString();
//
//				  textBox17->Text=myReader1->GetValue(4)->ToString();
//
//				  textBox24->Text=myReader1->GetValue(5)->ToString();
//				
//				  textBox31->Text=myReader1->GetValue(6)->ToString();
//
//				  textBox63->Text=myReader1->GetValue(7)->ToString();				  			 
//
//				}
//
			  String ^query = "Select ALL(Client_names) from Project";								//where ProjectID = " +GlobalID::prjID+"";

			  OleDbDataReader^ myReader8 =  CommonFunction::GetData(query);

//			 listBox1->Text = myReader1->Read();

//			 String^ items = myReader1->Read();
			/*   i = CommonFunction:: GetMaxID();
				 textBox1->Text=i.ToString();	*/	
			 
			 while(myReader8->Read())
			 {
				 SrnoValues->Add(myReader8[0]);
			 }
//			array<Char>^ character_array = ((items)->ToCharArray());
			for(int i=0; i<SrnoValues->Count;i++)
			{
				comboBox1->Items->Add(SrnoValues[i]);
			}
			
			String^ query9 = "Select ALL(Item) from User_Elite";

			OleDbDataReader^ myReader9 = CommonFunction::GetData(query9);

			AutoCompleteStringCollection^  source = gcnew AutoCompleteStringCollection();
				

			while(myReader9->Read())
			{
				source->Add(myReader9->GetString(0)->ToString());
			}

	//		textBox2->Text = source;

			textBox2->AutoCompleteCustomSource = source;
			textBox3->AutoCompleteCustomSource = source;
			textBox4->AutoCompleteCustomSource = source;
			textBox5->AutoCompleteCustomSource = source;
			textBox6->AutoCompleteCustomSource = source;
			textBox7->AutoCompleteCustomSource = source;
			textBox55->AutoCompleteCustomSource = source;
			textBox53->AutoCompleteCustomSource = source;
			textBox45->AutoCompleteCustomSource = source;
			textBox46->AutoCompleteCustomSource = source;
			

//			String^ query10 = "Select ALL(VchNo) from User_Elite";
//
//			OleDbDataReader^ myReader10 = CommonFunction::GetData(query10);
//
//			AutoCompleteStringCollection^  voucher = gcnew AutoCompleteStringCollection();
//
//			while(myReader10->Read())
//			{
//				voucher->Add(myReader10->GetInt32(0));
//			}
////			voucher = VchValues;
//			AutoCompleteStringCollection::CopyTo(voucher,VchValues);
//
//			textBox1->AutoCompleteCustomSource = voucher;

//			textBox3->AutoCompleteCustomSource = source;
		/*
			AutoCompleteSource =
								AutoCompleteSource->CustomSource;*/
			 String^ text; 
		//	 text =  textBox2;
			//	text->AutoCompleteCustomSource = source;
			
			/*	textBox2->AutoCompleteMode =
								AutoCompleteMode->SuggestAppend;*/
			/*var textBox2 = gcnew TextBox{
							
							AutoCompleteCustomource=source,
							AutoCompleteMode = 
							AutoCompleteMode->SuggestAppend;
							AutoCompleteSource =
								AutoCompleteSource->CustomSource;
							Location = new Point(20,20),
								Width = ClientRectangle->Width - 40,
								Visible =true;
						}*/
		 
}
		 

private: System::Void textBox26_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void PDetails_Click(System::Object^  sender, System::EventArgs^  e) {

				/* textBox1->Enabled = false;
				 comboBox1->Enabled = false;
*/
				 ClientDetails^ cd = gcnew ClientDetails;

			     cd->MaximizeBox=false;
				 cd->MinimizeBox=false;
							
				 cd->ControlBox=false;
				 cd->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				
			   	 cd->Show();
				 cd->Dock = System::Windows::Forms::DockStyle::Fill;

				 
		
		 }
private: System::Void Quit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void New_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			/* Object^ selectedItem = comboBox1->SelectedItem;
			 String^ comboselected = selectedItem->ToString();

			if(comboBox1->Text == "")
			{
				errorProvider1->SetError(comboBox1,"Field cannot be blank");
			}
			else 
			{*/
//				try{
//					errorProvider1->SetError(comboBox1,"");
					String^ val = textBox1->Text;
					MessageBox::Show(val);
			//		int i = Convert::ToInt32(val);
//					 myProcess = Process::Start(Application::StartupPath + "\\Report.exe",comboselected + "" + textBox1->Text+ "" +comboselected);
					//  myProcess = Process::Start(Application::StartupPath + "\\ReportNew.exe", val);
					myProcess = Process::Start(Application::StartupPath + "\\ReportNew10.exe", val);
					myProcess2 = Process::Start(Application::StartupPath + "\\ReportNew2.exe", val);
					/* ProcessStartInfo^ startInfo = gcnew ProcessStartInfo(Application::StartupPath + "\\Report.exe");
					 startInfo->Arguments = comboBox1->Text,textBox1->Text,comboBox1->Text;
					 Process::Start(startInfo);*/
					myProcess->Close();
					myProcess2->Close();
				//}catch(System::Exception^ e)
				//{
				//	 errorProvider1->SetError(textBox1,"Enter a numeric value");
				//}
//			}
			 RECEIVED1->Enabled =false;	 
			 RECEIVED2->Enabled =false;	
		 }
private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {
					  
			   OleDbConnection^ myconnection = gcnew OleDbConnection();

			   myconnection->ConnectionString = path::Path;

			   myconnection->Open();
			 
			   OleDbCommand^ mycommand = gcnew OleDbCommand();

			   mycommand->Connection = myconnection;
				  
				 ///* switch(i)
				 // {

				 // case 1:mycommand->CommandText = L"Insert into User(Sent)(ProjectID,SrNo,Date_D,VouchNo,To,Item,Qty,Unit,Price,Amount)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"','" + textBox9->Text +"',"+ textBox16->Text +","+ textBox23->Text +","+ textBox30->Text + ","+ textBox52->Text +")";
				 //        break;
				 // case 2:mycommand->CommandText = L"Insert into User(Sent)(ProjectID,SrNo,Date_D,VouchNo,To,Item,Qty,Unit,Price,Amount)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"','" + textBox10->Text +"',"+ textBox17->Text +","+ textBox24->Text +","+ textBox31->Text + ","+ textBox63->Text +")";
				 //        break;
				 //  case 3:mycommand->CommandText = L"Insert into User(Sent)(ProjectID,SrNo,Date_D,VouchNo,To,Item,Qty,Unit,Price,Amount)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"','" + textBox11->Text +"',"+ textBox18->Text +","+ textBox25->Text +","+ textBox32->Text + ","+ textBox64->Text +")";
				 //        break;
				 // }
				 // mycommand->ExecuteNonQuery();*/
			 //  String^ PRJID="";
				 String^ query = "Select ProjectID from Project where Client_names = '"+comboBox1->Text+"' ";
			
				OleDbCommand^ mycom = gcnew OleDbCommand(query,myconnection);
				mycom->ExecuteNonQuery();
	
				OleDbDataReader^ myReader=  mycom->ExecuteReader();
				myReader->Read();
				if(! (myReader->HasRows))
				{
					MessageBox::Show("Please Select Party name!!");
					return;
				}
				int i = myReader->GetInt32(0);
				myReader->Close();
				 
//				myconnection->Close();
			  
				OleDbConnection^ myconnection1 = gcnew OleDbConnection();

			   myconnection1->ConnectionString = path::Path;

			   myconnection1->Open();		 		    
				  
				String^ query24 = "Select Address from Project where Client_names = '"+comboBox1->Text+"' ";

				OleDbCommand^ mycom24 = gcnew OleDbCommand(query24,myconnection1);
				mycom24->ExecuteNonQuery();
	
				OleDbDataReader^ myReader24=  mycom24->ExecuteReader();
//				myReader24->Read();
//				String^ addr = myReader24->GetValue(2)->ToString();
				while(myReader24->Read())
				{
				Addrss->Add(myReader24[0]);
				}
//				String^ address = myReader24->GetValue(2)->ToString();

				textBox37->Enabled = false;
				textBox38->Enabled = false;
				textBox39->Enabled = false;
				textBox40->Enabled = false;
				textBox41->Enabled = false;
				textBox42->Enabled = false;
				textBox43->Enabled = false;
				textBox44->Enabled = false;

//				Object^ selectedItem = comboBox1->SelectedItem;

//				String^ selecteditem = selectedItem->ToString();
						 				
				int selectedindex = comboBox1->SelectedIndex;
				Object^ selectedItem = comboBox1->SelectedItem;
								
				 GlobalID::prjID = i;
				  
				 String^ comboselected = selectedItem->ToString();
					

				 if(flag == false)	
				 {
				
				 if(RECEIVED1->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" and SrNo=1";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					 Application::Exit();
				 }
				  if(RECEIVED1->Checked && RECEIVED2->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					 Application::Exit();
				 }
			
				  if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				  if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				 
				  if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				   if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked && RECEIVED6->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				   if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked && RECEIVED6->Checked && RECEIVED7->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				 if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked && RECEIVED6->Checked && RECEIVED7->Checked && RECEIVED8->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
					 
				 }
				 if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked && RECEIVED6->Checked && RECEIVED7->Checked && RECEIVED8->Checked && RECEIVED9->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				 if(RECEIVED1->Checked && RECEIVED2->Checked && RECEIVED3->Checked && RECEIVED4->Checked && RECEIVED5->Checked && RECEIVED6->Checked && RECEIVED7->Checked && RECEIVED8->Checked && RECEIVED9->Checked && RECEIVED10->Checked)
				 {
					 OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Received= Yes where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" ";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					  Application::Exit();
				 }
				}
				else if(flag == true)
				{
			    if(textBox3->Text == "")
				{
					mycommand->CommandText =L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)"+ "VALUES("+ GlobalID::prjID + ","+ textBox54->Text +",'" + textBox2->Text +"',"+ textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text + ","+ textBox30->Text +",'"+ textBox52->Text  +"','"+date+"',"+ textBox1->Text +",'"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					 MessageBox::Show("Record inserted succcessfully");
					 
				}
				else if(textBox4->Text == "")
				{					
					
					mycommand->CommandText =L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)"+ "VALUES("+ GlobalID::prjID + ","+ textBox54->Text +",'" + textBox2->Text +"',"+ textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text + ","+ textBox30->Text +",'"+ textBox52->Text  +"','"+date+"',"+ textBox1->Text +",'"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					 MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox5->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
				/*	String^ query1 =  L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"','" + textBox9->Text +"',"+ textBox16->Text +","+ textBox23->Text +","+ textBox30->Text + ","+ textBox52->Text +",'"+dateTimePicker2->Text+"','"+textBox1->Text+"','"+comboselected+"')";
					 OleDbCommand^ mycom1 = gcnew OleDbCommand(query1,myconnection);
					 mycom1->ExecuteNonQuery();	
					 String^ query2 = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"','" + textBox10->Text +"',"+ textBox17->Text +","+ textBox24->Text +","+ textBox31->Text + ","+ textBox63->Text +",'"+dateTimePicker2->Text+"','"+textBox1->Text+"','"+comboselected+"')";
					  OleDbCommand^ mycom2 = gcnew OleDbCommand(query2,myconnection);
					 mycom2->ExecuteNonQuery();	
					 String^ query3 =  L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"','" + textBox11->Text +"',"+ textBox18->Text +","+ textBox25->Text +","+ textBox32->Text + ","+ textBox64->Text +",'"+dateTimePicker2->Text+"','"+textBox1->Text+"','"+comboselected+"')";
					 OleDbCommand^ mycom3 = gcnew OleDbCommand(query3,myconnection);
					 mycom3->ExecuteNonQuery();	*/
					  MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox6->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					 MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox7->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					 MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox8->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					  MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox53->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					   MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox45->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					  MessageBox::Show("Record inserted succcessfully");
				}
				else if(textBox46->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					  MessageBox::Show("Record inserted succcessfully");
				} 
				else if(textBox73->Text == "")
				{
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox54->Text + ",'"+ textBox2->Text +"'," + textBox9->Text +",'"+ textBox16->Text +"',"+ textBox23->Text +","+ textBox30->Text + ",'"+ textBox52->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"','"+textBox1->Text+"','"+comboselected+"','"+Addrss[0]+"')";
					 mycommand->ExecuteNonQuery();
					  MessageBox::Show("Record inserted succcessfully");
				} 

//			String^ query9 = L"Insert into PrjSrNo (SrNo,ProjectID,Names)" +" values ("+ j +","+ GlobalID::prjID +",'"+ comboselected +"') ";
//
//			
//
//			OleDbConnection^ myconnection9 = gcnew OleDbConnection();
//
//			//myconnection9->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";
//
//			myconnection9->ConnectionString = path::Path;
//
//			myconnection9->Open();	
//
//		//	OleDbCommand^ mycomm1 = gcnew OleDbCommand("Select  iif( MAX(SrNo) is null,0,max(srno)) from PrjSrNo where ProjectID=" + (GlobalID::prjID) +" ",myconnection1);
//
////			OleDbCommand^ mycomm1 = gcnew OleDbCommand(query,myconnection1);
//
//			OleDbCommand^ mycomm = gcnew OleDbCommand(query9,myconnection9);
//
//			 mycomm->ExecuteNonQuery();
//			 Console::WriteLine("Record Inserted SuccessFully!!");
			 }
			 
		 }

private: System::Void comboBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 	int selectedindex = comboBox1->SelectedIndex;
				Object^ selectedItem = comboBox1->SelectedItem;

				 String^ query = "Select ProjectID from Project where Client_names = '"+comboBox1->Text+"' ";
			
				 OleDbConnection^ myconnection = gcnew OleDbConnection();

			     myconnection->ConnectionString = path::Path;

			     myconnection->Open();
				 OleDbCommand^ mycom = gcnew OleDbCommand(query,myconnection);
				 mycom->ExecuteNonQuery();
				
				 if(comboBox1->Text == "")
				 {
					 MessageBox::Show("Enter New Record");
					 return;
				 }
				OleDbDataReader^ myReader=  mycom->ExecuteReader();
				myReader->Read();
				 int i = myReader->GetInt32(0);
				 				
				 GlobalID::prjID = i;
				  
				 String^ comboselected = selectedItem->ToString();

//				 j = CommonFunction::GetMaxID();
//				 textBox1->Text=j.ToString();	

		 }

private: System::Void RECEIVED1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void RECEIVED_Click(System::Object^  sender, System::EventArgs^  e) {

			  flag = false;
			  RECEIVED1->Enabled =true;	
			  RECEIVED2->Enabled =true;	
			  RECEIVED3->Enabled =true;	
			  RECEIVED4->Enabled =true;	
			  RECEIVED5->Enabled =true;	
			  RECEIVED6->Enabled =true;	
			  RECEIVED7->Enabled =true;	
			  RECEIVED8->Enabled =true;	
			  RECEIVED9->Enabled =true;	
			  RECEIVED10->Enabled =true;	
			  SetFlag(true);
			
			 String ^ query= "Select  count(*) from User_Elite where  VchNo="+textBox1->Text+" ";
			 int a =  CommonFunction::checkRecord(query);
			 if(a <= 0)
			 {
				 MessageBox::Show("No record exists for this Client");
				 return;
			 }
			 String^ query1 = "select * from User_Elite where SrNo = 1 and  VchNo ="+textBox1->Text+" ";

		     OleDbDataReader^ myReader1=  CommonFunction::GetData(query1);

			 myReader1->Read();

			 
			 if(a == 1)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

	//			  textBox5->Text=myReader1->GetValue(8)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();
			 }
			 else if(a == 2)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader1=  CommonFunction::GetData(query11);
				  
				  myReader1->Read();

				  textBox3->Text=myReader1->GetValue(2)->ToString();

				  textBox10->Text=myReader1->GetValue(3)->ToString();

				  textBox17->Text=myReader1->GetValue(4)->ToString();

				  textBox24->Text=myReader1->GetValue(5)->ToString();
				
				  textBox31->Text=myReader1->GetValue(6)->ToString();

				  textBox63->Text=myReader1->GetValue(7)->ToString();				  		 

			 }
			 else if(a == 3)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();		
			 }
			 else if(a == 4)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where SrNo = 2 and VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  SrNo = 3 and VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where SrNo = 4 and VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();		
			 }
			 else if(a == 5)
			 {
				   textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	
			 }
			 else if(a == 6)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	
			 }
			 else if(a == 7)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	
			 }
			 else if(a == 8)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	
			 }
			 else if(a == 9)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	

				  String^ query18 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader18=  CommonFunction::GetData(query18);
				  
				  myReader18->Read();

				  textBox45->Text=myReader18->GetValue(2)->ToString();

				  textBox48->Text=myReader18->GetValue(3)->ToString();
				
				  textBox50->Text=myReader18->GetValue(4)->ToString();

				  textBox58->Text=myReader18->GetValue(5)->ToString();
				
				  textBox61->Text=myReader18->GetValue(6)->ToString();

				  textBox70->Text=myReader18->GetValue(7)->ToString();	
			 }
			 else if(a == 10)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	

				  String^ query18 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader18=  CommonFunction::GetData(query18);
				  
				  myReader18->Read();

				  textBox45->Text=myReader18->GetValue(2)->ToString();

				  textBox48->Text=myReader18->GetValue(3)->ToString();
				
				  textBox50->Text=myReader18->GetValue(4)->ToString();

				  textBox58->Text=myReader18->GetValue(5)->ToString();
				
				  textBox61->Text=myReader18->GetValue(6)->ToString();

				  textBox70->Text=myReader18->GetValue(7)->ToString();

				  String^ query19 = "select * from User_Elite where  VchNo ="+textBox1->Text+" ";

				  OleDbDataReader^ myReader19=  CommonFunction::GetData(query19);
				  
				  myReader19->Read();

				  textBox46->Text=myReader19->GetValue(2)->ToString();

				  textBox36->Text=myReader19->GetValue(3)->ToString();
				
				  textBox51->Text=myReader19->GetValue(4)->ToString();

				  textBox59->Text=myReader19->GetValue(5)->ToString();
				
				  textBox62->Text=myReader19->GetValue(6)->ToString();

				  textBox71->Text=myReader19->GetValue(7)->ToString();
			 }

		 }
//};
private: System::Void textBox30_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 String^ strQty = textBox9->Text;
			 String^ strPrice = textBox23->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox30->Text = Amt;
		 }
		 private: System::Void textBox31_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
					 
			 String^ strQty = textBox10->Text;
			 String^ strPrice = textBox24->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox31->Text = Amt;
				  }
private: System::Void textBox32_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 String^ strQty = textBox11->Text;
			 String^ strPrice = textBox25->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox32->Text = Amt;
		 }
private: System::Void textBox33_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 String^ strQty = textBox12->Text;
			 String^ strPrice = textBox26->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox33->Text = Amt;
		 }
private: System::Void textBox34_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			  String^ strQty = textBox13->Text;
			 String^ strPrice = textBox27->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox34->Text = Amt;
		 }
private: System::Void textBox35_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 String^ strQty = textBox14->Text;
			 String^ strPrice = textBox28->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox35->Text = Amt;
		 }
private: System::Void textBox29_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			  String^ strQty = textBox55->Text;
			 String^ strPrice = textBox22->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox29->Text = Amt;

		 }
private: System::Void textBox60_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 String^ strQty = textBox47->Text;
			 String^ strPrice = textBox57->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox60->Text = Amt;
		 }
private: System::Void textBox61_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 			 
			 String^ strQty = textBox48->Text;
			 String^ strPrice = textBox58->Text;
			 int intQty = Convert::ToInt32(strQty);
			 int intPrice = Convert::ToInt32(strPrice);
			 int Amount = intQty * intPrice;
			 String^ Amt = Convert::ToString(Amount);
			 textBox61->Text = Amt;
		 }
private: System::Void MODIFY_Click(System::Object^  sender, System::EventArgs^  e) {

			  UPDATE1->Enabled =true;	
			  UPDATE2->Enabled =true;	
			  UPDATE3->Enabled =true;	
			  UPDATE4->Enabled =true;	
			  UPDATE5->Enabled =true;	
			  UPDATE6->Enabled =true;	
			  UPDATE7->Enabled =true;	
			  UPDATE8->Enabled =true;	
			  UPDATE9->Enabled =true;	
			  UPDATE->Enabled =true;
			  UPDATE_NAME->Enabled =true;

			  String ^ query= "Select  count(*) from User_Elite where VchNo="+textBox1->Text+" ";
			 int a =  CommonFunction::checkRecord(query);
			 if(a <= 0)
			 {
				 MessageBox::Show("No record exists for this Client");
				 return;
			 }
//			 value = 1;
			 String^ query1 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo = 1";

		     OleDbDataReader^ myReader1=  CommonFunction::GetData(query1);

			 myReader1->Read();

			 
			 if(a == 1)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

	//			  textBox5->Text=myReader1->GetValue(8)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();
			 }
			 else if(a == 2)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader1=  CommonFunction::GetData(query11);
				  
				  myReader1->Read();

				  textBox3->Text=myReader1->GetValue(2)->ToString();

				  textBox10->Text=myReader1->GetValue(3)->ToString();

				  textBox17->Text=myReader1->GetValue(4)->ToString();

				  textBox24->Text=myReader1->GetValue(5)->ToString();
				
				  textBox31->Text=myReader1->GetValue(6)->ToString();

				  textBox63->Text=myReader1->GetValue(7)->ToString();				  		 

			 }
			 else if(a == 3)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();		
			 }
			 else if(a == 4)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();		
			 }
			 else if(a == 5)
			 {
				  textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo =2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo = 3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo = 4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo = 5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	
			 }
			 else if(a == 6)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo = 2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo = 6";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	
			 }
			 else if(a == 7)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=6";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo=7";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	
			 }
			 else if(a == 8)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=6";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=7";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=8";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	
			 }
			 else if(a == 9)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=6";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=7";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=8";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	

				  String^ query18 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=9";

				  OleDbDataReader^ myReader18=  CommonFunction::GetData(query18);
				  
				  myReader18->Read();

				  textBox45->Text=myReader18->GetValue(2)->ToString();

				  textBox48->Text=myReader18->GetValue(3)->ToString();
				
				  textBox50->Text=myReader18->GetValue(4)->ToString();

				  textBox58->Text=myReader18->GetValue(5)->ToString();
				
				  textBox61->Text=myReader18->GetValue(6)->ToString();

				  textBox70->Text=myReader18->GetValue(7)->ToString();	
			 }
			 else if(a == 10)
			 {
				 textBox2->Text=myReader1->GetValue(2)->ToString();

				  textBox9->Text=myReader1->GetValue(3)->ToString();

				  textBox16->Text=myReader1->GetValue(4)->ToString();

				  textBox23->Text=myReader1->GetValue(5)->ToString();

			      textBox30->Text=myReader1->GetValue(6)->ToString();

				  textBox52->Text=myReader1->GetValue(7)->ToString();

				  comboBox1->Text=myReader1->GetValue(10)->ToString();

//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

				  String^ query11 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=2";

				  OleDbDataReader^ myReader11=  CommonFunction::GetData(query11);
				  
				  myReader11->Read();

				  textBox3->Text=myReader11->GetValue(2)->ToString();

				  textBox10->Text=myReader11->GetValue(3)->ToString();

				  textBox17->Text=myReader11->GetValue(4)->ToString();

				  textBox24->Text=myReader11->GetValue(5)->ToString();
				
				  textBox31->Text=myReader11->GetValue(6)->ToString();

				  textBox63->Text=myReader11->GetValue(7)->ToString();		

				  String^ query12 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=3";

				  OleDbDataReader^ myReader12=  CommonFunction::GetData(query12);
				  
				  myReader12->Read();

				  textBox4->Text=myReader12->GetValue(2)->ToString();

				  textBox11->Text=myReader12->GetValue(3)->ToString();
				
				  textBox18->Text=myReader12->GetValue(4)->ToString();

				  textBox25->Text=myReader12->GetValue(5)->ToString();
				
				  textBox32->Text=myReader12->GetValue(6)->ToString();

				  textBox64->Text=myReader12->GetValue(7)->ToString();

				   String^ query13 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=4";

				  OleDbDataReader^ myReader13=  CommonFunction::GetData(query13);
				  
				  myReader13->Read();

				  textBox5->Text=myReader13->GetValue(2)->ToString();

				  textBox12->Text=myReader13->GetValue(3)->ToString();
				
				  textBox19->Text=myReader13->GetValue(4)->ToString();

				  textBox26->Text=myReader13->GetValue(5)->ToString();
				
				  textBox33->Text=myReader13->GetValue(6)->ToString();

				  textBox65->Text=myReader13->GetValue(7)->ToString();	

				   String^ query14 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=5";

				  OleDbDataReader^ myReader14=  CommonFunction::GetData(query14);
				  
				  myReader14->Read();

				  textBox6->Text=myReader14->GetValue(2)->ToString();

				  textBox13->Text=myReader14->GetValue(3)->ToString();
				
				  textBox20->Text=myReader14->GetValue(4)->ToString();

				  textBox27->Text=myReader14->GetValue(5)->ToString();
				
				  textBox34->Text=myReader14->GetValue(6)->ToString();

				  textBox66->Text=myReader14->GetValue(7)->ToString();	

				  String^ query15 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=6";

				  OleDbDataReader^ myReader15=  CommonFunction::GetData(query15);
				  
				  myReader15->Read();

				  textBox7->Text=myReader15->GetValue(2)->ToString();

				  textBox14->Text=myReader15->GetValue(3)->ToString();
				
				  textBox21->Text=myReader15->GetValue(4)->ToString();

				  textBox28->Text=myReader15->GetValue(5)->ToString();
				
				  textBox35->Text=myReader15->GetValue(6)->ToString();

				  textBox67->Text=myReader15->GetValue(7)->ToString();	

				   String^ query16 = "select * from User_Elite where Client_name='"+ comboBox1->Text +"' and VchNo ="+textBox1->Text+" and SrNo=7";

				  OleDbDataReader^ myReader16=  CommonFunction::GetData(query16);
				  
				  myReader16->Read();

				  textBox8->Text=myReader16->GetValue(2)->ToString();

				  textBox55->Text=myReader16->GetValue(3)->ToString();
				
				  textBox15->Text=myReader16->GetValue(4)->ToString();

				  textBox22->Text=myReader16->GetValue(5)->ToString();
				
				  textBox29->Text=myReader16->GetValue(6)->ToString();

				  textBox68->Text=myReader16->GetValue(7)->ToString();	

				   String^ query17 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=8";

				  OleDbDataReader^ myReader17=  CommonFunction::GetData(query17);
				  
				  myReader17->Read();

				  textBox53->Text=myReader17->GetValue(2)->ToString();

				  textBox47->Text=myReader17->GetValue(3)->ToString();
				
				  textBox49->Text=myReader17->GetValue(4)->ToString();

				  textBox57->Text=myReader17->GetValue(5)->ToString();
				
				  textBox60->Text=myReader17->GetValue(6)->ToString();

				  textBox69->Text=myReader17->GetValue(7)->ToString();	

				  String^ query18 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=9";

				  OleDbDataReader^ myReader18=  CommonFunction::GetData(query18);
				  
				  myReader18->Read();

				  textBox45->Text=myReader18->GetValue(2)->ToString();

				  textBox48->Text=myReader18->GetValue(3)->ToString();
				
				  textBox50->Text=myReader18->GetValue(4)->ToString();

				  textBox58->Text=myReader18->GetValue(5)->ToString();
				
				  textBox61->Text=myReader18->GetValue(6)->ToString();

				  textBox70->Text=myReader18->GetValue(7)->ToString();

				  String^ query19 = "select * from User_Elite where  VchNo ="+textBox1->Text+" and SrNo=10";

				  OleDbDataReader^ myReader19=  CommonFunction::GetData(query19);
				  
				  myReader19->Read();

				  textBox46->Text=myReader19->GetValue(2)->ToString();

				  textBox36->Text=myReader19->GetValue(3)->ToString();
				
				  textBox51->Text=myReader19->GetValue(4)->ToString();

				  textBox59->Text=myReader19->GetValue(5)->ToString();
				
				  textBox62->Text=myReader19->GetValue(6)->ToString();

				  textBox71->Text=myReader19->GetValue(7)->ToString();
			 }

		 }

private: System::Void tableLayoutPanel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void UPDATE1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					 OleDbConnection^ myconnection = gcnew OleDbConnection();

					   myconnection->ConnectionString = path::Path;

					   myconnection->Open();	

					 if(UPDATE1->Checked)
					 {
				     OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
					 mycom1->Connection = myconnection;
						   
					 mycom1->CommandText = L" Update User_Elite set Qty = "+textBox9->Text+",Price="+textBox23->Text+",Amount="+textBox30->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=1";
			
					 mycom1->ExecuteNonQuery();	
					 MessageBox::Show("Record Updated Successfully");
					
					}
		 }
private: System::Void UPDATE2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					  OleDbConnection^ myconnection2 = gcnew OleDbConnection();

					   myconnection2->ConnectionString = path::Path;

					   myconnection2->Open();
					   if(UPDATE2->Checked)
					   {
						    OleDbCommand^ mycom2 = gcnew OleDbCommand();
							
							mycom2->Connection = myconnection2;

							mycom2->CommandText = L" Update User_Elite set Qty = "+textBox10->Text+",Price="+textBox24->Text+",Amount="+textBox31->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=2";
			
							 mycom2->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 
					  OleDbConnection^ myconnection3 = gcnew OleDbConnection();

					   myconnection3->ConnectionString = path::Path;

					   myconnection3->Open();
					   if(UPDATE3->Checked)
					   {
						    OleDbCommand^ mycom3 = gcnew OleDbCommand();
							
							mycom3->Connection = myconnection3;

							 mycom3->CommandText = L" Update User_Elite set Qty = "+textBox11->Text+",Price="+textBox25->Text+",Amount="+textBox32->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=3";
			
							 mycom3->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 
					  OleDbConnection^ myconnection4 = gcnew OleDbConnection();

					   myconnection4->ConnectionString = path::Path;

					   myconnection4->Open();
					   if(UPDATE4->Checked)
					   {
						    OleDbCommand^ mycom4 = gcnew OleDbCommand();
							
							mycom4->Connection = myconnection4;

							 mycom4->CommandText = L" Update User_Elite set Qty = "+textBox12->Text+",Price="+textBox26->Text+",Amount="+textBox33->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=4";
			
							 mycom4->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 
					  OleDbConnection^ myconnection5 = gcnew OleDbConnection();

					   myconnection5->ConnectionString = path::Path;

					   myconnection5->Open();
					   if(UPDATE5->Checked)
					   {
						    OleDbCommand^ mycom5 = gcnew OleDbCommand();
							
							mycom5->Connection = myconnection5;

							 mycom5->CommandText = L" Update User_Elite set Qty = "+textBox13->Text+",Price="+textBox27->Text+",Amount="+textBox34->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=5";
			
							 mycom5->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					  OleDbConnection^ myconnection6 = gcnew OleDbConnection();

					   myconnection6->ConnectionString = path::Path;

					   myconnection6->Open();
					   if(UPDATE6->Checked)
					   {
						    OleDbCommand^ mycom6 = gcnew OleDbCommand();
							
							mycom6->Connection = myconnection6;

							 mycom6->CommandText = L" Update User_Elite set Qty = "+textBox14->Text+",Price="+textBox28->Text+",Amount="+textBox35->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=6";
			
							 mycom6->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					   OleDbConnection^ myconnection7 = gcnew OleDbConnection();

					   myconnection7->ConnectionString = path::Path;

					   myconnection7->Open();
					   if(UPDATE7->Checked)
					   {
						    OleDbCommand^ mycom7 = gcnew OleDbCommand();
							
							mycom7->Connection = myconnection7;

							 mycom7->CommandText = L" Update User_Elite set Qty = "+textBox8->Text+",Price="+textBox22->Text+",Amount="+textBox29->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=7";
			
							 mycom7->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					   OleDbConnection^ myconnection8 = gcnew OleDbConnection();

					   myconnection8->ConnectionString = path::Path;

					   myconnection8->Open();
					   if(UPDATE8->Checked)
					   {
						    OleDbCommand^ mycom8 = gcnew OleDbCommand();
							
							mycom8->Connection = myconnection8;

							 mycom8->CommandText = L" Update User_Elite set Qty = "+textBox47->Text+",Price="+textBox57->Text+",Amount="+textBox60->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=8";
			
							 mycom8->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					  OleDbConnection^ myconnection9 = gcnew OleDbConnection();

					   myconnection9->ConnectionString = path::Path;

					   myconnection9->Open();
					   if(UPDATE9->Checked)
					   {
						    OleDbCommand^ mycom9 = gcnew OleDbCommand();
							
							mycom9->Connection = myconnection9;

							 mycom9->CommandText = L" Update User_Elite set Qty = "+textBox48->Text+",Price="+textBox58->Text+",Amount="+textBox61->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=9";
			
							 mycom9->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void UPDATE_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					   OleDbConnection^ myconnection10 = gcnew OleDbConnection();

					   myconnection10->ConnectionString = path::Path;

					   myconnection10->Open();
					   if(UPDATE->Checked)
					   {
						    OleDbCommand^ mycom10 = gcnew OleDbCommand();
							
							mycom10->Connection = myconnection10;

							 mycom10->CommandText = L" Update User_Elite set Qty = "+textBox36->Text+",Price="+textBox59->Text+",Amount="+textBox62->Text+",Date_D = '"+date+"' where VchNo ="+textBox1->Text+" and SrNo=10";
			
							 mycom10->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			


		 }
private: System::Void UPDATE_NAME_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

					OleDbConnection^ myconnection10 = gcnew OleDbConnection();

					myconnection10->ConnectionString = path::Path;

					myconnection10->Open();

					String^ query50 = "Select Address from Project where Client_names = '" + comboBox1->Text + "' ";

					OleDbCommand^ mycom24 = gcnew OleDbCommand(query50, myconnection10);
					mycom24->ExecuteNonQuery();

					OleDbDataReader^ myReader24 = mycom24->ExecuteReader();
					//				myReader24->Read();
					//				String^ addr = myReader24->GetValue(2)->ToString();
					while (myReader24->Read())
					{
						Addrss->Add(myReader24[0]);
					}

					  
					   if(UPDATE_NAME->Checked)
					   {
						    OleDbCommand^ mycom10 = gcnew OleDbCommand();
							
							mycom10->Connection = myconnection10;

							 mycom10->CommandText = L" Update User_Elite set Client_name = '"+comboBox1->Text+"',Address = '" + Addrss[0] + "' where VchNo ="+textBox1->Text+" ";
			
							 mycom10->ExecuteNonQuery();	
							 MessageBox::Show("Record Updated Successfully");
					   }

					 
		 }
private: System::Void VIEW_Click(System::Object^  sender, System::EventArgs^  e) {

			//if (Del == 1)
			//{
			//	//int i = 0;

			//	//OleDbConnection^ myconnection10 = gcnew OleDbConnection();

			//	//myconnection10->ConnectionString = path::Path;

			//	//myconnection10->Open();

			//	//String^ queryDelLst = "Select SrNo from User_Elite where VchNo=" + textBox1->Text + " ";

			//	//OleDbCommand^ mycom = gcnew OleDbCommand(queryDelLst, myconnection10);
			//	//mycom->ExecuteNonQuery();

			//	//OleDbDataReader^ myReader24 = mycom->ExecuteReader();
			//	////				myReader24->Read();
			//	////				String^ addr = myReader24->GetValue(2)->ToString();
			//	//while (myReader24->Read())
			//	//{
			//	//	DelList->Add(myReader24[0]);
			//	//}
			//	//
			//	//for (int i = 0; i < 10; i++)
			//	//{

			//	switch (Srno)
			//	{
			//	case 1:
			//		textBox2->Text = "#deleted";
			//		textBox9->Text = "#deleted";
			//		textBox16->Text = "#deleted";
			//		textBox23->Text = "#deleted";
			//		textBox30->Text = "#deleted";
			//		textBox52->Text = "#deleted";
			//		break;
			//	}
			//}

				/*}
			}		*/	 
			/*else
			{
			*/	String ^ query = "Select  count(*) from User_Elite where VchNo=" + textBox1->Text + " ";
				int a = CommonFunction::checkRecord(query);
				if (a <= 0)
				{
					MessageBox::Show("No record exists for this Client");
					return;
				}
				//value = 1;
				String^ query1 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo = 1";

				OleDbDataReader^ myReader1 = CommonFunction::GetData(query1);

				myReader1->Read();

				if (a == 1)
				{/*
					if (Srno)
					{
						textBox2->Text = "#deleted";
						textBox9->Text = "#deleted";
						textBox16->Text = "#deleted";
						textBox23->Text = "#deleted";
						textBox30->Text = "#deleted";
						textBox52->Text = "#deleted";
					}
					else {*/
						textBox2->Text = myReader1->GetValue(2)->ToString();

						textBox9->Text = myReader1->GetValue(3)->ToString();

						textBox16->Text = myReader1->GetValue(4)->ToString();

						textBox23->Text = myReader1->GetValue(5)->ToString();

						textBox30->Text = myReader1->GetValue(6)->ToString();

						textBox52->Text = myReader1->GetValue(7)->ToString();

						comboBox1->Text = myReader1->GetValue(10)->ToString();
			//		}
					//			  textBox5->Text=myReader1->GetValue(8)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();
				}
				else if (a == 2)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//	  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader1 = CommonFunction::GetData(query11);

					myReader1->Read();

					textBox3->Text = myReader1->GetValue(2)->ToString();

					textBox10->Text = myReader1->GetValue(3)->ToString();

					textBox17->Text = myReader1->GetValue(4)->ToString();

					textBox24->Text = myReader1->GetValue(5)->ToString();

					textBox31->Text = myReader1->GetValue(6)->ToString();

					textBox63->Text = myReader1->GetValue(7)->ToString();

				}
				else if (a == 3)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					// dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();
				}
				else if (a == 4)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();
				}
				else if (a == 5)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo =2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo = 3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo = 4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo = 5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();
				}
				else if (a == 6)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo = 2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();

					String^ query15 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo = 6";

					OleDbDataReader^ myReader15 = CommonFunction::GetData(query15);

					myReader15->Read();

					textBox7->Text = myReader15->GetValue(2)->ToString();

					textBox14->Text = myReader15->GetValue(3)->ToString();

					textBox21->Text = myReader15->GetValue(4)->ToString();

					textBox28->Text = myReader15->GetValue(5)->ToString();

					textBox35->Text = myReader15->GetValue(6)->ToString();

					textBox67->Text = myReader15->GetValue(7)->ToString();
				}
				else if (a == 7)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();

					String^ query15 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=6";

					OleDbDataReader^ myReader15 = CommonFunction::GetData(query15);

					myReader15->Read();

					textBox7->Text = myReader15->GetValue(2)->ToString();

					textBox14->Text = myReader15->GetValue(3)->ToString();

					textBox21->Text = myReader15->GetValue(4)->ToString();

					textBox28->Text = myReader15->GetValue(5)->ToString();

					textBox35->Text = myReader15->GetValue(6)->ToString();

					textBox67->Text = myReader15->GetValue(7)->ToString();

					String^ query16 = "select * from User_Elite where VchNo =" + textBox1->Text + " and SrNo=7";

					OleDbDataReader^ myReader16 = CommonFunction::GetData(query16);

					myReader16->Read();

					textBox8->Text = myReader16->GetValue(2)->ToString();

					textBox55->Text = myReader16->GetValue(3)->ToString();

					textBox15->Text = myReader16->GetValue(4)->ToString();

					textBox22->Text = myReader16->GetValue(5)->ToString();

					textBox29->Text = myReader16->GetValue(6)->ToString();

					textBox68->Text = myReader16->GetValue(7)->ToString();
				}
				else if (a == 8)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();

					String^ query15 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=6";

					OleDbDataReader^ myReader15 = CommonFunction::GetData(query15);

					myReader15->Read();

					textBox7->Text = myReader15->GetValue(2)->ToString();

					textBox14->Text = myReader15->GetValue(3)->ToString();

					textBox21->Text = myReader15->GetValue(4)->ToString();

					textBox28->Text = myReader15->GetValue(5)->ToString();

					textBox35->Text = myReader15->GetValue(6)->ToString();

					textBox67->Text = myReader15->GetValue(7)->ToString();

					String^ query16 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=7";

					OleDbDataReader^ myReader16 = CommonFunction::GetData(query16);

					myReader16->Read();

					textBox8->Text = myReader16->GetValue(2)->ToString();

					textBox55->Text = myReader16->GetValue(3)->ToString();

					textBox15->Text = myReader16->GetValue(4)->ToString();

					textBox22->Text = myReader16->GetValue(5)->ToString();

					textBox29->Text = myReader16->GetValue(6)->ToString();

					textBox68->Text = myReader16->GetValue(7)->ToString();

					String^ query17 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=8";

					OleDbDataReader^ myReader17 = CommonFunction::GetData(query17);

					myReader17->Read();

					textBox53->Text = myReader17->GetValue(2)->ToString();

					textBox47->Text = myReader17->GetValue(3)->ToString();

					textBox49->Text = myReader17->GetValue(4)->ToString();

					textBox57->Text = myReader17->GetValue(5)->ToString();

					textBox60->Text = myReader17->GetValue(6)->ToString();

					textBox69->Text = myReader17->GetValue(7)->ToString();
				}
				else if (a == 9)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();

					String^ query15 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=6";

					OleDbDataReader^ myReader15 = CommonFunction::GetData(query15);

					myReader15->Read();

					textBox7->Text = myReader15->GetValue(2)->ToString();

					textBox14->Text = myReader15->GetValue(3)->ToString();

					textBox21->Text = myReader15->GetValue(4)->ToString();

					textBox28->Text = myReader15->GetValue(5)->ToString();

					textBox35->Text = myReader15->GetValue(6)->ToString();

					textBox67->Text = myReader15->GetValue(7)->ToString();

					String^ query16 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=7";

					OleDbDataReader^ myReader16 = CommonFunction::GetData(query16);

					myReader16->Read();

					textBox8->Text = myReader16->GetValue(2)->ToString();

					textBox55->Text = myReader16->GetValue(3)->ToString();

					textBox15->Text = myReader16->GetValue(4)->ToString();

					textBox22->Text = myReader16->GetValue(5)->ToString();

					textBox29->Text = myReader16->GetValue(6)->ToString();

					textBox68->Text = myReader16->GetValue(7)->ToString();

					String^ query17 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=8";

					OleDbDataReader^ myReader17 = CommonFunction::GetData(query17);

					myReader17->Read();

					textBox53->Text = myReader17->GetValue(2)->ToString();

					textBox47->Text = myReader17->GetValue(3)->ToString();

					textBox49->Text = myReader17->GetValue(4)->ToString();

					textBox57->Text = myReader17->GetValue(5)->ToString();

					textBox60->Text = myReader17->GetValue(6)->ToString();

					textBox69->Text = myReader17->GetValue(7)->ToString();

					String^ query18 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=9";

					OleDbDataReader^ myReader18 = CommonFunction::GetData(query18);

					myReader18->Read();

					textBox45->Text = myReader18->GetValue(2)->ToString();

					textBox48->Text = myReader18->GetValue(3)->ToString();

					textBox50->Text = myReader18->GetValue(4)->ToString();

					textBox58->Text = myReader18->GetValue(5)->ToString();

					textBox61->Text = myReader18->GetValue(6)->ToString();

					textBox70->Text = myReader18->GetValue(7)->ToString();
				}
				else if (a == 10)
				{
					textBox2->Text = myReader1->GetValue(2)->ToString();

					textBox9->Text = myReader1->GetValue(3)->ToString();

					textBox16->Text = myReader1->GetValue(4)->ToString();

					textBox23->Text = myReader1->GetValue(5)->ToString();

					textBox30->Text = myReader1->GetValue(6)->ToString();

					textBox52->Text = myReader1->GetValue(7)->ToString();

					comboBox1->Text = myReader1->GetValue(10)->ToString();

					//				  dateTimePicker2->Text=myReader1->GetValue(7)->ToString();

					String^ query11 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=2";

					OleDbDataReader^ myReader11 = CommonFunction::GetData(query11);

					myReader11->Read();

					textBox3->Text = myReader11->GetValue(2)->ToString();

					textBox10->Text = myReader11->GetValue(3)->ToString();

					textBox17->Text = myReader11->GetValue(4)->ToString();

					textBox24->Text = myReader11->GetValue(5)->ToString();

					textBox31->Text = myReader11->GetValue(6)->ToString();

					textBox63->Text = myReader11->GetValue(7)->ToString();

					String^ query12 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=3";

					OleDbDataReader^ myReader12 = CommonFunction::GetData(query12);

					myReader12->Read();

					textBox4->Text = myReader12->GetValue(2)->ToString();

					textBox11->Text = myReader12->GetValue(3)->ToString();

					textBox18->Text = myReader12->GetValue(4)->ToString();

					textBox25->Text = myReader12->GetValue(5)->ToString();

					textBox32->Text = myReader12->GetValue(6)->ToString();

					textBox64->Text = myReader12->GetValue(7)->ToString();

					String^ query13 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=4";

					OleDbDataReader^ myReader13 = CommonFunction::GetData(query13);

					myReader13->Read();

					textBox5->Text = myReader13->GetValue(2)->ToString();

					textBox12->Text = myReader13->GetValue(3)->ToString();

					textBox19->Text = myReader13->GetValue(4)->ToString();

					textBox26->Text = myReader13->GetValue(5)->ToString();

					textBox33->Text = myReader13->GetValue(6)->ToString();

					textBox65->Text = myReader13->GetValue(7)->ToString();

					String^ query14 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=5";

					OleDbDataReader^ myReader14 = CommonFunction::GetData(query14);

					myReader14->Read();

					textBox6->Text = myReader14->GetValue(2)->ToString();

					textBox13->Text = myReader14->GetValue(3)->ToString();

					textBox20->Text = myReader14->GetValue(4)->ToString();

					textBox27->Text = myReader14->GetValue(5)->ToString();

					textBox34->Text = myReader14->GetValue(6)->ToString();

					textBox66->Text = myReader14->GetValue(7)->ToString();

					String^ query15 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=6";

					OleDbDataReader^ myReader15 = CommonFunction::GetData(query15);

					myReader15->Read();

					textBox7->Text = myReader15->GetValue(2)->ToString();

					textBox14->Text = myReader15->GetValue(3)->ToString();

					textBox21->Text = myReader15->GetValue(4)->ToString();

					textBox28->Text = myReader15->GetValue(5)->ToString();

					textBox35->Text = myReader15->GetValue(6)->ToString();

					textBox67->Text = myReader15->GetValue(7)->ToString();

					String^ query16 = "select * from User_Elite where Client_name='" + comboBox1->Text + "' and VchNo =" + textBox1->Text + " and SrNo=7";

					OleDbDataReader^ myReader16 = CommonFunction::GetData(query16);

					myReader16->Read();

					textBox8->Text = myReader16->GetValue(2)->ToString();

					textBox55->Text = myReader16->GetValue(3)->ToString();

					textBox15->Text = myReader16->GetValue(4)->ToString();

					textBox22->Text = myReader16->GetValue(5)->ToString();

					textBox29->Text = myReader16->GetValue(6)->ToString();

					textBox68->Text = myReader16->GetValue(7)->ToString();

					String^ query17 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=8";

					OleDbDataReader^ myReader17 = CommonFunction::GetData(query17);

					myReader17->Read();

					textBox53->Text = myReader17->GetValue(2)->ToString();

					textBox47->Text = myReader17->GetValue(3)->ToString();

					textBox49->Text = myReader17->GetValue(4)->ToString();

					textBox57->Text = myReader17->GetValue(5)->ToString();

					textBox60->Text = myReader17->GetValue(6)->ToString();

					textBox69->Text = myReader17->GetValue(7)->ToString();

					String^ query18 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=9";

					OleDbDataReader^ myReader18 = CommonFunction::GetData(query18);

					myReader18->Read();

					textBox45->Text = myReader18->GetValue(2)->ToString();

					textBox48->Text = myReader18->GetValue(3)->ToString();

					textBox50->Text = myReader18->GetValue(4)->ToString();

					textBox58->Text = myReader18->GetValue(5)->ToString();

					textBox61->Text = myReader18->GetValue(6)->ToString();

					textBox70->Text = myReader18->GetValue(7)->ToString();

					String^ query19 = "select * from User_Elite where  VchNo =" + textBox1->Text + " and SrNo=10";

					OleDbDataReader^ myReader19 = CommonFunction::GetData(query19);

					myReader19->Read();

					textBox46->Text = myReader19->GetValue(2)->ToString();

					textBox36->Text = myReader19->GetValue(3)->ToString();

					textBox51->Text = myReader19->GetValue(4)->ToString();

					textBox59->Text = myReader19->GetValue(5)->ToString();

					textBox62->Text = myReader19->GetValue(6)->ToString();

					textBox71->Text = myReader19->GetValue(7)->ToString();
				}
			
			
			
		 }
private: System::Void ADD_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

//			 String^ Path=	"C://Users/ss/Desktop/57F4/Debug/57F4.accdb";
//			 int i=0;
//			 i = Convert::ToInt32(ADD->Text); 
//
//			 DataTable^ table = gcnew DataTable(Path);
//			 
//			 DataRow^ row;
////			 row = "57F4.accdb"->NewRow();
//			 row = table->NewRow();
//			 for(int j=0;j<=i;j++)
//			 {
//				 if(i == 1)
//				 {
//				 foreach (DataColumn^ col in table->Columns)	{
//				 row = table->NewRow();	
//				 row["ProjectID"] = 5;
//				 row["SrNo"] = Convert::ToInt32(textBox39->Text);
//				 row["Item"] = textBox6->Text;
//				 row["Qty"]  = textBox13->Text;
//				 row["Unit"] = textBox20->Text;
//				 row["Price"]= textBox27->Text;
//				 row["Amount"]= textBox34->Text;
//				 row["Process"]=textBox66->Text;
//				 row["Date_D"] = date;
//				 row["VchNo"] = textBox1->Text;
//				 row["Client_name"] = comboBox1->Text;
//				 table->Rows->Add(row);
//				 }
// 				 }
//			 }


		//	 MessageBox::Show("Record Inserted Successfully");
		 }
private: System::Void ADD_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 if(ADD->Text == "")
			 {
				 errorProvider2->SetError(ADD,"Provide Number of records you want to add");
			 }
			 else
				 try{
					  no  = Convert::ToInt32(ADD->Text);	
					 errorProvider2->SetError(ADD,"");
			 }catch(System::Exception^ e)
			 {
				 errorProvider2->SetError(ADD,"Provide Number of records you want to add");
			 }
		 }
private: System::Void ADD_Btn_Click(System::Object^  sender, System::EventArgs^  e) {

			  String ^ query= "Select  count(*) from User_Elite where VchNo="+textBox1->Text+" ";
			 int a =  CommonFunction::checkRecord(query);
			 if(a <= 0)
			 {
				 MessageBox::Show("No record exists for this Client");
				 return;
			 }
//			 value = 1;
			 String^ query1 = "select * from User_Elite where VchNo ="+textBox1->Text+" and SrNo = 1";

		     OleDbDataReader^ myReader1=  CommonFunction::GetData(query1);

			 myReader1->Read();			 

		/*	 int no;
			 
			  no  = Convert::ToInt32(ADD->Text);	*/

			/* if(no == NULL || no == 0)
			 {
				 MessageBox::Show("Please select first number of records you want to add");
				 return;
			 }*/

			  if(ADD->Text == "")
			 {
				 errorProvider2->SetError(ADD,"Provide Number of records you want to add");
				 return;
			 }
			 else
				 try{
					  no  = Convert::ToInt32(ADD->Text);	
					 errorProvider2->SetError(ADD,"");
			 }catch(System::Exception^ e)
			 {
				 errorProvider2->SetError(ADD,"Provide Number of records you want to add");
				 return;
			 }
						
			  OleDbConnection^ myconnection = gcnew OleDbConnection();

			   myconnection->ConnectionString = path::Path;

			   myconnection->Open();
			 
			   OleDbCommand^ mycommand = gcnew OleDbCommand();

			   mycommand->Connection = myconnection;

			    String^ query18 = "select VchNo from User_Elite where  VchNo ="+textBox1->Text+"";
				
				OleDbDataReader^ myReader18=  CommonFunction::GetData(query18);

				myReader18->Read();

				String^ VCHNO = myReader18->GetValue(0)->ToString();

				String^ query24 = "Select Address from Project where Client_names = '"+comboBox1->Text+"' ";

				OleDbCommand^ mycom24 = gcnew OleDbCommand(query24,myconnection);
				mycom24->ExecuteNonQuery();
	
				OleDbDataReader^ myReader24=  mycom24->ExecuteReader();
//				myReader24->Read();
//				String^ addr = myReader24->GetValue(2)->ToString();
				while(myReader24->Read())
				{
				Addrss->Add(myReader24[0]);
				}

				String^ query25 = "Select ProjectID from Project where Client_names = '"+comboBox1->Text+"' ";
			
				OleDbCommand^ mycom = gcnew OleDbCommand(query25,myconnection);
				mycom->ExecuteNonQuery();
	
				OleDbDataReader^ myReader=  mycom->ExecuteReader();
				myReader->Read();

				if(! (myReader->HasRows))
				{
					MessageBox::Show("Please Select Party name!!");
					return;
				}
				int i = myReader->GetInt32(0);
				 GlobalID::prjID = i;

				  OleDbCommand^ mycom1 = gcnew OleDbCommand();
							
				  mycom1->Connection = myconnection;

					switch(a)
					{
						case 1:						
						
						switch(no)
						{
						case 1:														   							
						//	 String^ query20 = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycom1->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycom1->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
						//	 MessageBox::Show("Record Updated Successfully");
							break;
						case 2:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record Added succcessfully");	
							 break;
						case 3:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 4:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 5:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 6:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 7:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 8:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 9:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
						}
						break;

						case 2:

						switch(no)
						{
						case 1:														   							
						//	 String^ query20 = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox56->Text + ",'"+ textBox3->Text +"'," + textBox10->Text +",'"+ textBox17->Text +"',"+ textBox24->Text +","+ textBox31->Text + ",'"+ textBox63->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
						//	 MessageBox::Show("Record Updated Successfully");
							break;
						case 2:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 3:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 4:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							  MessageBox::Show("Record inserted succcessfully");
							break;
						case 5:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 6:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 7:
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						case 8:
							mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox37->Text + ",'"+ textBox4->Text +"'," + textBox11->Text +",'"+ textBox18->Text +"',"+ textBox25->Text +","+ textBox32->Text + ",'"+ textBox64->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
							 mycommand->ExecuteNonQuery();
							 MessageBox::Show("Record inserted succcessfully");
							break;
						}
						break;

						case 3:
							switch(no)
							{
								case 1:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									mycommand->ExecuteNonQuery();
									MessageBox::Show("Record inserted succcessfully");
									break;
								case 2:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  MessageBox::Show("Record inserted succcessfully");
									break;
								case 3:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  MessageBox::Show("Record inserted succcessfully");
									break;
								case 4:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  MessageBox::Show("Record inserted succcessfully");
									break;
								case 5:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
									break;
								case 6:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
									break;
								case 7:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox38->Text + ",'"+ textBox5->Text +"'," + textBox12->Text +",'"+ textBox19->Text +"',"+ textBox26->Text +","+ textBox33->Text + ",'"+ textBox65->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();	
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
									break;
							}
							break;

						case 4:
							switch(no)
							{
							case 1:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 2:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 3:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  MessageBox::Show("Record inserted succcessfully");
								break;
							case 4:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 5:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 6:
									  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox39->Text + ",'"+ textBox6->Text +"'," + textBox13->Text +",'"+ textBox20->Text +"',"+ textBox27->Text +","+ textBox34->Text + ",'"+ textBox66->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							}
							break;

						case 5:

							switch(no)
							{
							case 1:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 2:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									  MessageBox::Show("Record inserted succcessfully");
								break;
							case 3:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 4:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;

							case 5:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox40->Text + ",'"+ textBox7->Text +"'," + textBox14->Text +",'"+ textBox21->Text +"',"+ textBox28->Text +","+ textBox35->Text + ",'"+ textBox67->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							}

							break;

						case 6:

							switch(no)
							{
							case 1:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 2:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 3:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 4:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox41->Text + ",'"+ textBox55->Text +"'," + textBox8->Text +",'"+ textBox15->Text +"',"+ textBox22->Text +","+ textBox29->Text + ",'"+ textBox68->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;

							}
							break;

						case 7:

							switch(no)
							{
							case 1:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 2:
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							case 3:
									  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox42->Text + ",'"+ textBox53->Text +"'," + textBox47->Text +",'"+ textBox49->Text +"',"+ textBox57->Text +","+ textBox60->Text + ",'"+ textBox69->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									 mycommand->ExecuteNonQuery();
									 MessageBox::Show("Record inserted succcessfully");
								break;
							}
						break;

						case 8:
							switch(no)
							{
							case 1:
								 mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
								 mycommand->ExecuteNonQuery();
								 MessageBox::Show("Record inserted succcessfully");
								 break;

							case 2:
								  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox43->Text + ",'"+ textBox45->Text +"'," + textBox48->Text +",'"+ textBox50->Text +"',"+ textBox58->Text +","+ textBox61->Text + ",'"+ textBox70->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
								  mycommand->ExecuteNonQuery();
								  mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
								  mycommand->ExecuteNonQuery();
								  MessageBox::Show("Record inserted succcessfully");
								break;
							}
							break;

						case 9:
							 switch(no)
							 {
							 case 1:
									mycommand->CommandText = L"Insert into User_Elite(ProjectID,SrNo,Item,Qty,Unit,Price,Amount,Process,Date_D,VchNo,Client_name,Address)" + "VALUES ("+ GlobalID::prjID +"," + textBox44->Text + ",'"+ textBox46->Text +"'," + textBox36->Text +",'"+ textBox51->Text +"',"+ textBox59->Text +","+ textBox62->Text + ",'"+ textBox71->Text +"','"+date+"',"+VCHNO+",'"+comboBox1->Text+"','"+Addrss[0]+"')";
									mycommand->ExecuteNonQuery();
									MessageBox::Show("Record inserted succcessfully");
								 break;
							 }

							break;
					}
										
		 }
private: System::Void DELETE_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			Del = 1;
			int j = 1;
			String ^ query = "Select  count(*) from User_Elite where VchNo=" + textBox1->Text + " ";
			int a = CommonFunction::checkRecord(query);
			if (a <= 0)
			{
				MessageBox::Show("No record exists for this Client");
				return;
			}

			if (DELETE_cmb->Text == "")
			{
				errorProvider3->SetError(DELETE_cmb, "Provide Number of records you want to add");
				return;
			}
			else
				try {
				 Srno = Convert::ToInt32(DELETE_cmb->Text);
				errorProvider3->SetError(DELETE_cmb, "");
			}
			catch (System::Exception^ e)
			{
				errorProvider3->SetError(DELETE_cmb, "Provide Number of records you want to add");
				return;
			}
			
			OleDbConnection^ myconnection = gcnew OleDbConnection();

			myconnection->ConnectionString = path::Path;

			myconnection->Open();

			OleDbCommand^ mycommand = gcnew OleDbCommand();

			mycommand->Connection = myconnection;

			String^ querydel = "Delete from User_Elite where SrNo = "+ Srno +"  and VchNo =" + textBox1->Text + "";

			OleDbCommand^ mycom24 = gcnew OleDbCommand(querydel, myconnection);
			mycom24->ExecuteNonQuery();

		
			String^ queryDelLst = "Select SrNo from User_Elite where VchNo=" + textBox1->Text + " ";

			OleDbCommand^ mycom = gcnew OleDbCommand(queryDelLst, myconnection);
			mycom->ExecuteNonQuery();

			OleDbDataReader^ myReader24 = mycom->ExecuteReader();
			//				myReader24->Read();
			//				String^ addr = myReader24->GetValue(2)->ToString();
			while (myReader24->Read())
			{
				DelList->Add(myReader24[0]);
			}
			printf("%d\n", sizeof(DelList));
			int cnt = sizeof(DelList);
			for (i = 0; i < DelList->Count; i++)
			{	
			
				if (!(DelList[i] == j))
				{
					String^ queryDelUpdt = "Update User_Elite Set SrNo = "+j+" where SrNo = " + DelList[i] + " and VchNo=" + textBox1->Text + " ";
					OleDbCommand^ mycomDU = gcnew OleDbCommand(queryDelUpdt, myconnection);
					mycomDU->ExecuteNonQuery();

					DelList[i] = j;
				//	j++;
				}				
				j++;
			}		
			MessageBox::Show("Record Deleted Successfully");
}
};
}
	