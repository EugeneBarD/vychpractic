#pragma once

namespace lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



public ref class Form1 : public System::Windows::Forms::Form{
public:
	Form1(void){
		InitializeComponent();
}
protected:
	~Form1(){
		if (components){
			delete components;
		}
}

private: System::Windows::Forms::TextBox^ textBox1;
	protected:
		private: System::Windows::Forms::TextBox^ textBox2;
		private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::TextBox^ textBox4;

		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
		private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
		private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
		private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
		private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
		private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
		private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
		private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

	void InitializeComponent(void){
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
		this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(301, 97);
		this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(196, 201);
		this->textBox1->TabIndex = 0;
		this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(559, 97);
		this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->textBox2->Multiline = true;
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(193, 201);
		this->textBox2->TabIndex = 1;
		// 
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(127, 78);
		this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(103, 22);
		this->textBox3->TabIndex = 2;
		this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
		// 
		// textBox4
		// 
		this->textBox4->Location = System::Drawing::Point(127, 118);
		this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(103, 22);
		this->textBox4->TabIndex = 3;
		this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(350, 316);
		this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(100, 28);
		this->button1->TabIndex = 4;
		this->button1->Text = L"Очистить";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(606, 316);
		this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(100, 28);
		this->button2->TabIndex = 5;
		this->button2->Text = L"Очистить";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(35, 175);
		this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(228, 123);
		this->button3->TabIndex = 6;
		this->button3->Text = L"Выполнить";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(32, 42);
		this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(146, 17);
		this->label1->TabIndex = 7;
		this->label1->Text = L"Параметры матрицы";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(32, 78);
		this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(55, 17);
		this->label2->TabIndex = 8;
		this->label2->Text = L"Строки";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(32, 118);
		this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(66, 17);
		this->label3->TabIndex = 9;
		this->label3->Text = L"Столбцы";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(336, 55);
		this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(101, 17);
		this->label4->TabIndex = 10;
		this->label4->Text = L"Рабочее поле";
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(614, 55);
		this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(76, 17);
		this->label5->TabIndex = 11;
		this->label5->Text = L"Результат";
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
		this->menuStrip1->Size = System::Drawing::Size(813, 28);
		this->menuStrip1->TabIndex = 12;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// fileToolStripMenuItem
		// 
		this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->openToolStripMenuItem, 
			this->toolStripSeparator1, this->saveToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem});
		this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
		this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
		this->fileToolStripMenuItem->Text = L"File";
		// 
		// openToolStripMenuItem
		// 
		this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
		this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
		this->openToolStripMenuItem->Size = System::Drawing::Size(163, 24);
		this->openToolStripMenuItem->Text = L"Open";
		this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
		// 
		// toolStripSeparator1
		// 
		this->toolStripSeparator1->Name = L"toolStripSeparator1";
		this->toolStripSeparator1->Size = System::Drawing::Size(160, 6);
		// 
		// saveToolStripMenuItem
		// 
		this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
		this->saveToolStripMenuItem->Size = System::Drawing::Size(163, 24);
		this->saveToolStripMenuItem->Text = L"Save";
		this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
		// 
		// toolStripSeparator2
		// 
		this->toolStripSeparator2->Name = L"toolStripSeparator2";
		this->toolStripSeparator2->Size = System::Drawing::Size(160, 6);
		// 
		// exitToolStripMenuItem
		// 
		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->Size = System::Drawing::Size(163, 24);
		this->exitToolStripMenuItem->Text = L"Exit";
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
		// 
		// openFileDialog1
		// 
		this->openFileDialog1->FileName = L"openFileDialog1";
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(813, 374);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->menuStrip1);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MainMenuStrip = this->menuStrip1;
		this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->MinimizeBox = false;
		this->Name = L"Form1";
		this->Text = L"Матрицы";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

