#pragma once
#include "CreditCard.h"

namespace RealEstateAgency {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CreditCard
	/// </summary>
	public ref class CreditCardForm : public System::Windows::Forms::Form
	{
	public: CreditCard^ card = gcnew CreditCard();
	public:
		CreditCardForm(void)
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
		~CreditCardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  numberTextBox;
	protected:

	private: System::Windows::Forms::TextBox^  validYearTextBox;
	private: System::Windows::Forms::TextBox^  codeTextBox;
	protected:


	private: System::Windows::Forms::TextBox^  validMonthTextBox;

	private: System::Windows::Forms::Label^  cardLabel;
	private: System::Windows::Forms::Label^  codeLabel;




	private: System::Windows::Forms::Label^  label;



	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Label^  validLabel;
	private: System::Windows::Forms::Button^  okButton;




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
			this->numberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->validYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->codeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->validMonthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->cardLabel = (gcnew System::Windows::Forms::Label());
			this->codeLabel = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->validLabel = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// numberTextBox
			// 
			this->numberTextBox->Location = System::Drawing::Point(103, 3);
			this->numberTextBox->Name = L"numberTextBox";
			this->numberTextBox->Size = System::Drawing::Size(133, 24);
			this->numberTextBox->TabIndex = 0;
			// 
			// validYearTextBox
			// 
			this->validYearTextBox->Location = System::Drawing::Point(159, 3);
			this->validYearTextBox->Name = L"validYearTextBox";
			this->validYearTextBox->Size = System::Drawing::Size(25, 24);
			this->validYearTextBox->TabIndex = 1;
			// 
			// codeTextBox
			// 
			this->codeTextBox->Location = System::Drawing::Point(379, 3);
			this->codeTextBox->Name = L"codeTextBox";
			this->codeTextBox->Size = System::Drawing::Size(31, 24);
			this->codeTextBox->TabIndex = 2;
			// 
			// validMonthTextBox
			// 
			this->validMonthTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->validMonthTextBox->Location = System::Drawing::Point(104, 3);
			this->validMonthTextBox->Name = L"validMonthTextBox";
			this->validMonthTextBox->Size = System::Drawing::Size(24, 24);
			this->validMonthTextBox->TabIndex = 3;
			// 
			// cardLabel
			// 
			this->cardLabel->AutoSize = true;
			this->cardLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->cardLabel->Location = System::Drawing::Point(3, 0);
			this->cardLabel->Name = L"cardLabel";
			this->cardLabel->Size = System::Drawing::Size(94, 18);
			this->cardLabel->TabIndex = 6;
			this->cardLabel->Text = L"Card number";
			this->cardLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// codeLabel
			// 
			this->codeLabel->AutoSize = true;
			this->codeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->codeLabel->Location = System::Drawing::Point(271, 0);
			this->codeLabel->Name = L"codeLabel";
			this->codeLabel->Size = System::Drawing::Size(102, 18);
			this->codeLabel->TabIndex = 7;
			this->codeLabel->Text = L"Security code";
			this->codeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Dock = System::Windows::Forms::DockStyle::Top;
			this->label->Location = System::Drawing::Point(134, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(19, 18);
			this->label->TabIndex = 8;
			this->label->Text = L"/";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(425, 99);
			this->tableLayoutPanel1->TabIndex = 11;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				502)));
			this->tableLayoutPanel2->Controls->Add(this->numberTextBox, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->cardLabel, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(419, 43);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 6;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				101)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				25)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				112)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				226)));
			this->tableLayoutPanel3->Controls->Add(this->validLabel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->validMonthTextBox, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->validYearTextBox, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->codeLabel, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->codeTextBox, 5, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 52);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(419, 44);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// validLabel
			// 
			this->validLabel->AutoSize = true;
			this->validLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->validLabel->Location = System::Drawing::Point(3, 0);
			this->validLabel->Name = L"validLabel";
			this->validLabel->Size = System::Drawing::Size(95, 18);
			this->validLabel->TabIndex = 12;
			this->validLabel->Text = L"Valid thru";
			this->validLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(3, 114);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(419, 32);
			this->okButton->TabIndex = 12;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &CreditCardForm::okButton_Click);
			// 
			// CreditCardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 156);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(441, 195);
			this->MinimumSize = System::Drawing::Size(441, 195);
			this->Name = L"CreditCardForm";
			this->Text = L"CreditCard";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (numberTextBox->Text->Length == 16)
			{
				card->setCardNumber(Convert::ToInt64(numberTextBox->Text));
				if (codeTextBox->Text->Length == 3)
				{
					card->setSecurityCode(Convert::ToInt64(codeTextBox->Text));
					if (validMonthTextBox->Text->Length == 2 && validYearTextBox->Text->Length == 2)
					{
						List<Int32>^ ValidThru = gcnew List<Int32>();
						if (Convert::ToInt32(validMonthTextBox->Text) <= 12)
							ValidThru->Add(Convert::ToInt32(validMonthTextBox->Text));
						else throw gcnew Exception("Data is invalid");

						if (Convert::ToInt32(validYearTextBox->Text) > DateTime::Now.Year % 100)
							ValidThru->Add(Convert::ToInt32(validYearTextBox->Text));
						else throw gcnew Exception("Data is invalid");

						card->setValidThru(ValidThru);
					}
					else throw gcnew Exception("Data is invalid");
				}
				else throw gcnew Exception("Data is invalid");
			}
			else throw gcnew Exception("Data is invalid");
			this->Close();
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
			card = gcnew CreditCard();
		}
	}
};
}
