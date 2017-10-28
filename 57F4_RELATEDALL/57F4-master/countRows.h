#pragma once
#include"path.h"
#include"SerialNo.h"
#include"GlobalID.h"

namespace My57F4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	
public ref class countRows
{

public:
	static int countR;
};


public ref class CommonFunction
{
	public: static System::Data::OleDb::OleDbDataReader^ GetData(System::String^ strQuery)
		{
			OleDbConnection^ myconnection1 = gcnew OleDbConnection();

			//myconnection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";

			myconnection1->ConnectionString = path::Path;

			myconnection1->Open();	

			OleDbCommand^ mycomm1 = gcnew OleDbCommand(strQuery,myconnection1);

			OleDbDataReader^ myReader1 = mycomm1->ExecuteReader();
			return myReader1;
		}


		public: static int GetMaxID()	
		{
			
			String^ query = "Select  iif( MAX(SrNo) is null,0,max(SrNo)) from PrjSrNo";									//where ProjectID=" + (GlobalID::prjID) +" ";
	
			OleDbConnection^ myconnection1 = gcnew OleDbConnection();

		//	myconnection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";

			myconnection1->ConnectionString =path::Path;

			myconnection1->Open();	


			OleDbCommand^ mycomm1 = gcnew OleDbCommand(query,myconnection1);
			OleDbDataReader^ myReader1 = mycomm1->ExecuteReader();
			myReader1->Read();
			Console::WriteLine("Reached Uptill here..");

			SerialNo::Serialno=myReader1->GetInt32(0);
//			SerialNo::Serialno=SerialNo::Serialno+1;
			//myReader1=SerialNo::Serialno;
			//return myReader1;							//->ToInt32();
			return SerialNo::Serialno+1;	
		}

		public: static int GetMaxVchNo()	
		{
			
			String^ query = "Select  iif( MAX(VchNo) is null,0,max(VchNo)) from PrjSrNo";									//where ProjectID=" + (GlobalID::prjID) +" ";
	
			OleDbConnection^ myconnection1 = gcnew OleDbConnection();

		//	myconnection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";

			myconnection1->ConnectionString =path::Path;

			myconnection1->Open();	


			OleDbCommand^ mycomm1 = gcnew OleDbCommand(query,myconnection1);
			OleDbDataReader^ myReader1 = mycomm1->ExecuteReader();
			myReader1->Read();
			Console::WriteLine("Reached Uptill here..");

			SerialNo::Serialno=myReader1->GetInt32(0);
//			SerialNo::Serialno=SerialNo::Serialno+1;
			//myReader1=SerialNo::Serialno;
			//return myReader1;							//->ToInt32();
			return GlobalID::vchno+1;	
		}
			public: static int checkRecord(System::String^ strQuery)
				{
					int myint=0;
			//		MessageBox::Show(GlobalID::prjID);
			//		String^ query = "Select  count(*) from ReferencePlaneSurface1 where ProjectID=" + (GlobalID::prjID) +" ";
					OleDbConnection^ myconnection1 = gcnew OleDbConnection();

				//	myconnection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\TestPRJ.accdb";

					myconnection1->ConnectionString = path::Path;

					myconnection1->Open();	
					OleDbCommand^ mycom = gcnew OleDbCommand(strQuery,myconnection1);
					//mycom->ExecuteNonQuery();

					OleDbDataReader^ myReader=  mycom->ExecuteReader();
					myReader->Read();

					myint = myReader->GetInt32(0);
				
					return myint;
						
				}
};
}
//};