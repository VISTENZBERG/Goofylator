#pragma once

namespace ProgV1Test {

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
	private: System::Windows::Forms::Button^ Btn_Exit;
	private: System::Windows::Forms::Label^ Label_Result;
	private: System::Windows::Forms::Button^ Btn_AC;

	private: System::Windows::Forms::Button^ Btn_Change;
	private: System::Windows::Forms::Button^ Btn_Precent;
	private: System::Windows::Forms::Button^ Btn_Divide;
	private: System::Windows::Forms::Button^ Btn_Mult;





	private: System::Windows::Forms::Button^ Btn_Neun_9;


	private: System::Windows::Forms::Button^ Btn_Acht_8;

	private: System::Windows::Forms::Button^ Btn_Seben_7;

	private: System::Windows::Forms::Button^ Btn_Minus;
	private: System::Windows::Forms::Button^ Btn_Sechs_6;


	private: System::Windows::Forms::Button^ Btn_Funf_5;

	private: System::Windows::Forms::Button^ Btn_Vier_4;
	private: System::Windows::Forms::Button^ Btn_Plus;


	private: System::Windows::Forms::Button^ Btn_Drei_3;


	private: System::Windows::Forms::Button^ Btn_Zwei_2;

	private: System::Windows::Forms::Button^ Btn_Ein_1;

	private: System::Windows::Forms::Button^ Btn_Equal;
	private: System::Windows::Forms::Button^ Btn_Dot;


	private: System::Windows::Forms::Button^ Btn_Null_0;

