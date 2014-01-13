#pragma once

namespace ResearchHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResearchHelper
	/// </summary>
	public ref class ResearchHelper : public System::Windows::Forms::Form //class strarts here in namespace
	{
	public:
		ResearchHelper(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResearchHelper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  LogTab;
	private: System::Windows::Forms::TabPage^  NotesTabs;
	private: System::Windows::Forms::TabPage^  EDDTab;
	private: System::Windows::Forms::TabPage^  DataTab;
	protected:

	protected:




	private: System::Windows::Forms::TabPage^  SearchTab;
	private: System::Windows::Forms::Button^  Go_btn;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  Forward_btn;
	private: System::Windows::Forms::Button^  Backwards_btn;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResearchHelper::typeid));
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->LogTab = (gcnew System::Windows::Forms::TabPage());
			this->NotesTabs = (gcnew System::Windows::Forms::TabPage());
			this->EDDTab = (gcnew System::Windows::Forms::TabPage());
			this->DataTab = (gcnew System::Windows::Forms::TabPage());
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->Backwards_btn = (gcnew System::Windows::Forms::Button());
			this->Forward_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Go_btn = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			this->SearchTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->EDDTab);
			this->tabControl->Controls->Add(this->LogTab);
			this->tabControl->Controls->Add(this->NotesTabs);
			this->tabControl->Controls->Add(this->DataTab);
			this->tabControl->Controls->Add(this->SearchTab);
			this->tabControl->Location = System::Drawing::Point(12, 12);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1353, 722);
			this->tabControl->TabIndex = 0;
			// 
			// LogTab
			// 
			this->LogTab->Location = System::Drawing::Point(4, 22);
			this->LogTab->Name = L"LogTab";
			this->LogTab->Padding = System::Windows::Forms::Padding(3);
			this->LogTab->Size = System::Drawing::Size(1345, 696);
			this->LogTab->TabIndex = 0;
			this->LogTab->Text = L"Log";
			this->LogTab->UseVisualStyleBackColor = true;
			// 
			// NotesTabs
			// 
			this->NotesTabs->Location = System::Drawing::Point(4, 22);
			this->NotesTabs->Name = L"NotesTabs";
			this->NotesTabs->Padding = System::Windows::Forms::Padding(3);
			this->NotesTabs->Size = System::Drawing::Size(1345, 696);
			this->NotesTabs->TabIndex = 1;
			this->NotesTabs->Text = L"Notes";
			this->NotesTabs->UseVisualStyleBackColor = true;
			// 
			// EDDTab
			// 
			this->EDDTab->Location = System::Drawing::Point(4, 22);
			this->EDDTab->Name = L"EDDTab";
			this->EDDTab->Padding = System::Windows::Forms::Padding(3);
			this->EDDTab->Size = System::Drawing::Size(1345, 696);
			this->EDDTab->TabIndex = 2;
			this->EDDTab->Text = L"EDD";
			this->EDDTab->UseVisualStyleBackColor = true;
			// 
			// DataTab
			// 
			this->DataTab->Location = System::Drawing::Point(4, 22);
			this->DataTab->Name = L"DataTab";
			this->DataTab->Padding = System::Windows::Forms::Padding(3);
			this->DataTab->Size = System::Drawing::Size(1345, 696);
			this->DataTab->TabIndex = 3;
			this->DataTab->Text = L"Data";
			this->DataTab->UseVisualStyleBackColor = true;
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->Go_btn);
			this->SearchTab->Controls->Add(this->textBox1);
			this->SearchTab->Controls->Add(this->Forward_btn);
			this->SearchTab->Controls->Add(this->Backwards_btn);
			this->SearchTab->Controls->Add(this->webBrowser1);
			this->SearchTab->Location = System::Drawing::Point(4, 22);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(3);
			this->SearchTab->Size = System::Drawing::Size(1345, 696);
			this->SearchTab->TabIndex = 4;
			this->SearchTab->Text = L"Search Web";
			this->SearchTab->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(3, 35);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1339, 661);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.jstor.org/", System::UriKind::Absolute));
			// 
			// Backwards_btn
			// 
			this->Backwards_btn->Location = System::Drawing::Point(6, 6);
			this->Backwards_btn->Name = L"Backwards_btn";
			this->Backwards_btn->Size = System::Drawing::Size(75, 23);
			this->Backwards_btn->TabIndex = 1;
			this->Backwards_btn->Text = L"Backwards";
			this->Backwards_btn->UseVisualStyleBackColor = true;
			// 
			// Forward_btn
			// 
			this->Forward_btn->Location = System::Drawing::Point(87, 6);
			this->Forward_btn->Name = L"Forward_btn";
			this->Forward_btn->Size = System::Drawing::Size(75, 23);
			this->Forward_btn->TabIndex = 2;
			this->Forward_btn->Text = L"Forward";
			this->Forward_btn->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1094, 20);
			this->textBox1->TabIndex = 3;
			// 
			// Go_btn
			// 
			this->Go_btn->Location = System::Drawing::Point(1269, 6);
			this->Go_btn->Name = L"Go_btn";
			this->Go_btn->Size = System::Drawing::Size(70, 23);
			this->Go_btn->TabIndex = 4;
			this->Go_btn->Text = L"Go";
			this->Go_btn->UseVisualStyleBackColor = true;
			// 
			// ResearchHelper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1377, 746);
			this->Controls->Add(this->tabControl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ResearchHelper";
			this->Text = L"ResearchHelper";
			this->Load += gcnew System::EventHandler(this, &ResearchHelper::ResearchHelper_Load);
			this->tabControl->ResumeLayout(false);
			this->SearchTab->ResumeLayout(false);
			this->SearchTab->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	// here and below is in .cpp file
	private: System::Void ResearchHelper_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