#pragma endregion
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if( ((e->KeyChar>='0')&&(e->KeyChar<='9'))||(e->KeyChar==8)|| (e->KeyChar=='-')||(e->KeyChar==' ')||
	(e->KeyChar==(char)Keys::Enter)) return;

	e->Handled=true;
}
//-Кнопка "Очистить" для рабочего поля (textBox1)
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text="";
}
//-Кнопка "Очистить" для рабочего поля (textBox2)
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text="";
}
//-Кнопка "Сместить матрицу вправо на:"
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int n,m,k,i,j,t;
	String^s="";
	array<Char>^ ar;
	ar=gcnew array<Char> (1);
	ar[0]=' ';
	array<int,2>^ A;
	n=Convert::ToInt32(textBox3->Text);
	m=Convert::ToInt32(textBox4->Text);
	int zeroCounterRows, zeroCounterColumns;
	//k=Convert::ToInt32(textBox5->Text);
	//Проверяем, что рабочее поле содержит информацию
	if(textBox1->Lines->Length==0){
		MessageBox::Show("Введите матрицу !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
}
//Проверяем, что размеры матрицы из рабочего поля совпадают с размерами,
//введёнными в поля textBox2 и textBox3.
	if(textBox1->Lines->Length!=n){
		MessageBox::Show("Введенная матрица имеет неверные размеры !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	return;
}
//Создаём динамическую вспомагательную матрицу А[n][m]
	A=gcnew array<int,2> (n,m);
	//Заполняем матрицу А элементами рабочего поля (textBox1).
	array<String^>^ as;
	for(i=0;i<n;i++){
		as=textBox1->Lines[i]->Split(ar);
		for(j=0;j<m;j++)
		A[i,j]=Convert::ToInt32(as[j]);
}
//Сдвигаем матрицу А вправо на k позиций
	/*int zeroCounterRows_counter=0;
	for(int i=0;i<n;i++){

		zeroCounterRows=0;
		for(int j=0;j<m;j++){
			if(A[i,j]==0){
				zeroCounterRows+=1;
				if(zeroCounterRows==m){
					zeroCounterRows_counter+=1;
					for(int k=i;k<n-1;k++){
						for(int l=0;l<m;l++){
							t=A[k,l];
							A[k,l]=A[k+1,l];
							A[k+1,l]=t;
						}
					}
				}
			}
		}
	}*/

	textBox2->Text="";
	as= gcnew array<String^> (n);
	
	
int max_sum=0;
	int sum=0;
	int index;
	for(int k=0;k<n-1;k++){
		for(int i=k;i<n;i++){
			for(int j=0;j<m;j++){
	//			if(m%2==0){
					if(j%2==1 && A[i,j]>0){
						sum+=A[i,j];
					}
				}
	//			if(m%2==1){
	//				if((i+j)%2==1 && A[i,j]>0){
	//					sum+=A[i,j];
	//				}
	//			}
	//	}
				if(sum>max_sum){
				max_sum=sum;
				index=i;
			}
		sum=0;
	}
		for(int z=0;z<m;z++){
			if(max_sum>=0){
					t=A[index,z];
					A[index,z]=A[k,z];
					A[k,z]=t;
				}
			}
		max_sum=0;
	}
	
	//Преобразованную матрицу А выводим в поле вывода результата (Memo2)

	//s="";
	for(i=0;i<n;i++){
		s="";
		for(j=0;j<m;j++)
			s+=A[i,j].ToString()+" ";
			//s+="\n";
			//textBox2->Lines[i]=s;
		as[i]=s;
	}
	// textBox2->Text=s;
	textBox2->Lines=as;

}
//-Реализация пункта меню "Открыть"
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult dr;
	String^ fn;
	openFileDialog1->FileName = String::Empty;
	// отобразить диалог Открыть
	dr = openFileDialog1->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK){
		fn = openFileDialog1->FileName;
		try{
			// считываем данные из файла
			System::IO::StreamReader^ sr =
			gcnew System::IO::StreamReader(fn);
			textBox1->Text = sr->ReadToEnd();
			sr->Close();
		}
		catch ( System::IO::FileLoadException^ e){MessageBox::Show("Ошибка ввода:\n" + e->Message,"Матрицы",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
}
//-Реализация пункта меню "Сохранить"
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		// отобразить диалог Сохранить
		dr = saveFileDialog1->ShowDialog();
		if (dr ==System::Windows::Forms::DialogResult::OK){
			fn = saveFileDialog1->FileName;
			// сохранить файл
			try{
				// получим информацию о файле fn
				System::IO::FileInfo^ fi =
				gcnew System::IO::FileInfo(fn);
				// поток для записи
				System::IO::StreamWriter^ sw =
				fi->CreateText();
				sw->Write(textBox2->Text);
				sw->Close(); // закрываем поток
			}
			catch ( System::IO::IOException^ e){MessageBox::Show(e->ToString(),"Матрицы",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
}
//-Реализация пункта меню "Выход"
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		}
	};
}
