#pragma once
#include"settings.h"
#include <ctime>
#include <cstdlib>
#include <vector>

namespace forms4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for level1
	/// </summary>
	
	public ref class level1 : public System::Windows::Forms::Form
	{
		void questPic(int numOfCifr) {
			numOfNumbers = numOfCifr;
			for (int i = 0; i < numOfCifr; i++) {
				if (i == 0) this->pictureBox1->Image = this->imageList1->Images[10];
				if (i == 1) this->pictureBox2->Image = this->imageList1->Images[10];
				if (i == 2) this->pictureBox3->Image = this->imageList1->Images[10];
				if (i == 3) this->pictureBox4->Image = this->imageList1->Images[10];
				if (i == 4) this->pictureBox5->Image = this->imageList1->Images[10];
				if (i == 5) this->pictureBox6->Image = this->imageList1->Images[10];
				if (i == 6) this->pictureBox7->Image = this->imageList1->Images[10];


			}
		}
		void startpage(int numOfCifr) {
			int stepenDesyati=1;
			srand(time(NULL));
			for (int i = 0; i < numOfCifr;i++) {
				stepenDesyati *= 10;
			}
			randNumb =stepenDesyati/10+ (rand() % (stepenDesyati-stepenDesyati/10));
			textBox2->Text = System::Convert::ToString(numOfTurns);

			
		}
	public:
		level1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		level1(settings^ parent) {
			
			InitializeComponent();
			textBox3->Focus();
			setForm = parent;
			numOfTurns = setForm->numOfTurns;
			numOfTurnsLeft = numOfTurns;
			startpage(setForm->numOfNumbers);
			questPic(setForm->numOfNumbers);
			textBox1->Text = "0";
			
			
		}
	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: settings^ setForm;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~level1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	protected:






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level1::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"0.png");
			this->imageList1->Images->SetKeyName(1, L"1.png");
			this->imageList1->Images->SetKeyName(2, L"2.png");
			this->imageList1->Images->SetKeyName(3, L"3.png");
			this->imageList1->Images->SetKeyName(4, L"4.png");
			this->imageList1->Images->SetKeyName(5, L"5.png");
			this->imageList1->Images->SetKeyName(6, L"6.png");
			this->imageList1->Images->SetKeyName(7, L"7.png");
			this->imageList1->Images->SetKeyName(8, L"8.png");
			this->imageList1->Images->SetKeyName(9, L"9.png");
			this->imageList1->Images->SetKeyName(10, L"quest.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(100, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 91);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(188, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(82, 91);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(276, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(82, 91);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(364, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(82, 91);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(452, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(82, 91);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(540, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(82, 91);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(476, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 74);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &level1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 59);
			this->button2->TabIndex = 8;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &level1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(100, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 59);
			this->button3->TabIndex = 9;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &level1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(164, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(58, 59);
			this->button4->TabIndex = 10;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &level1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(36, 239);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 59);
			this->button5->TabIndex = 11;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &level1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(100, 239);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 59);
			this->button6->TabIndex = 12;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &level1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(164, 239);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 59);
			this->button7->TabIndex = 13;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &level1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(36, 304);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 59);
			this->button8->TabIndex = 14;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &level1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(100, 304);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 59);
			this->button9->TabIndex = 15;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &level1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(164, 304);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(58, 59);
			this->button10->TabIndex = 16;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &level1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(228, 239);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(58, 124);
			this->button11->TabIndex = 17;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &level1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(228, 174);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(58, 59);
			this->button12->TabIndex = 18;
			this->button12->Text = L"С";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &level1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(476, 196);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(159, 74);
			this->button13->TabIndex = 19;
			this->button13->Text = L"Начать заново";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &level1::button13_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(250, 26);
			this->textBox1->TabIndex = 20;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(292, 239);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(112, 124);
			this->button14->TabIndex = 21;
			this->button14->Text = L"Ввести";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &level1::button14_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(476, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(159, 26);
			this->textBox2->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(476, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Кол-во попыток";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(305, 129);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(141, 86);
			this->textBox3->TabIndex = 24;
			// 
			// level1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 393);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->KeyPreview = true;
			this->Name = L"level1";
			this->Text = L"Обычная игра";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &level1::level1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int randNumb; int  numOfNumbers, numToEnter=0, numOfTurns,numOfTurnsLeft;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		delete this;
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	numToEnter = 0;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	questPic(numOfNumbers);
	startpage(numOfNumbers);
	numOfTurnsLeft = numOfTurns;
	textBox3->Text = "";
	textBox1->Text = "";
	numToEnter = 0;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
	numToEnter *= 10;
	numToEnter += 1;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
	numToEnter *= 10;
	numToEnter += 2;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
	numToEnter *= 10;
	numToEnter += 3;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
	numToEnter *= 10;
	numToEnter += 4;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
	numToEnter *= 10;
	numToEnter +=5;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
	numToEnter *= 10;
	numToEnter += 6;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
	numToEnter *= 10;
	numToEnter += 7;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
	numToEnter *= 10;
	numToEnter += 8;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
	numToEnter *= 10;
	numToEnter += 9;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
	numToEnter *= 10;
}

void showNumber(int numOfNumbers) {
	std::vector<int> arr,arr1;
	int randN;
	for (int j = 0; j < numOfNumbers; j++) {
		randN = randNumb % 10;
		arr1.push_back(randN);
		randNumb = randNumb / 10;
		
	}
	for (int j = 0; j < numOfNumbers; j++) {
		randN = randNumb % 10;
		arr.push_back(arr1[numOfNumbers-j-1]);
		randNumb = randNumb / 10;

	}
	arr1.~vector();
	
	for (int i = 0; i < numOfNumbers; i++) {
			if (i == 0) this->pictureBox1->Image = this->imageList1->Images[arr[i]];
			if (i == 1) this->pictureBox2->Image = this->imageList1->Images[arr[i]];
			if (i == 2) this->pictureBox3->Image = this->imageList1->Images[arr[i]];
			if (i == 3) this->pictureBox4->Image = this->imageList1->Images[arr[i]];
			if (i == 4) this->pictureBox5->Image = this->imageList1->Images[arr[i]];
			if (i == 5) this->pictureBox6->Image = this->imageList1->Images[arr[i]];
			if (i == 6) this->pictureBox7->Image = this->imageList1->Images[arr[i]];
		}
	arr.~vector();

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	bool win = false;
	numOfTurnsLeft--;
	if (randNumb == numToEnter)
	{
		textBox3->Text = System::Convert::ToString(randNumb);
		showNumber(numOfNumbers);
		MessageBox::Show("Победа",
			"Успех",
			MessageBoxButtons::OK,
			MessageBoxIcon::Asterisk);
		win = true;
		numOfTurnsLeft = 0;
	}

	if (!win && numOfTurnsLeft == 0) {
		textBox3->Text = System::Convert::ToString(randNumb);
		showNumber(numOfNumbers);
		MessageBox::Show("Поражение :(",
			"эх......",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		

	}
	else
	{
		textBox3->Text = "Число х ";
		if (randNumb > numToEnter)
		{
			textBox3->Text += ">";
		}
		else
			textBox3->Text += "<";
		textBox3->Text += " числа " + System::Convert::ToString(numToEnter);
		textBox1->Text = "";
	}


	numToEnter = 0;
	textBox2->Text = System::Convert::ToString(numOfTurnsLeft);
}
private: System::Void level1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyCode) {
	case Keys::Escape: {button1_Click(sender, e); break; }
	case Keys::D1: {button2_Click(sender, e); break; }
	case Keys::D2: {button3_Click(sender, e); break; }
	case Keys::D3: {button4_Click(sender, e); break; }
	case Keys::D4: {button5_Click(sender, e); break; }
	case Keys::D5: {button6_Click(sender, e); break; }
	case Keys::D6: {button7_Click(sender, e); break; }
	case Keys::D7: {button8_Click(sender, e); break; }
	case Keys::D8: {button9_Click(sender, e); break; }
	case Keys::D9: {button10_Click(sender, e); break; }
	case Keys::D0: {button11_Click(sender, e); break; }
	case Keys::C: {button12_Click(sender, e); break; }
	case Keys::E: {button14_Click(sender, e); break; }
	case Keys::R: {button13_Click(sender, e); break; }
	}

}
};
}
