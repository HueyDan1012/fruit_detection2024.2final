
#include "form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Replace "FruitWorld101" with your actual namespace if different
    FruitWorld101::form1^ mainForm = gcnew FruitWorld101::form1("");
    Application::Run(mainForm);
}
