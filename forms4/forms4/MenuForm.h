#pragma once
#include "level1.h"
#include "settings.h"

namespace forms4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		
		MenuForm(void)
		{
			InitializeComponent();
			
		}
		settings^ set = gcnew settings();
		
		level1^ l1; 


	private: System::Windows::Forms::Button^ button4;
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			delete l1,set;
			//delete l1, l2, set;
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	public:
	private:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Обычный";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(145, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите режим игры";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(149, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 60);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Настройки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(149, 234);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 60);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuForm::button4_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 379);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Name = L"MenuForm";
			this->Text = L"Угадай число";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		l1 =gcnew level1(set);
		l1->ShowDialog();
		
		
	}
		  
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		set->ShowDialog();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
