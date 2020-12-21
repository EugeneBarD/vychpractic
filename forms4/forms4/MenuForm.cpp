#pragma once
#include "MenuForm.h"
#include "level1.h"
#include "settings.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	forms4::MenuForm form;
	forms4::level1 formLevel1;
	forms4::settings setting;
	Application::Run(%form);
}