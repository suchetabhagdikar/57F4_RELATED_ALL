#pragma once

namespace My57F4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;

	ref class path
{
public:
	//static String^ Path=Application::StartupPath + "\\TestPRJ.accdb";

	static String^ Path=	"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + Application::StartupPath + "\\57F4.accdb";

	//MessageBox::Show(Application::StartupPath);
};
}
