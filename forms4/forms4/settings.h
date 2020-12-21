#pragma once
#include <string>

namespace forms4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for settings
	/// </summary>
	public ref class settings : public System::Windows::Forms::Form
	{
	
	public:
		settings(void)
		{
			InitializeComponent();
			this->textBox1->Text = System::Convert::ToString(numOfNumbers);
			this->textBox2->Text = System::Convert::ToString(numOfTurns);
			this->Focus();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(settings::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Введите кол-во попыток";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 296);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 46);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Применить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &settings::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 26);
			this->textBox2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введите кол-во угадываемых цифр";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 26);
			this->textBox1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 46);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &settings::button1_Click);
			// 
			// settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 354);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"settings";
			this->Text = L" Настройки";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &settings::settings_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		//parentForm->Show();
	}
		bool stringValid(std::string text) {
		for (int i = 0; i < text.size(); i++) {
			if (text[i] > '9' || text[i] < '0') {
				return false;
			}
		}
		return true;
	}
	int stringToInt(std::string text) {
		int retVal = 0;
		for (int i = 0; i < text.size(); i++) {
			retVal *= 10;
			retVal += int(text[i])-'0';
			
		}
		return retVal;
	}
	public: int numOfNumbers = 4, numOfTurns = 3;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bool flag = true;
		std::string numofCifr;
		for (int i = 0; i < textBox1->TextLength; i++) {
			numofCifr += textBox1->Text[i];
		}
		if (stringValid(numofCifr)) {
			if (stringToInt(numofCifr) == 0 || stringToInt(numofCifr) > 7)
			{
				MessageBox::Show("Ошибка. Макс число цифр =7",
					"ОШИБКА",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				flag= false;
			}else
			numOfNumbers = stringToInt(numofCifr);	
		}
		else
		{
			flag = false;
			MessageBox::Show("Ошибка. \n Поле 'Введите кол-во угадываемых цифр'\n введено неккоректно",
				"ОШИБКА",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			
		}
		

		numofCifr.clear();
		for (int i = 0; i < textBox2->TextLength; i++) {
			numofCifr += textBox2->Text[i];
		}

		if (stringValid(numofCifr)) {
			if (stringToInt(numofCifr) == 0)
			{
				MessageBox::Show("Ошибка. Мин число попыток должно быть >0",
					"ОШИБКА",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				flag = false;
			}
			else
			numOfTurns = stringToInt(numofCifr);
		}
		else
		{
			flag = false;
			MessageBox::Show("Ошибка. \n Поле 'Введите кол-во попыток'\n введено неккоректно",
				"ОШИБКА",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);

		}
		if (flag) {
			MessageBox::Show("Успешно изменено",
				"Успех",
				MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);

		}
		this->textBox1->Text = System::Convert::ToString(numOfNumbers);
		this->textBox2->Text = System::Convert::ToString(numOfTurns);
		
		if(flag)
			this->Close();
		
}	
private: System::Void settings_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		button2_Click(sender, e);
	}
	if (e->KeyCode == Keys::Escape)
	{
		button1_Click(sender, e);
	}
}
};
}
