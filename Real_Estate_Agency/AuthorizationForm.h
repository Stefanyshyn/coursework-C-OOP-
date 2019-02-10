#pragma once
#include "EnumEmployee.h"
#include"AuthorizationForm.h"
#include "SignUpPersonnelForm.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AuthorizationForm
	/// </summary>
	public ref class AuthorizationForm : public System::Windows::Forms::Form
	{
	private: String^ password = "";
	private: Int32 Person = -1;
	
	public: System::Int32 getPersonNumber() {
		return Person;
	}
	public:
		AuthorizationForm(void)
		{
			InitializeComponent();
			passwordTextBox->PasswordChar = ' ';
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AuthorizationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  loginLabel;
	private: System::Windows::Forms::Label^  passwordLabel;
	protected:


	private: System::Windows::Forms::TextBox^  loginTextBox;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  signIn;
	private: System::Windows::Forms::Button^  signUp;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  passwordTextBox;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->signIn = (gcnew System::Windows::Forms::Button());
			this->signUp = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				24.39024F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				75.60976F)));
			this->tableLayoutPanel1->Controls->Add(this->loginLabel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->passwordLabel, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->loginTextBox, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->passwordTextBox, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 80);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(826, 142);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginLabel->ForeColor = System::Drawing::Color::MediumBlue;
			this->loginLabel->Location = System::Drawing::Point(4, 0);
			this->loginLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(193, 18);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"login";
			this->loginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passwordLabel->ForeColor = System::Drawing::Color::MediumBlue;
			this->passwordLabel->Location = System::Drawing::Point(4, 35);
			this->passwordLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(193, 18);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"password";
			this->passwordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->loginTextBox->Location = System::Drawing::Point(205, 4);
			this->loginTextBox->Margin = System::Windows::Forms::Padding(4);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(617, 24);
			this->loginTextBox->TabIndex = 2;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->passwordTextBox->Location = System::Drawing::Point(205, 39);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(4);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(617, 24);
			this->passwordTextBox->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->signIn, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->signUp, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(826, 68);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// signIn
			// 
			this->signIn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->signIn->ForeColor = System::Drawing::Color::MediumBlue;
			this->signIn->Location = System::Drawing::Point(4, 4);
			this->signIn->Margin = System::Windows::Forms::Padding(4);
			this->signIn->Name = L"signIn";
			this->signIn->Size = System::Drawing::Size(405, 60);
			this->signIn->TabIndex = 0;
			this->signIn->Text = L"Sign in";
			this->signIn->UseVisualStyleBackColor = true;
			this->signIn->Click += gcnew System::EventHandler(this, &AuthorizationForm::signIn_Click);
			// 
			// signUp
			// 
			this->signUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->signUp->ForeColor = System::Drawing::Color::MediumBlue;
			this->signUp->Location = System::Drawing::Point(417, 4);
			this->signUp->Margin = System::Windows::Forms::Padding(4);
			this->signUp->Name = L"signUp";
			this->signUp->Size = System::Drawing::Size(405, 60);
			this->signUp->TabIndex = 1;
			this->signUp->Text = L"Sign up";
			this->signUp->UseVisualStyleBackColor = true;
			this->signUp->Click += gcnew System::EventHandler(this, &AuthorizationForm::signUp_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel1, 0, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 76)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 150)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(834, 155);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// AuthorizationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(834, 152);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AuthorizationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorization";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
private: System::Void signIn_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ rStream = gcnew StreamReader("LoginAndPassword.txt");
	while (!rStream->EndOfStream)
	{
		if (loginTextBox->Text == rStream->ReadLine())
		{
			if (passwordTextBox->Text == rStream->ReadLine())
			{
				try {
					Person = Convert::ToInt32(rStream->ReadLine());
					rStream->Close();
					this->Close();
				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK);
				}
				return;
			}
			rStream->ReadLine();
		}
		else {
			rStream->ReadLine();
			rStream->ReadLine();
		}
	}
	rStream->Close();
	MessageBox::Show("Login or password is invalid", "Error", MessageBoxButtons::OK);
}
private: System::Void signUp_Click(System::Object^  sender, System::EventArgs^  e) {
	SignUpForm^signup = gcnew SignUpForm();
	signup->ShowDialog();
}
};
}
