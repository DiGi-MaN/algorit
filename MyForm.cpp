#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	complex::MyForm form; //WinFormsTest - имя вашего проекта
	Application::Run(% form);
}
