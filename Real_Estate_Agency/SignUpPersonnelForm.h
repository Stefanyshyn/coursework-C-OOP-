#pragma once
#include"EnumEmployee.h"
namespace RealEstateAgency {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// —водка дл€ SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		SignUpForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  loginLabel;
	protected:

	protected:

	private: System::Windows::Forms::Label^  passwordLabel;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::RadioButton^  accountantRadioButton;
	private: System::Windows::Forms::RadioButton^  realtorRadioButton;
	private: System::Windows::Forms::RadioButton^  administratorRadioButton;
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::TextBox^  loginTextBox;






	private: System::Windows::Forms::TextBox^  passwordTextBox;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::Button^  backbutton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::Label^  securityCodeLabel;
	private: System::Windows::Forms::TextBox^  securityCodeTextBox;




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
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->accountantRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->realtorRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->administratorRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->securityCodeLabel = (gcnew System::Windows::Forms::Label());
			this->securityCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->loginLabel->Location = System::Drawing::Point(3, 0);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(78, 13);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"login";
			this->loginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->passwordLabel->Location = System::Drawing::Point(3, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(78, 13);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"password";
			this->passwordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 0, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 71)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(423, 189);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				84)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->loginLabel, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->loginTextBox, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(417, 23);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->loginTextBox->Location = System::Drawing::Point(87, 3);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(327, 20);
			this->loginTextBox->TabIndex = 1;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				84)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->passwordLabel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->passwordTextBox, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 32);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(417, 23);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->passwordTextBox->Location = System::Drawing::Point(87, 3);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(327, 20);
			this->passwordTextBox->TabIndex = 2;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->Controls->Add(this->accountantRadioButton, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->realtorRadioButton, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->administratorRadioButton, 2, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 61);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(417, 23);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// accountantRadioButton
			// 
			this->accountantRadioButton->AutoSize = true;
			this->accountantRadioButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accountantRadioButton->Location = System::Drawing::Point(3, 3);
			this->accountantRadioButton->Name = L"accountantRadioButton";
			this->accountantRadioButton->Size = System::Drawing::Size(133, 17);
			this->accountantRadioButton->TabIndex = 0;
			this->accountantRadioButton->TabStop = true;
			this->accountantRadioButton->Text = L"Accountant";
			this->accountantRadioButton->UseVisualStyleBackColor = true;
			// 
			// realtorRadioButton
			// 
			this->realtorRadioButton->AutoSize = true;
			this->realtorRadioButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->realtorRadioButton->Location = System::Drawing::Point(142, 3);
			this->realtorRadioButton->Name = L"realtorRadioButton";
			this->realtorRadioButton->Size = System::Drawing::Size(133, 17);
			this->realtorRadioButton->TabIndex = 1;
			this->realtorRadioButton->TabStop = true;
			this->realtorRadioButton->Text = L"Realtor";
			this->realtorRadioButton->UseVisualStyleBackColor = true;
			// 
			// administratorRadioButton
			// 
			this->administratorRadioButton->AutoSize = true;
			this->administratorRadioButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->administratorRadioButton->Location = System::Drawing::Point(281, 3);
			this->administratorRadioButton->Name = L"administratorRadioButton";
			this->administratorRadioButton->Size = System::Drawing::Size(133, 17);
			this->administratorRadioButton->TabIndex = 2;
			this->administratorRadioButton->TabStop = true;
			this->administratorRadioButton->Text = L"Administrator";
			this->administratorRadioButton->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->backbutton, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->okButton, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 120);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(417, 66);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// backbutton
			// 
			this->backbutton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->backbutton->Location = System::Drawing::Point(211, 3);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(203, 60);
			this->backbutton->TabIndex = 4;
			this->backbutton->Text = L"back";
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &SignUpForm::backbutton_Click);
			// 
			// okButton
			// 
			this->okButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->okButton->Location = System::Drawing::Point(3, 3);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(202, 60);
			this->okButton->TabIndex = 3;
			this->okButton->Text = L"ok";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &SignUpForm::okButton_Click);
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.14388F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.85612F)));
			this->tableLayoutPanel6->Controls->Add(this->securityCodeLabel, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->securityCodeTextBox, 1, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 90);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(417, 24);
			this->tableLayoutPanel6->TabIndex = 4;
			// 
			// securityCodeLabel
			// 
			this->securityCodeLabel->AutoSize = true;
			this->securityCodeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->securityCodeLabel->Location = System::Drawing::Point(3, 0);
			this->securityCodeLabel->Name = L"securityCodeLabel";
			this->securityCodeLabel->Size = System::Drawing::Size(77, 13);
			this->securityCodeLabel->TabIndex = 0;
			this->securityCodeLabel->Text = L"Securyty code";
			this->securityCodeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// securityCodeTextBox
			// 
			this->securityCodeTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->securityCodeTextBox->Location = System::Drawing::Point(86, 3);
			this->securityCodeTextBox->Name = L"securityCodeTextBox";
			this->securityCodeTextBox->Size = System::Drawing::Size(328, 20);
			this->securityCodeTextBox->TabIndex = 1;
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 189);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"SignUpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUpForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void backbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (loginTextBox->Text != "" && passwordTextBox->Text != "" && (administratorRadioButton->Checked || realtorRadioButton->Checked || accountantRadioButton->Checked)){
				String^ securityCode = " ";
				StreamReader^ rCodeStream = gcnew StreamReader("PersonnelSecurityCode.txt");
				if (administratorRadioButton->Checked)
				{
					securityCode = rCodeStream->ReadLine();
				}
				else if (accountantRadioButton->Checked)
				{
					rCodeStream->ReadLine();
					securityCode = rCodeStream->ReadLine();
				}
				else if (realtorRadioButton->Checked)
				{
					rCodeStream->ReadLine();
					rCodeStream->ReadLine();
					securityCode = rCodeStream->ReadLine();
				}
				else
				{
					MessageBox::Show("Not all fields are full", "Error", MessageBoxButtons::OK);
					return;
				}

				rCodeStream->Close();

				if (!securityCodeTextBox->Text->Equals(securityCode))
				{
					MessageBox::Show("Security code is invalid", "Error", MessageBoxButtons::OK);
					return;
				}

				StreamReader^ rStream = gcnew StreamReader("LoginAndPassword.txt");
				String^ login = "";
				String^ password = "";
				bool isFound = false;
				while (login != nullptr)
				{
					login = rStream->ReadLine();
					if (login == nullptr)
						break;

					if (login == loginTextBox->Text)
					{
						password = rStream->ReadLine();
						if (password == passwordTextBox->Text)
						{
							rStream->Close();
							isFound = true;
							break;
						}
						rStream->ReadLine();
						continue;
					}
					else {
						rStream->ReadLine();
						rStream->ReadLine();
					}
				}
				rStream->Close();
				if (isFound)
					MessageBox::Show("Such a employee already exists", "", MessageBoxButtons::OK);					
				else {
					StreamWriter^ wStream = gcnew StreamWriter("LoginAndPassword.txt", true, System::Text::Encoding::Unicode);

					wStream->WriteLine(loginTextBox->Text);
					wStream->WriteLine(passwordTextBox->Text);

					if (realtorRadioButton->Checked)
						wStream->WriteLine(REALTOR);
					else if (administratorRadioButton->Checked)
						wStream->WriteLine(ADMINISTRATOR);
					else if (accountantRadioButton->Checked)
						wStream->WriteLine(ACCOUNTANT);

					wStream->Close();
					MessageBox::Show("Successful registration", "", MessageBoxButtons::OK);

					this->Close();
				}
			
				return;
			}
			MessageBox::Show("Not all fields are full", "Error", MessageBoxButtons::OK);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}

	}
	};
}