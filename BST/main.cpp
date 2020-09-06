#include "ui.h"
#include<iostream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BST::ui ui1;
	Application::Run(%ui1);
	BST::display d1;
}