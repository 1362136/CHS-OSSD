#include "Research Helper.h"

using namespace ResearchHelperSpace;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew ResearchHelperSpace::ResearchHelper());

	return 0;
}

namespace ResearchHelperSpace{

	System::Void ResearchHelper::ResearchHelper_Load(System::Object^  sender, System::EventArgs^  e){
		// TODO something at form load
	}
}