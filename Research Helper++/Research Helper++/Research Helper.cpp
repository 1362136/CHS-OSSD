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
	
	//All the items related to "Search Section are here"
	System::Void ResearchHelper::Backwards_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->GoBack();
	}

	System::Void ResearchHelper::Forward_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->GoForward();
	}

	System::Void ResearchHelper::Go_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->Navigate(this->searchBox->Text);
	}
}
