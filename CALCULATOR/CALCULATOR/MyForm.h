﻿#pragma once

namespace CALCULATOR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
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
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:


























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
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->Location = System::Drawing::Point(134, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 100);
			this->button1->TabIndex = 1;
			this->button1->Text = L"";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(0, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"AC";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(268, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 100);
			this->button3->TabIndex = 1;
			this->button3->Text = L"(-)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(407, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 100);
			this->button4->TabIndex = 1;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(0, 230);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 100);
			this->button5->TabIndex = 1;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(134, 230);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 100);
			this->button6->TabIndex = 1;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(268, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 100);
			this->button7->TabIndex = 1;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(407, 230);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 100);
			this->button8->TabIndex = 1;
			this->button8->Text = L"x";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(0, 350);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 100);
			this->button9->TabIndex = 1;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(134, 350);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 100);
			this->button10->TabIndex = 1;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(268, 350);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 100);
			this->button11->TabIndex = 1;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(407, 350);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(96, 100);
			this->button12->TabIndex = 1;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->Location = System::Drawing::Point(0, 469);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(96, 100);
			this->button13->TabIndex = 1;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(134, 469);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(96, 100);
			this->button14->TabIndex = 1;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(268, 469);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(96, 100);
			this->button15->TabIndex = 1;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(407, 469);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(96, 100);
			this->button16->TabIndex = 1;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(0, 584);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(96, 100);
			this->button17->TabIndex = 1;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(134, 584);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(96, 100);
			this->button18->TabIndex = 1;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(268, 584);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(96, 100);
			this->button19->TabIndex = 1;
			this->button19->Text = L"Ans";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(407, 584);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(96, 100);
			this->button20->TabIndex = 1;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(503, 114);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 686);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"CALCULATOR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double num1, num2, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Number = safe_cast<Button^>(sender);
	if (textBox1->Text == "")
	{
		textBox1->Text = Number->Text;
			
	}
	else
	{
		textBox1->Text = textBox1->Text + Number->Text;
	}
}

private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	num1 = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	num2= Double::Parse(textBox1->Text);

	if (operators=="+") {
		result = num1 + num2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = num1 - num2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "x") {
		result = num1 * num2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = num1 / num2;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void x(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-")) {
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text -> Length - 1, 1);
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(result);
}

};
}
