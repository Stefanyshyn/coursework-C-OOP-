#pragma once
#include "Client.h"
#include "Estate.h"
#include "WorkWithClient.h"
#include "WorkWithEstate.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ToPayAnOrderForm
	/// </summary>
	public ref class ToPayAnOrderForm : public System::Windows::Forms::Form
	{
	public:
		Boolean isPay = false;
		Client^ client;
		Estate^ estate;
		void setClient(Client^ cl)
		{
			client = cl;
		}
		void setEstate(Estate^ est)
		{
			estate = est;
			LType->Text = estate->getType();
			LBedrooms->Text = estate->getBedrooms().ToString();
			LArea->Text = estate->getArea().ToString();
			LPrice->Text = estate->getPrice().ToString();
		}
		ToPayAnOrderForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^  verificationGroupBox;
	private: System::Windows::Forms::GroupBox^  dataGroupBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  numberTextBox;
	private: System::Windows::Forms::Label^  cardLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  validLabel;
	private: System::Windows::Forms::TextBox^  validMonthTextBox;
	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::TextBox^  validYearTextBox;
	private: System::Windows::Forms::Label^  codeLabel;
	private: System::Windows::Forms::TextBox^  codeTextBox;
	private: System::Windows::Forms::Label^  LArea;
	private: System::Windows::Forms::Label^  LPrice;


	private: System::Windows::Forms::Label^  LBedrooms;

	private: System::Windows::Forms::Label^  LType;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ToPayAnOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->verificationGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->cardLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->validLabel = (gcnew System::Windows::Forms::Label());
			this->validMonthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->validYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->codeLabel = (gcnew System::Windows::Forms::Label());
			this->codeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->LArea = (gcnew System::Windows::Forms::Label());
			this->LPrice = (gcnew System::Windows::Forms::Label());
			this->LBedrooms = (gcnew System::Windows::Forms::Label());
			this->LType = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->verificationGroupBox->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->dataGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				71.27158F)));
			this->tableLayoutPanel1->Controls->Add(this->verificationGroupBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGroupBox, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(637, 200);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// verificationGroupBox
			// 
			this->verificationGroupBox->Controls->Add(this->button1);
			this->verificationGroupBox->Controls->Add(this->tableLayoutPanel2);
			this->verificationGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->verificationGroupBox->Location = System::Drawing::Point(3, 3);
			this->verificationGroupBox->Name = L"verificationGroupBox";
			this->verificationGroupBox->Size = System::Drawing::Size(631, 116);
			this->verificationGroupBox->TabIndex = 0;
			this->verificationGroupBox->TabStop = false;
			this->verificationGroupBox->Text = L"Verification";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(441, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 95);
			this->button1->TabIndex = 13;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ToPayAnOrderForm::button1_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(425, 99);
			this->tableLayoutPanel2->TabIndex = 12;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				502)));
			this->tableLayoutPanel3->Controls->Add(this->numberTextBox, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->cardLabel, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(419, 43);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// numberTextBox
			// 
			this->numberTextBox->Location = System::Drawing::Point(103, 3);
			this->numberTextBox->Name = L"numberTextBox";
			this->numberTextBox->Size = System::Drawing::Size(133, 24);
			this->numberTextBox->TabIndex = 0;
			// 
			// cardLabel
			// 
			this->cardLabel->AutoSize = true;
			this->cardLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->cardLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cardLabel->Location = System::Drawing::Point(3, 0);
			this->cardLabel->Name = L"cardLabel";
			this->cardLabel->Size = System::Drawing::Size(94, 15);
			this->cardLabel->TabIndex = 6;
			this->cardLabel->Text = L"Card number";
			this->cardLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 6;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				101)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				25)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				112)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				226)));
			this->tableLayoutPanel4->Controls->Add(this->validLabel, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->validMonthTextBox, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->label, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->validYearTextBox, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->codeLabel, 4, 0);
			this->tableLayoutPanel4->Controls->Add(this->codeTextBox, 5, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 52);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(419, 44);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// validLabel
			// 
			this->validLabel->AutoSize = true;
			this->validLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->validLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->validLabel->Location = System::Drawing::Point(3, 0);
			this->validLabel->Name = L"validLabel";
			this->validLabel->Size = System::Drawing::Size(95, 15);
			this->validLabel->TabIndex = 12;
			this->validLabel->Text = L"Valid thru";
			this->validLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// validMonthTextBox
			// 
			this->validMonthTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->validMonthTextBox->Location = System::Drawing::Point(104, 3);
			this->validMonthTextBox->Name = L"validMonthTextBox";
			this->validMonthTextBox->Size = System::Drawing::Size(24, 24);
			this->validMonthTextBox->TabIndex = 3;
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
			// validYearTextBox
			// 
			this->validYearTextBox->Location = System::Drawing::Point(159, 3);
			this->validYearTextBox->Name = L"validYearTextBox";
			this->validYearTextBox->Size = System::Drawing::Size(25, 24);
			this->validYearTextBox->TabIndex = 1;
			// 
			// codeLabel
			// 
			this->codeLabel->AutoSize = true;
			this->codeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->codeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->codeLabel->Location = System::Drawing::Point(271, 0);
			this->codeLabel->Name = L"codeLabel";
			this->codeLabel->Size = System::Drawing::Size(102, 15);
			this->codeLabel->TabIndex = 7;
			this->codeLabel->Text = L"Security code";
			this->codeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// codeTextBox
			// 
			this->codeTextBox->Location = System::Drawing::Point(379, 3);
			this->codeTextBox->Name = L"codeTextBox";
			this->codeTextBox->Size = System::Drawing::Size(31, 24);
			this->codeTextBox->TabIndex = 2;
			// 
			// dataGroupBox
			// 
			this->dataGroupBox->Controls->Add(this->LArea);
			this->dataGroupBox->Controls->Add(this->LPrice);
			this->dataGroupBox->Controls->Add(this->LBedrooms);
			this->dataGroupBox->Controls->Add(this->LType);
			this->dataGroupBox->Controls->Add(this->label4);
			this->dataGroupBox->Controls->Add(this->label3);
			this->dataGroupBox->Controls->Add(this->label2);
			this->dataGroupBox->Controls->Add(this->label1);
			this->dataGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGroupBox->Location = System::Drawing::Point(3, 125);
			this->dataGroupBox->Name = L"dataGroupBox";
			this->dataGroupBox->Size = System::Drawing::Size(631, 72);
			this->dataGroupBox->TabIndex = 1;
			this->dataGroupBox->TabStop = false;
			this->dataGroupBox->Text = L"Data estate";
			// 
			// LArea
			// 
			this->LArea->AutoSize = true;
			this->LArea->Location = System::Drawing::Point(396, 24);
			this->LArea->Name = L"LArea";
			this->LArea->Size = System::Drawing::Size(35, 13);
			this->LArea->TabIndex = 7;
			this->LArea->Text = L"label8";
			// 
			// LPrice
			// 
			this->LPrice->AutoSize = true;
			this->LPrice->Location = System::Drawing::Point(396, 55);
			this->LPrice->Name = L"LPrice";
			this->LPrice->Size = System::Drawing::Size(35, 13);
			this->LPrice->TabIndex = 6;
			this->LPrice->Text = L"label7";
			// 
			// LBedrooms
			// 
			this->LBedrooms->AutoSize = true;
			this->LBedrooms->Location = System::Drawing::Point(72, 55);
			this->LBedrooms->Name = L"LBedrooms";
			this->LBedrooms->Size = System::Drawing::Size(35, 13);
			this->LBedrooms->TabIndex = 5;
			this->LBedrooms->Text = L"label6";
			// 
			// LType
			// 
			this->LType->AutoSize = true;
			this->LType->Location = System::Drawing::Point(71, 24);
			this->LType->Name = L"LType";
			this->LType->Size = System::Drawing::Size(35, 13);
			this->LType->TabIndex = 4;
			this->LType->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(347, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Price";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(347, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Area";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Bedrooms";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Type";
			// 
			// ToPayAnOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 200);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(653, 239);
			this->MinimumSize = System::Drawing::Size(653, 239);
			this->Name = L"ToPayAnOrderForm";
			this->Text = L"ToPayAnOrderForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->verificationGroupBox->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->dataGroupBox->ResumeLayout(false);
			this->dataGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (numberTextBox->Text == Convert::ToString(client->getCreditCard()->getCardNumber()) &&
				codeTextBox->Text == Convert::ToString(client->getCreditCard()->getSecurityCode()) &&
				validMonthTextBox->Text == Convert::ToString(client->getCreditCard()->getValidThru()[0]) &&
				validYearTextBox->Text == Convert::ToString(client->getCreditCard()->getValidThru()[1]))
			{
				isPay = true;
				StreamWriter^ wStreamOrder = nullptr;
				StreamWriter^ wStreamEstate = nullptr;
				try {
					wStreamOrder = gcnew StreamWriter("Payment.txt", true);
					wStreamEstate = gcnew StreamWriter("SellingEstate.txt", true);

					DateTime^ today = DateTime::Now;
					wStreamOrder->WriteLine(today->Day+"."+today->Month + "."+today->Year);
					wStreamOrder->WriteLine(client->getCreditCard()->getCardNumber());
					double priceWithDiscount = estate->getPrice() - estate->getPrice()*client->getDiscount() / 100;
					
					wStreamOrder->WriteLine(estate->getType() + "#" + estate->getBedrooms() + "#" + estate->getArea() + "#" + Convert::ToString(priceWithDiscount));

					wStreamEstate->WriteLine(estate->getType() + "#" + estate->getBedrooms() + "#" + estate->getArea() + "#" + Convert::ToString(priceWithDiscount));
				}
				catch (Exception^ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
				}
				finally{
					wStreamOrder->Close();
					wStreamEstate->Close();
				}
				this->Close();
			}
			else
				throw gcnew Exception("Data is invalid");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	};
}
