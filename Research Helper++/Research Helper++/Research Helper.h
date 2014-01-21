#pragma once

namespace ResearchHelperSpace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::TextBox^  searchBox;


	private: System::Windows::Forms::Button^  Forward_btn;
	private: System::Windows::Forms::Button^  Backwards_btn;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  clearEntires;

	private: System::Windows::Forms::Button^  saveEntries;
	private: System::Windows::Forms::Button^  newEntry;
	private: System::Windows::Forms::TextBox^  dailyLog;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;



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
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->EDDTab = (gcnew System::Windows::Forms::TabPage());
			this->LogTab = (gcnew System::Windows::Forms::TabPage());
			this->clearEntires = (gcnew System::Windows::Forms::Button());
			this->saveEntries = (gcnew System::Windows::Forms::Button());
			this->newEntry = (gcnew System::Windows::Forms::Button());
			this->dailyLog = (gcnew System::Windows::Forms::TextBox());
			this->NotesTabs = (gcnew System::Windows::Forms::TabPage());
			this->DataTab = (gcnew System::Windows::Forms::TabPage());
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->Go_btn = (gcnew System::Windows::Forms::Button());
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->Forward_btn = (gcnew System::Windows::Forms::Button());
			this->Backwards_btn = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl->SuspendLayout();
			this->EDDTab->SuspendLayout();
			this->LogTab->SuspendLayout();
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
			// EDDTab
			// 
			this->EDDTab->Controls->Add(this->label1);
			this->EDDTab->Location = System::Drawing::Point(4, 22);
			this->EDDTab->Name = L"EDDTab";
			this->EDDTab->Padding = System::Windows::Forms::Padding(3);
			this->EDDTab->Size = System::Drawing::Size(1345, 696);
			this->EDDTab->TabIndex = 2;
			this->EDDTab->Text = L"EDD";
			this->EDDTab->UseVisualStyleBackColor = true;
			// 
			// LogTab
			// 
			this->LogTab->Controls->Add(this->textBox1);
			this->LogTab->Controls->Add(this->clearEntires);
			this->LogTab->Controls->Add(this->saveEntries);
			this->LogTab->Controls->Add(this->newEntry);
			this->LogTab->Controls->Add(this->dailyLog);
			this->LogTab->Location = System::Drawing::Point(4, 22);
			this->LogTab->Name = L"LogTab";
			this->LogTab->Padding = System::Windows::Forms::Padding(3);
			this->LogTab->Size = System::Drawing::Size(1345, 696);
			this->LogTab->TabIndex = 0;
			this->LogTab->Text = L"Log";
			this->LogTab->UseVisualStyleBackColor = true;
			// 
			// clearEntires
			// 
			this->clearEntires->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearEntires->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearEntires->ForeColor = System::Drawing::Color::Red;
			this->clearEntires->Location = System::Drawing::Point(1250, 260);
			this->clearEntires->Name = L"clearEntires";
			this->clearEntires->Size = System::Drawing::Size(88, 73);
			this->clearEntires->TabIndex = 3;
			this->clearEntires->Text = L"Clear Entires";
			this->clearEntires->UseVisualStyleBackColor = true;
			this->clearEntires->Click += gcnew System::EventHandler(this, &ResearchHelper::clearEntires_Click);
			// 
			// saveEntries
			// 
			this->saveEntries->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveEntries->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveEntries->ForeColor = System::Drawing::Color::Indigo;
			this->saveEntries->Location = System::Drawing::Point(1250, 86);
			this->saveEntries->Name = L"saveEntries";
			this->saveEntries->Size = System::Drawing::Size(88, 73);
			this->saveEntries->TabIndex = 2;
			this->saveEntries->Text = L"Save Enties As";
			this->saveEntries->UseVisualStyleBackColor = true;
			this->saveEntries->Click += gcnew System::EventHandler(this, &ResearchHelper::saveEntries_Click);
			// 
			// newEntry
			// 
			this->newEntry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newEntry->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newEntry->ForeColor = System::Drawing::Color::Teal;
			this->newEntry->Location = System::Drawing::Point(1250, 7);
			this->newEntry->Name = L"newEntry";
			this->newEntry->Size = System::Drawing::Size(88, 73);
			this->newEntry->TabIndex = 1;
			this->newEntry->Text = L"New Entry";
			this->newEntry->UseVisualStyleBackColor = true;
			this->newEntry->Click += gcnew System::EventHandler(this, &ResearchHelper::newEntry_Click);
			// 
			// dailyLog
			// 
			this->dailyLog->AcceptsReturn = true;
			this->dailyLog->AcceptsTab = true;
			this->dailyLog->BackColor = System::Drawing::SystemColors::Info;
			this->dailyLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dailyLog->Location = System::Drawing::Point(7, 7);
			this->dailyLog->Multiline = true;
			this->dailyLog->Name = L"dailyLog";
			this->dailyLog->Size = System::Drawing::Size(1237, 683);
			this->dailyLog->TabIndex = 0;
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
			this->SearchTab->Controls->Add(this->searchBox);
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
			// Go_btn
			// 
			this->Go_btn->Location = System::Drawing::Point(1269, 6);
			this->Go_btn->Name = L"Go_btn";
			this->Go_btn->Size = System::Drawing::Size(70, 23);
			this->Go_btn->TabIndex = 4;
			this->Go_btn->Text = L"Go";
			this->Go_btn->UseVisualStyleBackColor = true;
			this->Go_btn->Click += gcnew System::EventHandler(this, &ResearchHelper::Go_btn_Click);
			// 
			// searchBox
			// 
			this->searchBox->Location = System::Drawing::Point(169, 8);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(1094, 20);
			this->searchBox->TabIndex = 3;
			// 
			// Forward_btn
			// 
			this->Forward_btn->Location = System::Drawing::Point(87, 6);
			this->Forward_btn->Name = L"Forward_btn";
			this->Forward_btn->Size = System::Drawing::Size(75, 23);
			this->Forward_btn->TabIndex = 2;
			this->Forward_btn->Text = L"Forward";
			this->Forward_btn->UseVisualStyleBackColor = true;
			this->Forward_btn->Click += gcnew System::EventHandler(this, &ResearchHelper::Forward_btn_Click);
			// 
			// Backwards_btn
			// 
			this->Backwards_btn->Location = System::Drawing::Point(6, 6);
			this->Backwards_btn->Name = L"Backwards_btn";
			this->Backwards_btn->Size = System::Drawing::Size(75, 23);
			this->Backwards_btn->TabIndex = 1;
			this->Backwards_btn->Text = L"Backwards";
			this->Backwards_btn->UseVisualStyleBackColor = true;
			this->Backwards_btn->Click += gcnew System::EventHandler(this, &ResearchHelper::Backwards_btn_Click);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1250, 165);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(88, 74);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Log is saved in directory as Log.txt. Save as dialog coming soon!";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// ResearchHelper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1377, 746);
			this->Controls->Add(this->tabControl);
			this->Name = L"ResearchHelper";
			this->Text = L"Research Helper v0.0.3";
			this->Load += gcnew System::EventHandler(this, &ResearchHelper::ResearchHelper_Load);
			this->tabControl->ResumeLayout(false);
			this->EDDTab->ResumeLayout(false);
			this->EDDTab->PerformLayout();
			this->LogTab->ResumeLayout(false);
			this->LogTab->PerformLayout();
			this->SearchTab->ResumeLayout(false);
			this->SearchTab->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	// here and below is in .cpp file
	private: System::Void ResearchHelper_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Backwards_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Forward_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Go_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void newEntry_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void clearEntires_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void saveEntries_Click(System::Object^  sender, System::EventArgs^  e);
};//end of class ResearchHelper
}
//end custom namespace
