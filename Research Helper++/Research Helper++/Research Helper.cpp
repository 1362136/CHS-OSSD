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
	
	//All the items related to "Search" tab are here
	System::Void ResearchHelper::Backwards_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->GoBack();
	}

	System::Void ResearchHelper::Forward_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->GoForward();
	}

	System::Void ResearchHelper::Go_btn_Click(System::Object^  sender, System::EventArgs^  e){
		this->webBrowser1->Navigate(this->searchBox->Text);
	}
	//All items related to "Log" tab are hear
	System::Void ResearchHelper::newEntry_Click(System::Object^  sender, System::EventArgs^  e){
		this->dailyLog->Text = dailyLog->Text + "\r\n" + Convert::ToString(DateTime::Now) + ":" + "\r\n";
	}

	System::Void ResearchHelper::clearEntires_Click(System::Object^  sender, System::EventArgs^  e){
		dailyLog->Text = "";
	}

	System::Void ResearchHelper::saveEntries_Click(System::Object^  sender, System::EventArgs^  e){
		String^ fileName = "Log.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(dailyLog->Text);
		sw->Close();
	}
}
