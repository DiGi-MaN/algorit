#include "MyForm.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	forma::MyForm form; //WinFormsTest - ��� ������ �������
	Application::Run(% form);
}