	private: int first_num;
	private: char user_action;
	private: System::Windows::Forms::Label^ Prog_Title;


	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Btn_Exit = (gcnew System::Windows::Forms::Button());
			this->Label_Result = (gcnew System::Windows::Forms::Label());
			this->Btn_AC = (gcnew System::Windows::Forms::Button());
			this->Btn_Change = (gcnew System::Windows::Forms::Button());
			this->Btn_Precent = (gcnew System::Windows::Forms::Button());
			this->Btn_Divide = (gcnew System::Windows::Forms::Button());
			this->Btn_Mult = (gcnew System::Windows::Forms::Button());
			this->Btn_Neun_9 = (gcnew System::Windows::Forms::Button());
			this->Btn_Acht_8 = (gcnew System::Windows::Forms::Button());
			this->Btn_Seben_7 = (gcnew System::Windows::Forms::Button());
			this->Btn_Minus = (gcnew System::Windows::Forms::Button());
			this->Btn_Sechs_6 = (gcnew System::Windows::Forms::Button());
			this->Btn_Funf_5 = (gcnew System::Windows::Forms::Button());
			this->Btn_Vier_4 = (gcnew System::Windows::Forms::Button());
			this->Btn_Plus = (gcnew System::Windows::Forms::Button());
			this->Btn_Drei_3 = (gcnew System::Windows::Forms::Button());
			this->Btn_Zwei_2 = (gcnew System::Windows::Forms::Button());
			this->Btn_Ein_1 = (gcnew System::Windows::Forms::Button());
			this->Btn_Equal = (gcnew System::Windows::Forms::Button());
			this->Btn_Dot = (gcnew System::Windows::Forms::Button());
			this->Btn_Null_0 = (gcnew System::Windows::Forms::Button());
			this->Prog_Title = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Exit
			// 
			this->Btn_Exit->BackColor = System::Drawing::Color::Red;
			this->Btn_Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Btn_Exit->Location = System::Drawing::Point(13, 13);
			this->Btn_Exit->Name = L"Btn_Exit";
			this->Btn_Exit->Size = System::Drawing::Size(25, 25);
			this->Btn_Exit->TabIndex = 0;
			this->Btn_Exit->Text = L"X";
			this->Btn_Exit->UseVisualStyleBackColor = false;
			this->Btn_Exit->Click += gcnew System::EventHandler(this, &MyForm::Btn_Exit_Click);
			// 
			// Label_Result
			// 
			this->Label_Result->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Label_Result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Label_Result->Font = (gcnew System::Drawing::Font(L"MS PGothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Result->Location = System::Drawing::Point(12, 41);
			this->Label_Result->Name = L"Label_Result";
			this->Label_Result->Size = System::Drawing::Size(260, 77);
			this->Label_Result->TabIndex = 1;
			this->Label_Result->Text = L"0";
			this->Label_Result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Btn_AC
			// 
			this->Btn_AC->BackColor = System::Drawing::Color::LimeGreen;
			this->Btn_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_AC->Location = System::Drawing::Point(13, 121);
			this->Btn_AC->Name = L"Btn_AC";
			this->Btn_AC->Size = System::Drawing::Size(58, 58);
			this->Btn_AC->TabIndex = 2;
			this->Btn_AC->Text = L"AC";
			this->Btn_AC->UseVisualStyleBackColor = false;
			this->Btn_AC->Click += gcnew System::EventHandler(this, &MyForm::Btn_AC_Click);
			// 
			// Btn_Change
			// 
			this->Btn_Change->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Btn_Change->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Change->Location = System::Drawing::Point(77, 121);
			this->Btn_Change->Name = L"Btn_Change";
			this->Btn_Change->Size = System::Drawing::Size(58, 58);
			this->Btn_Change->TabIndex = 3;
			this->Btn_Change->Text = L"+/-";
			this->Btn_Change->UseVisualStyleBackColor = false;
			this->Btn_Change->Click += gcnew System::EventHandler(this, &MyForm::Btn_Change_Click);
			// 
			// Btn_Precent
			// 
			this->Btn_Precent->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Btn_Precent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Precent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Precent->Location = System::Drawing::Point(141, 121);
			this->Btn_Precent->Name = L"Btn_Precent";
			this->Btn_Precent->Size = System::Drawing::Size(58, 58);
			this->Btn_Precent->TabIndex = 4;
			this->Btn_Precent->Text = L"%";
			this->Btn_Precent->UseVisualStyleBackColor = false;
			this->Btn_Precent->Click += gcnew System::EventHandler(this, &MyForm::Btn_Precent_Click);
			// 
			// Btn_Divide
			// 
			this->Btn_Divide->BackColor = System::Drawing::Color::Gold;
			this->Btn_Divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Divide->Location = System::Drawing::Point(205, 121);
			this->Btn_Divide->Name = L"Btn_Divide";
			this->Btn_Divide->Size = System::Drawing::Size(67, 58);
			this->Btn_Divide->TabIndex = 5;
			this->Btn_Divide->Text = L"/";
			this->Btn_Divide->UseVisualStyleBackColor = false;
			this->Btn_Divide->Click += gcnew System::EventHandler(this, &MyForm::Btn_Divide_Click);
			// 
			// Btn_Mult
			// 
			this->Btn_Mult->BackColor = System::Drawing::Color::Gold;
			this->Btn_Mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Mult->Location = System::Drawing::Point(205, 185);
			this->Btn_Mult->Name = L"Btn_Mult";
			this->Btn_Mult->Size = System::Drawing::Size(67, 58);
			this->Btn_Mult->TabIndex = 9;
			this->Btn_Mult->Text = L"x";
			this->Btn_Mult->UseVisualStyleBackColor = false;
			this->Btn_Mult->Click += gcnew System::EventHandler(this, &MyForm::Btn_Mult_Click);
			// 
			// Btn_Neun_9
			// 
			this->Btn_Neun_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Neun_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Neun_9->Location = System::Drawing::Point(141, 185);
			this->Btn_Neun_9->Name = L"Btn_Neun_9";
			this->Btn_Neun_9->Size = System::Drawing::Size(58, 58);
			this->Btn_Neun_9->TabIndex = 8;
			this->Btn_Neun_9->Text = L"9";
			this->Btn_Neun_9->UseVisualStyleBackColor = true;
			this->Btn_Neun_9->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Acht_8
			// 
			this->Btn_Acht_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Acht_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Acht_8->Location = System::Drawing::Point(77, 185);
			this->Btn_Acht_8->Name = L"Btn_Acht_8";
			this->Btn_Acht_8->Size = System::Drawing::Size(58, 58);
			this->Btn_Acht_8->TabIndex = 7;
			this->Btn_Acht_8->Text = L"8";
			this->Btn_Acht_8->UseVisualStyleBackColor = true;
			this->Btn_Acht_8->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Seben_7
			// 
			this->Btn_Seben_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Seben_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Seben_7->Location = System::Drawing::Point(13, 185);
			this->Btn_Seben_7->Name = L"Btn_Seben_7";
			this->Btn_Seben_7->Size = System::Drawing::Size(58, 58);
			this->Btn_Seben_7->TabIndex = 6;
			this->Btn_Seben_7->Text = L"7";
			this->Btn_Seben_7->UseVisualStyleBackColor = true;
			this->Btn_Seben_7->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Minus
			// 
			this->Btn_Minus->BackColor = System::Drawing::Color::Gold;
			this->Btn_Minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Minus->Location = System::Drawing::Point(205, 249);
			this->Btn_Minus->Name = L"Btn_Minus";
			this->Btn_Minus->Size = System::Drawing::Size(67, 58);
			this->Btn_Minus->TabIndex = 13;
			this->Btn_Minus->Text = L"-";
			this->Btn_Minus->UseVisualStyleBackColor = false;
			this->Btn_Minus->Click += gcnew System::EventHandler(this, &MyForm::Btn_Minus_Click);
			// 
			// Btn_Sechs_6
			// 
			this->Btn_Sechs_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Sechs_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Sechs_6->Location = System::Drawing::Point(141, 249);
			this->Btn_Sechs_6->Name = L"Btn_Sechs_6";
			this->Btn_Sechs_6->Size = System::Drawing::Size(58, 58);
			this->Btn_Sechs_6->TabIndex = 12;
			this->Btn_Sechs_6->Text = L"6";
			this->Btn_Sechs_6->UseVisualStyleBackColor = true;
			this->Btn_Sechs_6->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Funf_5
			// 
			this->Btn_Funf_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Funf_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Funf_5->Location = System::Drawing::Point(77, 249);
			this->Btn_Funf_5->Name = L"Btn_Funf_5";
			this->Btn_Funf_5->Size = System::Drawing::Size(58, 58);
			this->Btn_Funf_5->TabIndex = 11;
			this->Btn_Funf_5->Text = L"5";
			this->Btn_Funf_5->UseVisualStyleBackColor = true;
			this->Btn_Funf_5->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Vier_4
			// 
			this->Btn_Vier_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Vier_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Vier_4->Location = System::Drawing::Point(12, 249);
			this->Btn_Vier_4->Name = L"Btn_Vier_4";
			this->Btn_Vier_4->Size = System::Drawing::Size(58, 58);
			this->Btn_Vier_4->TabIndex = 10;
			this->Btn_Vier_4->Text = L"4";
			this->Btn_Vier_4->UseVisualStyleBackColor = true;
			this->Btn_Vier_4->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Plus
			// 
			this->Btn_Plus->BackColor = System::Drawing::Color::Gold;
			this->Btn_Plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Plus->Location = System::Drawing::Point(205, 313);
			this->Btn_Plus->Name = L"Btn_Plus";
			this->Btn_Plus->Size = System::Drawing::Size(67, 58);
			this->Btn_Plus->TabIndex = 17;
			this->Btn_Plus->Text = L"+";
			this->Btn_Plus->UseVisualStyleBackColor = false;
			this->Btn_Plus->Click += gcnew System::EventHandler(this, &MyForm::Btn_Plus_Click);
			// 
			// Btn_Drei_3
			// 
			this->Btn_Drei_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Drei_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Drei_3->Location = System::Drawing::Point(141, 313);
			this->Btn_Drei_3->Name = L"Btn_Drei_3";
			this->Btn_Drei_3->Size = System::Drawing::Size(58, 58);
			this->Btn_Drei_3->TabIndex = 16;
			this->Btn_Drei_3->Text = L"3";
			this->Btn_Drei_3->UseVisualStyleBackColor = true;
			this->Btn_Drei_3->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Zwei_2
			// 
			this->Btn_Zwei_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Zwei_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Zwei_2->Location = System::Drawing::Point(77, 313);
			this->Btn_Zwei_2->Name = L"Btn_Zwei_2";
			this->Btn_Zwei_2->Size = System::Drawing::Size(58, 58);
			this->Btn_Zwei_2->TabIndex = 15;
			this->Btn_Zwei_2->Text = L"2";
			this->Btn_Zwei_2->UseVisualStyleBackColor = true;
			this->Btn_Zwei_2->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Ein_1
			// 
			this->Btn_Ein_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Ein_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Ein_1->Location = System::Drawing::Point(13, 313);
			this->Btn_Ein_1->Name = L"Btn_Ein_1";
			this->Btn_Ein_1->Size = System::Drawing::Size(58, 58);
			this->Btn_Ein_1->TabIndex = 14;
			this->Btn_Ein_1->Text = L"1";
			this->Btn_Ein_1->UseVisualStyleBackColor = true;
			this->Btn_Ein_1->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Btn_Equal
			// 
			this->Btn_Equal->BackColor = System::Drawing::Color::Gold;
			this->Btn_Equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Equal->Location = System::Drawing::Point(141, 377);
			this->Btn_Equal->Name = L"Btn_Equal";
			this->Btn_Equal->Size = System::Drawing::Size(131, 58);
			this->Btn_Equal->TabIndex = 21;
			this->Btn_Equal->Text = L"=";
			this->Btn_Equal->UseVisualStyleBackColor = false;
			this->Btn_Equal->Click += gcnew System::EventHandler(this, &MyForm::Btn_equal_Click);
			// 
			// Btn_Dot
			// 
			this->Btn_Dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Dot->Location = System::Drawing::Point(77, 377);
			this->Btn_Dot->Name = L"Btn_Dot";
			this->Btn_Dot->Size = System::Drawing::Size(58, 58);
			this->Btn_Dot->TabIndex = 20;
			this->Btn_Dot->Text = L".";
			this->Btn_Dot->UseVisualStyleBackColor = true;
			this->Btn_Dot->Click += gcnew System::EventHandler(this, &MyForm::Btn_Dot_Click);
			// 
			// Btn_Null_0
			// 
			this->Btn_Null_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Null_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Null_0->Location = System::Drawing::Point(13, 377);
			this->Btn_Null_0->Name = L"Btn_Null_0";
			this->Btn_Null_0->Size = System::Drawing::Size(58, 58);
			this->Btn_Null_0->TabIndex = 18;
			this->Btn_Null_0->Text = L"0";
			this->Btn_Null_0->UseVisualStyleBackColor = true;
			this->Btn_Null_0->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// Prog_Title
			// 
			this->Prog_Title->BackColor = System::Drawing::SystemColors::Control;
			this->Prog_Title->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Prog_Title->Location = System::Drawing::Point(45, 13);
			this->Prog_Title->Name = L"Prog_Title";
			this->Prog_Title->Size = System::Drawing::Size(227, 25);
			this->Prog_Title->TabIndex = 22;
			this->Prog_Title->Text = L"Goofylator.exe v1.5.28  BETA";
			this->Prog_Title->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(284, 461);
			this->Controls->Add(this->Prog_Title);
			this->Controls->Add(this->Btn_Equal);
			this->Controls->Add(this->Btn_Dot);
			this->Controls->Add(this->Btn_Null_0);
			this->Controls->Add(this->Btn_Plus);
			this->Controls->Add(this->Btn_Drei_3);
			this->Controls->Add(this->Btn_Zwei_2);
			this->Controls->Add(this->Btn_Ein_1);
			this->Controls->Add(this->Btn_Minus);
			this->Controls->Add(this->Btn_Sechs_6);
			this->Controls->Add(this->Btn_Funf_5);
			this->Controls->Add(this->Btn_Vier_4);
			this->Controls->Add(this->Btn_Mult);
			this->Controls->Add(this->Btn_Neun_9);
			this->Controls->Add(this->Btn_Acht_8);
			this->Controls->Add(this->Btn_Seben_7);
			this->Controls->Add(this->Btn_Divide);
			this->Controls->Add(this->Btn_Precent);
			this->Controls->Add(this->Btn_Change);
			this->Controls->Add(this->Btn_AC);
			this->Controls->Add(this->Label_Result);
			this->Controls->Add(this->Btn_Exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Goofylator.exe";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Btn_Number_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ reciever = safe_cast<Button^>(sender);

		if (this->Label_Result->Text == "0")
			this->Label_Result->Text = reciever->Text;
		else
			this->Label_Result->Text = this->Label_Result->Text + reciever->Text;
	}

	private: System::Void Btn_Plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void Btn_Minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void Btn_Mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void Btn_Divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToInt32(this->Label_Result->Text);
		this->user_action = action;
		this->Label_Result->Text = "0";
	}
	private: System::Void Btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		int second = System::Convert::ToInt32(this->Label_Result->Text);
		int res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '/': res = this->first_num / second; break;
		}
		this->Label_Result->Text = System::Convert::ToString(res);

	}
	private: System::Void Btn_Precent_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Btn_Change_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_Dot_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}