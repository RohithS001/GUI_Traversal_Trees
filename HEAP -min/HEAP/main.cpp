#include "ui.h"
#include "disp.h"
//#include<iostream>
//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HEAP::ui ui2;
	//HEAP::disp ui1;
	Application::Run(%ui2);
	//Application::Run(%ui1);
}