#pragma once
#include "Header.h" // Подключаем заголовный файл Header.h, который содержит класс и все его методы 
#include <cstdlib>
#include <ctime>

namespace complex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
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

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(163, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(9, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Комплексное число";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(208, 27);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(36, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(160, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Re";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(205, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Im";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(205, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Im";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Сложение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Разность";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 20);
			this->textBox3->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(119, 115);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(250, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Делай";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(158, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"i";
			this->label2->UseMnemonic = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(9, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Результат";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(354, 201);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double c = c.Parse(textBox1->Text);
	double d = d.Parse(textBox4->Text);
	textBox1->Clear();
	textBox4->Clear();
	complex1 sum(c, d);
	textBox3->Text = Convert::ToString(sum.Re);
	textBox6->Text = Convert::ToString(sum.Im);
		}
public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double c = c.Parse(textBox1->Text);
	double d = d.Parse(textBox4->Text);
	double a = a.Parse(textBox3->Text);
	double b = b.Parse(textBox6->Text);
	textBox1->Clear();
	textBox4->Clear();
	complex1 sum(c, d);
	complex1 x(a, b);
	sum = sum + x;
	textBox3->Text = Convert::ToString(sum.Re);
	textBox6->Text = Convert::ToString(sum.Im);
	label2->Text = "i";
}
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double c = c.Parse(textBox1->Text);
	double d = d.Parse(textBox4->Text);
	double a = a.Parse(textBox3->Text);
	double b = b.Parse(textBox6->Text);
	textBox1->Clear();
	textBox4->Clear();
	complex1 sum(a, b);
	complex1 x(c, d);
	sum = sum-x;
	textBox3->Text = Convert::ToString(sum.Re);
	textBox6->Text = Convert::ToString(sum.Im);
	label2->Text = "i";
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double a = a.Parse(textBox1->Text); //перевод первого элемента в текстбокс равенства
	double b = b.Parse(textBox4->Text);
	textBox1->Clear();
	textBox4->Clear();
	complex1 sum(a, b);
	textBox3->Text = Convert::ToString(sum.Re);
	textBox6->Text = Convert::ToString(sum.Im);
	label2->Text = "i";
}
};
};
