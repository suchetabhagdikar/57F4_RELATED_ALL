#pragma once
#include<stdio.h>
#include"path.h"
#include"GlobalID.h"
#include"countRows.h"

namespace My57F4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for ClientDetails
	/// </summary>
	public ref class ClientDetails : public System::Windows::Forms::Form
	{
	public:
		ClientDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		static	ArrayList ^ NameValues=gcnew ArrayList();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Name;
	private: System::Windows::Forms::Label^  Address;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  Name_of_Form;
	private: System::Windows::Forms::Button^  Quit;
	private: System::Windows::Forms::Button^  Save;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Address = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Name_of_Form = (gcnew System::Windows::Forms::Label());
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// Name
			// 
			this->Name->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->Name->Location = System::Drawing::Point(365, 214);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(77, 23);
			this->Name->TabIndex = 0;
			this->Name->Text = L"Name:";
			// 
			// Address
			// 
			this->Address->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Address->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->Address->Location = System::Drawing::Point(365, 272);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(77, 23);
			this->Address->TabIndex = 1;
			this->Address->Text = L"Address:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(470, 214);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &ClientDetails::textBox1_Validating);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(470, 270);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(212, 91);
			this->textBox2->TabIndex = 3;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &ClientDetails::textBox2_Validating);
			// 
			// Name_of_Form
			// 
			this->Name_of_Form->Font = (gcnew System::Drawing::Font(L"Arial", 9, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Name_of_Form->ForeColor = System::Drawing::Color::Yellow;
			this->Name_of_Form->Location = System::Drawing::Point(498, 9);
			this->Name_of_Form->Name = L"Name_of_Form";
			this->Name_of_Form->Size = System::Drawing::Size(184, 23);
			this->Name_of_Form->TabIndex = 31;
			this->Name_of_Form->Text = L"Client Details";
			// 
			// Quit
			// 
			this->Quit->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Quit->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Quit->Location = System::Drawing::Point(593, 428);
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(89, 46);
			this->Quit->TabIndex = 33;
			this->Quit->Text = L"QUIT";
			this->Quit->UseVisualStyleBackColor = false;
			this->Quit->Click += gcnew System::EventHandler(this, &ClientDetails::Quit_Click);
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Save->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Save->Location = System::Drawing::Point(470, 428);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(89, 46);
			this->Save->TabIndex = 32;
			this->Save->Text = L"SAVE";
			this->Save->UseVisualStyleBackColor = false;
			this->Save->Click += gcnew System::EventHandler(this, &ClientDetails::Save_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// ClientDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1076, 750);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->Name_of_Form);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Name);
//			this->Name = L"ClientDetails";
			this->Text = L"ClientDetails";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ClientDetails::ClientDetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClientDetails_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {

			 //int i = CommonFunction:: GetMaxID();
//			 Save->Enabled = true;
			 String ^query = "Select ALL(Client_names) from Project";							//where Name = " +textBox1->Text+"";
			 String^ name = textBox1->Text;
			 OleDbDataReader^ myReader1=  CommonFunction::GetData(query);

	//		 myReader1->Read();
			 while(myReader1->Read())
			 {
				 NameValues->Add(myReader1[0]);
			 }

				for(int i=0;i < NameValues->Count; i++)
				 {					
					 Object^ nme = NameValues[i];
					 String^ newnm = safe_cast<String^>(nme);
					 if(newnm->Equals(name,StringComparison::OrdinalIgnoreCase))
					 {
						 errorProvider1->SetError(this->textBox1,"Name of this Client already exists in system");
//						 
						 return;
					 }
				 }

//			 if(myReader1->HasRows)
//			 { 

			// String^ name = myReader1->GetValue(0)->ToString();

			// if(textBox1->Text == name)
			// {
			//	 errorProvider1->SetError(textBox1,"Name of this Client already exists in system");
			////	 Save->Enabled = false;
			//	 return;
			// }
			// else 
			 if(textBox1->Text == "")
			 {
				  errorProvider1->SetError(textBox1,"Field cannot be blank");
			 }
			 //else
			 //{
				//  String^ str = textBox1->Text;

				//array<Char>^ character_array = str->ToCharArray();

				////   Console::WriteLine(str);
				//   for (int i = 0; i < character_array->Length; i++)
				//	 {
				//	    if (( character_array[i] >= L'a' && character_array[i] <= 'z')|| ( character_array[i] >= L'A' && character_array[i] <= 'Z') || ( character_array[i] >= L'0' && character_array[i] <= '9') )
				//		   {
				//				//	Console::WriteLine("Good values provided!!");
				//					 errorProvider1->SetError(textBox1,"");											 
				//			}					
				//		else
				//		{
				//		//	Console::WriteLine("No Matching values provided!!");													
				//			 errorProvider1->SetError(textBox1,"Enter a numeric or text value");
				//			 return;
				//		}
				//	  }		
			 //}
//			 }			
			  if(textBox2->Text == "")
					 {					   					 
					  errorProvider2->SetError(textBox2,"Field cannot be blank");
					  return;
				     }
			  else{
			 // String^ str = textBox2->Text;

				//array<Char>^ character_array = str->ToCharArray();

				////   Console::WriteLine(str);
				//   for (int i = 0; i < character_array->Length; i++)
				//	 {
				//		 if (( character_array[i] >= L'a' && character_array[i] <= 'z')|| ( character_array[i] >= L'A' && character_array[i] <= 'Z') || ( character_array[i] >= L'0' && character_array[i] <= '9' )|| (character_array[i]=='-') || (character_array[i]==NULL))
				//		   {
				//				//	Console::WriteLine("Good values provided!!");
				//					 errorProvider2->SetError(textBox2,"");											 
				//			}					
				//		else
				//		{
				//		//	Console::WriteLine("No Matching values provided!!");													
				//			 errorProvider2->SetError(textBox2,"Enter a numeric or text value");
				//			 return;
				//		}
				//	  }		

					   OleDbConnection^ myconnection = gcnew OleDbConnection();

						// myconnection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";

						 myconnection->ConnectionString = path::Path;

						 myconnection->Open();
				 				 
						  OleDbCommand^ mycommand = gcnew OleDbCommand();

						  mycommand->Connection = myconnection;
				  
						  mycommand->CommandText = L"Insert into Project(Client_names,Address)" + "VALUES ('" + textBox1->Text + "','"+ textBox2->Text +"')";

						  mycommand->ExecuteNonQuery();
						  MessageBox::Show("Record Inserted Successfully");
						  Application::Exit();
			  }     
					
				
						 Save->Enabled = true;					
		 }
private: System::Void Quit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {


			 /*String^ query = "Select ProjectID from Project where Name = '"+textBox1->Text+"' ";
			
			 OleDbConnection^ myconnection = gcnew OleDbConnection();

			 myconnection->ConnectionString = path::Path;

			 myconnection->Open();
			 OleDbCommand^ mycom = gcnew OleDbCommand(query,myconnection);
			 mycom->ExecuteNonQuery();

				OleDbDataReader^ myReader1 = mycom->ExecuteReader();
			    myReader1->Read();

				if(myReader1->HasRows)
				{				

				 String ^query = "Select Name from Project where Name = " +textBox1->Text+"";

				 OleDbDataReader^ myReader1=  CommonFunction::GetData(query);

				 myReader1->Read();

				 String^ name = myReader1->GetValue(0)->ToString();*/

			    String ^query9 = "Select ALL(Client_names) from Project";							//where Name = " +textBox1->Text+"";
			
				String^ name = textBox1->Text;

				 OleDbDataReader^ myReader1=CommonFunction::GetData(query9);

		//		 myReader1->Read();
				 while(myReader1->Read())
				 {
					 NameValues->Add(myReader1[0]);
				 }

				 if(NameValues->Count == 0)
				 {
						MessageBox::Show("No Record Exists");
				 }

				 for(int i=0;i < NameValues->Count; i++)
				 {
					/* Object^ nme = NameValues[i];
					 Object^ obnm = name;
					 if(nme == obnm)
					 {
						 errorProvider1->SetError(textBox1,"Name of this Client already exists in system");
					 }*/
					/* Object^ obnm = safe_cast<Object^>(name);
					 NameValues[i]->Contains(name);*/

					 Object^ nme = NameValues[i];
					 String^ newnm = safe_cast<String^>(nme);
					 if(newnm->Equals(name,StringComparison::OrdinalIgnoreCase))
					 {
						 errorProvider1->SetError(this->textBox1,"Name of this Client already exists in system");
//						 MessageBox::Show("Name already exists");
						 return;
					 }
				 }

				 if(textBox1->Text == "")
				 {
					  errorProvider1->SetError(textBox1,"Field cannot be blank");
				 }
				 else
				 {
					 errorProvider1->SetError(textBox1,"");
				 }
//				}

		 }
private: System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 //String^ str = textBox2->Text;

				//array<Char>^ character_array = str->ToCharArray();

				//   Console::WriteLine(str);
				//   for (int i = 0; i < character_array->Length; i++)
				//	 {
				//	    if (( character_array[i] >= L'a' && character_array[i] <= 'z')|| ( character_array[i] >= L'A' && character_array[i] <= 'Z') || ( character_array[i] >= L'0' && character_array[i] <= '9') || (character_array[i] == '-'))
				//		   {
				//				//	Console::WriteLine("Good values provided!!");
				//					 errorProvider2->SetError(textBox2,"");						
				//			}					
				//		else
				//		{
				//		//	Console::WriteLine("No Matching values provided!!");													
				//			 errorProvider2->SetError(textBox2,"Enter a numeric or text value");
				//		}
				//	  }				   			
				//	     
				//	 if(textBox2->Text == "")
				//	 {					   					 
				//	  errorProvider2->SetError(textBox2,"Field cannot be blank");
				//     }
		 }
};
}
