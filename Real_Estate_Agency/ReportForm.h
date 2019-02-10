#pragma once

namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		static 
			Int32 year = 2018;

		double TPrice = 0, TArea = 0;

	public:
		ReportForm(void)
		{
			InitializeComponent();
			StreamReader^ rStream = nullptr;
			List<String^>^estate = nullptr;
			int count = 0, countHouse = 0, countApartament = 0, countOther = 0, countBed1 = 0, countBed2 = 0, countBed3 = 0;

			try {
				String^ strFromFile = nullptr;

				rStream = gcnew StreamReader("Payment.txt");

				do {
					strFromFile = rStream->ReadLine();
					if (strFromFile == nullptr)
						break;
					if (year == Convert::ToInt32((gcnew List<String^>(strFromFile->Split('.')))[2]))
					{
						rStream->ReadLine();
						estate = gcnew List<String^>(rStream->ReadLine()->Split('#'));

						if (estate[0] == "House")
							++countHouse;
						else if (estate[0] == "Apartment")
							++countApartament;
						else if (estate[0] == "Other")
							++countOther;

						switch (Convert::ToInt32(estate[1]))
						{
						case 0:
						case 1:
						case 2: countBed1 += 1; break;
						case 3:
						case 4:
						case 5:countBed2 += 1; break;

						default: countBed3 += 1; break;
						}
						TArea += Convert::ToDouble(estate[2]);
						TPrice += Convert::ToDouble(estate[3]);
						count += 1;
					}
					else {
						rStream->ReadLine();
						rStream->ReadLine();
					}
				} while (strFromFile != nullptr);
			}
			catch (Exception^ex) { MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK); }

			finally{ rStream->Close();
			LHouse->Text = Convert::ToString(countHouse);
			LApartament->Text = Convert::ToString(countApartament);
			LOther->Text = Convert::ToString(countOther);
			LBedroom1->Text = Convert::ToString(countBed1);
			LBedroom2->Text = Convert::ToString(countBed2);
			LBedroom3->Text = Convert::ToString(countBed3);
			LTotalPrice->Text = Convert::ToString(TPrice);
			LTotalEstate->Text = Convert::ToString(count);
			}
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel12;
	private: System::Windows::Forms::Label^  LTotalEstate;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
	private: System::Windows::Forms::Label^  LTotalPrice;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Label^  LOther;
	private: System::Windows::Forms::Label^  LApartament;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  LHouse;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::Label^  LBedroom3;
	private: System::Windows::Forms::Label^  LBedroom2;
	private: System::Windows::Forms::Label^  LBedroom1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;

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
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LTotalEstate = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LTotalPrice = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LOther = (gcnew System::Windows::Forms::Label());
			this->LApartament = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LHouse = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LBedroom3 = (gcnew System::Windows::Forms::Label());
			this->LBedroom2 = (gcnew System::Windows::Forms::Label());
			this->LBedroom1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel12->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 2;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.04348F)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.95652F)));
			this->tableLayoutPanel12->Controls->Add(this->LTotalEstate, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->label14, 0, 0);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(3, 216);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(203, 26);
			this->tableLayoutPanel12->TabIndex = 10;
			// 
			// LTotalEstate
			// 
			this->LTotalEstate->AutoSize = true;
			this->LTotalEstate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LTotalEstate->Location = System::Drawing::Point(80, 0);
			this->LTotalEstate->Name = L"LTotalEstate";
			this->LTotalEstate->Size = System::Drawing::Size(120, 26);
			this->LTotalEstate->TabIndex = 4;
			this->LTotalEstate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(3, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 26);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Total number estate";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 2;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.04348F)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.95652F)));
			this->tableLayoutPanel11->Controls->Add(this->LTotalPrice, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->label15, 0, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(3, 248);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				28)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(203, 28);
			this->tableLayoutPanel11->TabIndex = 9;
			// 
			// LTotalPrice
			// 
			this->LTotalPrice->AutoSize = true;
			this->LTotalPrice->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LTotalPrice->Location = System::Drawing::Point(80, 0);
			this->LTotalPrice->Name = L"LTotalPrice";
			this->LTotalPrice->Size = System::Drawing::Size(120, 28);
			this->LTotalPrice->TabIndex = 4;
			this->LTotalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(3, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(71, 28);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Total price";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Type";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.58696F)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.41304F)));
			this->tableLayoutPanel7->Controls->Add(this->LOther, 1, 2);
			this->tableLayoutPanel7->Controls->Add(this->LApartament, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->LHouse, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 26);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 3;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(203, 76);
			this->tableLayoutPanel7->TabIndex = 5;
			// 
			// LOther
			// 
			this->LOther->AutoSize = true;
			this->LOther->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LOther->Location = System::Drawing::Point(81, 50);
			this->LOther->Name = L"LOther";
			this->LOther->Size = System::Drawing::Size(119, 26);
			this->LOther->TabIndex = 5;
			this->LOther->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LApartament
			// 
			this->LApartament->AutoSize = true;
			this->LApartament->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LApartament->Location = System::Drawing::Point(81, 25);
			this->LApartament->Name = L"LApartament";
			this->LApartament->Size = System::Drawing::Size(119, 25);
			this->LApartament->TabIndex = 4;
			this->LApartament->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"House";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Apartament";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(3, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Other";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LHouse
			// 
			this->LHouse->AutoSize = true;
			this->LHouse->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LHouse->Location = System::Drawing::Point(81, 0);
			this->LHouse->Name = L"LHouse";
			this->LHouse->Size = System::Drawing::Size(119, 25);
			this->LHouse->TabIndex = 3;
			this->LHouse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(3, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 23);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Bedrooms";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.04348F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.95652F)));
			this->tableLayoutPanel8->Controls->Add(this->LBedroom3, 1, 2);
			this->tableLayoutPanel8->Controls->Add(this->LBedroom2, 1, 1);
			this->tableLayoutPanel8->Controls->Add(this->LBedroom1, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->label12, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 131);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(203, 79);
			this->tableLayoutPanel8->TabIndex = 7;
			// 
			// LBedroom3
			// 
			this->LBedroom3->AutoSize = true;
			this->LBedroom3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LBedroom3->Location = System::Drawing::Point(80, 52);
			this->LBedroom3->Name = L"LBedroom3";
			this->LBedroom3->Size = System::Drawing::Size(120, 27);
			this->LBedroom3->TabIndex = 7;
			this->LBedroom3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LBedroom2
			// 
			this->LBedroom2->AutoSize = true;
			this->LBedroom2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LBedroom2->Location = System::Drawing::Point(80, 26);
			this->LBedroom2->Name = L"LBedroom2";
			this->LBedroom2->Size = System::Drawing::Size(120, 26);
			this->LBedroom2->TabIndex = 6;
			this->LBedroom2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LBedroom1
			// 
			this->LBedroom1->AutoSize = true;
			this->LBedroom1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LBedroom1->Location = System::Drawing::Point(80, 0);
			this->LBedroom1->Name = L"LBedroom1";
			this->LBedroom1->Size = System::Drawing::Size(120, 26);
			this->LBedroom1->TabIndex = 5;
			this->LBedroom1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 26);
			this->label11->TabIndex = 0;
			this->label11->Text = L"From 0 to 2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(3, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 26);
			this->label12->TabIndex = 1;
			this->label12->Text = L"From 3 to 5";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(3, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 27);
			this->label13->TabIndex = 2;
			this->label13->Text = L"From 6";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel8, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel7, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel12, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel11, 0, 5);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 6;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(209, 279);
			this->tableLayoutPanel2->TabIndex = 7;
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(209, 279);
			this->Controls->Add(this->tableLayoutPanel2);
			this->MinimumSize = System::Drawing::Size(225, 318);
			this->Name = L"ReportForm";
			this->Text = L"ReportForm";
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
	};
}
