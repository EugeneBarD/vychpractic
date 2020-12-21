#pragma once
#include"MyForm2.h"
#include <iostream>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <string>

using namespace Form2;

namespace MainForm
{
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm2^ f2;
		MyForm()
		{
			InitializeComponent();
			//
			//ьTODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox2;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(301, 35);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(413, 34);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(27, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите число для перевода в 2-ную систему:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 67);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите число для перевода в 8-чную систему:";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(413, 65);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Расчет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(27, 98);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Введите число для перевода в 16-чную систему:";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(413, 98);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Расчет";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(301, 98);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(301, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 206);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Перевод чисел";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int num = 0; unsigned long long int i = 1, binary = 0;
		try
		{
			num = System::Convert::ToDouble(textBox1->Text);
			if (num <= 0) throw 1;
			while (num > 0)
			{
				binary += (num % 2) * i;
				num = num / 2;
				i *= 10;
			}
		}
		catch (int)
		{
			MessageBox::Show("Ошибка. Зачем ты ввел 0 ? При переводе из  десятичной системы в двоичную  0 это 0",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			textBox1->Focus();

		}
		/*textBox2->Text = "0" + System::Convert::ToString(binary);*/
		String^ s1 = "0" + System::Convert::ToString(binary);
		f2 = gcnew MyForm2("В двоичной системе:", s1); f2->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int num = 0; unsigned long long int i = 1, binary = 0;
		try {
			num = System::Convert::ToDouble(textBox2->Text);
			if (num <= 0) throw 1;
			while (num > 0)
			{
				binary += (num % 8) * i;
				num = num / 8;
				i *= 10;
			}
		}

		/*textBox4->Text = System::Convert::ToString(a);*/
		catch (int)
		{
			/*if (num <= 0)*/
			{
				MessageBox::Show(
					"Ошибка. Зачем ты ввел 0 ? При переводе из десятичной системы в восмеричную  0 это 0",
					"Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning
				);
				textBox2->Focus();
			}
		}
		String^ s1 = "0" + System::Convert::ToString(binary);
		f2 = gcnew MyForm2("В восьмеричной системе:", s1); f2->Show();
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int num;
		num = System::Convert::ToInt32(textBox6->Text);
		char d;
		char m[17] = { "0123456789ABCDEF" };
		string s;

		try
		{
			while (num)
			{
				d = num % 16;
				num /= 16;
				s = m[d] + s;
			}



			String^ str3 = gcnew String(s.c_str());
			f2 = gcnew MyForm2("в шестнадцатеричной системе", System::Convert::ToString(str3)); f2->Show();
		}

		//cout.unsetf(ios::dec);
		//cout.setf(ios::hex | ios::uppercase); //Не рабочий метод.
		//
		//
		////String text = string(buf);
		//

		////

		catch (System::FormatException^ e)
		{
			if (num == 0)


			{
				MessageBox::Show("Ошибка в исходных данных. В поле надо ввести число.",
					"Доход",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				textBox6->Focus();
			}

		}


	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
		{
			button1->Enabled = false;
			/*MessageBox::Show("Ошибка в исходных данных. В поле надо ввести число.",
				" ",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			textBox1->Focus();*/
		}
		else
			button1->Enabled = true;
	}
	private:
		System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) {
				button1->Enabled = true;
				return;
			}
			if (Char::IsControl(e->KeyChar))
			{
				if (e->KeyChar == (char)Keys::Enter)
				{
					button1->Focus();
				}
				return;
			}
			e->Handled = true;
		}
		/*System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyValue == (char)Keys::Enter)
			{
				button1->PerformClick();
			}
		}*/

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox2->Text->Length == 0)
		{
			button2->Enabled = false;
		}
		else
			button2->Enabled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			button2->Enabled = true;
			return;
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				button2->Enabled = true;
				button2->Focus();
			}
			return;
		}
			e->Handled = true;
		
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox6->Text->Length == 0)
		{
			button3->Enabled = false;
		}
		else
			button3->Enabled = true;
	}
		   private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			button3->Enabled = true;
			return;
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				button3->Enabled = true;
				button3->Focus();
			}
			return;
		}
			e->Handled = true;
		
	}

	/*private: System::Void MyForm_KeyDown2(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyValue == (char)Keys::Enter)
		{
			button2->PerformClick();
		}
	}*/

	};
};

