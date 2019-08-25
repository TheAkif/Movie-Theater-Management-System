
#include "Movie Theatre Managment System.h"
#include "programming.h"
#include "Login Form.h"
#include "Bill.h"
//#include "Admin"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]


int main() {

//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	CP_Project::MovieTheatreManagmentSystem LoginForm;
//	Application::Run(%LoginForm);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CP_Project::LoginForm Form2;
	Application::Run(%Form2);

}