#pragma once
#include "ReportForm.h"
#include "Estate.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AccountantForm
	/// </summary>
	public ref class AccountantForm : public System::Windows::Forms::Form
	{
	public:
		AccountantForm(void)
		{
			InitializeComponent();
			this->openToolStripMenuItem_Click(nullptr, nullptr);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AccountantForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  BReport;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Button^  BSearch;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  paymentDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  numberColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AmountColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estateColumn;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  yearTextBox;
	private: System::ComponentModel::IContainer^  components;
			 /// <summary>
			 /// ќб€зательна€ переменна€ конструктора.
			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
			 void InitializeComponent(void)
			 {
				 this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				 this->paymentDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->numberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->AmountColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->estateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
				 this->BSearch = (gcnew System::Windows::Forms::Button());
				 this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->BReport = (gcnew System::Windows::Forms::Button());
				 this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->yearTextBox = (gcnew System::Windows::Forms::TextBox());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				 this->tableLayoutPanel1->SuspendLayout();
				 this->tableLayoutPanel2->SuspendLayout();
				 this->tableLayoutPanel3->SuspendLayout();
				 this->tableLayoutPanel4->SuspendLayout();
				 this->tableLayoutPanel5->SuspendLayout();
				 this->menuStrip1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // dataGridView1
				 // 
				 this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
					 this->paymentDate,
						 this->numberColumn, this->AmountColumn, this->estateColumn
				 });
				 this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->dataGridView1->Location = System::Drawing::Point(236, 3);
				 this->dataGridView1->Name = L"dataGridView1";
				 this->dataGridView1->Size = System::Drawing::Size(552, 264);
				 this->dataGridView1->TabIndex = 1;
				 // 
				 // paymentDate
				 // 
				 this->paymentDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->paymentDate->HeaderText = L"Payment date";
				 this->paymentDate->MaxInputLength = 300;
				 this->paymentDate->Name = L"paymentDate";
				 this->paymentDate->ReadOnly = true;
				 // 
				 // numberColumn
				 // 
				 this->numberColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->numberColumn->HeaderText = L"Number card";
				 this->numberColumn->Name = L"numberColumn";
				 this->numberColumn->ReadOnly = true;
				 // 
				 // AmountColumn
				 // 
				 this->AmountColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->AmountColumn->HeaderText = L"Amount of payment";
				 this->AmountColumn->Name = L"AmountColumn";
				 this->AmountColumn->ReadOnly = true;
				 // 
				 // estateColumn
				 // 
				 this->estateColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->estateColumn->HeaderText = L"Estate";
				 this->estateColumn->Name = L"estateColumn";
				 this->estateColumn->ReadOnly = true;
				 // 
				 // tableLayoutPanel1
				 // 
				 this->tableLayoutPanel1->ColumnCount = 2;
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 29.55145F)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 70.44855F)));
				 this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 0);
				 this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
				 this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
				 this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				 this->tableLayoutPanel1->RowCount = 1;
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tableLayoutPanel1->Size = System::Drawing::Size(791, 270);
				 this->tableLayoutPanel1->TabIndex = 2;
				 // 
				 // tableLayoutPanel2
				 // 
				 this->tableLayoutPanel2->ColumnCount = 1;
				 this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 1);
				 this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
				 this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
				 this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
				 this->tableLayoutPanel2->RowCount = 2;
				 this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.36364F)));
				 this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.63636F)));
				 this->tableLayoutPanel2->Size = System::Drawing::Size(227, 264);
				 this->tableLayoutPanel2->TabIndex = 2;
				 // 
				 // tableLayoutPanel3
				 // 
				 this->tableLayoutPanel3->ColumnCount = 1;
				 this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanel3->Controls->Add(this->dateTimePicker, 0, 0);
				 this->tableLayoutPanel3->Controls->Add(this->BSearch, 0, 1);
				 this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel3->Location = System::Drawing::Point(3, 99);
				 this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
				 this->tableLayoutPanel3->RowCount = 2;
				 this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
				 this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tableLayoutPanel3->Size = System::Drawing::Size(221, 162);
				 this->tableLayoutPanel3->TabIndex = 1;
				 // 
				 // dateTimePicker
				 // 
				 this->dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
				 this->dateTimePicker->Location = System::Drawing::Point(3, 3);
				 this->dateTimePicker->Name = L"dateTimePicker";
				 this->dateTimePicker->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->dateTimePicker->Size = System::Drawing::Size(215, 20);
				 this->dateTimePicker->TabIndex = 0;
				 // 
				 // BSearch
				 // 
				 this->BSearch->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->BSearch->Location = System::Drawing::Point(3, 27);
				 this->BSearch->Name = L"BSearch";
				 this->BSearch->Size = System::Drawing::Size(215, 132);
				 this->BSearch->TabIndex = 1;
				 this->BSearch->Text = L"Search";
				 this->BSearch->UseVisualStyleBackColor = true;
				 this->BSearch->Click += gcnew System::EventHandler(this, &AccountantForm::BSearch_Click);
				 // 
				 // tableLayoutPanel4
				 // 
				 this->tableLayoutPanel4->ColumnCount = 1;
				 this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanel4->Controls->Add(this->BReport, 0, 1);
				 this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
				 this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
				 this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
				 this->tableLayoutPanel4->RowCount = 2;
				 this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
				 this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tableLayoutPanel4->Size = System::Drawing::Size(221, 90);
				 this->tableLayoutPanel4->TabIndex = 2;
				 // 
				 // BReport
				 // 
				 this->BReport->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->BReport->Location = System::Drawing::Point(3, 32);
				 this->BReport->Name = L"BReport";
				 this->BReport->Size = System::Drawing::Size(215, 55);
				 this->BReport->TabIndex = 0;
				 this->BReport->Text = L"Annual report";
				 this->BReport->UseVisualStyleBackColor = true;
				 this->BReport->Click += gcnew System::EventHandler(this, &AccountantForm::BReport_Click);
				 // 
				 // tableLayoutPanel5
				 // 
				 this->tableLayoutPanel5->ColumnCount = 2;
				 this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 38)));
				 this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanel5->Controls->Add(this->label1, 0, 0);
				 this->tableLayoutPanel5->Controls->Add(this->yearTextBox, 1, 0);
				 this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
				 this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
				 this->tableLayoutPanel5->RowCount = 1;
				 this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tableLayoutPanel5->Size = System::Drawing::Size(215, 23);
				 this->tableLayoutPanel5->TabIndex = 1;
				 // 
				 // label1
				 // 
				 this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->label1->Location = System::Drawing::Point(3, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(32, 23);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Year";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // yearTextBox
				 // 
				 this->yearTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->yearTextBox->Location = System::Drawing::Point(41, 3);
				 this->yearTextBox->Name = L"yearTextBox";
				 this->yearTextBox->Size = System::Drawing::Size(171, 20);
				 this->yearTextBox->TabIndex = 1;
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(791, 24);
				 this->menuStrip1->TabIndex = 3;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // fileToolStripMenuItem
				 // 
				 this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
				 this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
				 this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
				 this->fileToolStripMenuItem->Text = L"File";
				 // 
				 // openToolStripMenuItem
				 // 
				 this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
				 this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
				 this->openToolStripMenuItem->Text = L"Open";
				 this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &AccountantForm::openToolStripMenuItem_Click);
				 // 
				 // AccountantForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(791, 294);
				 this->Controls->Add(this->tableLayoutPanel1);
				 this->Controls->Add(this->menuStrip1);
				 this->MainMenuStrip = this->menuStrip1;
				 this->MinimumSize = System::Drawing::Size(807, 333);
				 this->Name = L"AccountantForm";
				 this->Text = L"AccountantForm";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				 this->tableLayoutPanel1->ResumeLayout(false);
				 this->tableLayoutPanel2->ResumeLayout(false);
				 this->tableLayoutPanel3->ResumeLayout(false);
				 this->tableLayoutPanel4->ResumeLayout(false);
				 this->tableLayoutPanel5->ResumeLayout(false);
				 this->tableLayoutPanel5->PerformLayout();
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

	private: System::Void BReport_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			ReportForm::year = Convert::ToInt32(yearTextBox->Text);
			if (ReportForm::year < 2017)
				throw gcnew Exception("Please enter higher year value");
			if (ReportForm::year > DateTime::Now.Year)
				throw gcnew Exception("Please enter less year value");
			ReportForm^ form = gcnew ReportForm();
			form->ShowDialog();
		}
		catch (Exception^ex) { MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK); }
	}
	private: System::Void BSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		String^dateSearch = Convert::ToString(dateTimePicker->Value.Day.ToString() + "." + dateTimePicker->Value.Month.ToString() +"."+ dateTimePicker->Value.Year.ToString());

		StreamReader^ rStream = nullptr;
		try {
			rStream = gcnew StreamReader("Payment.txt");

			String^ date = nullptr;
			Int64^ numberCard = nullptr;

			List<String^>^ dataEstate;

			dataGridView1->Rows->Clear();

			do {
				try {
					date = rStream->ReadLine();
					if (date == nullptr)
						break;
					numberCard = Convert::ToInt64(rStream->ReadLine());
				}
				catch (...) { MessageBox::Show("File is empty", "Error", MessageBoxButtons::OK); return; }

				dataEstate = gcnew List<String^>(rStream->ReadLine()->Split('#'));

				if (dateSearch != date)
					continue;

				dataGridView1->Rows->Add(date, numberCard, dataEstate[3], dataEstate[0]);

			} while (dataEstate != nullptr);
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK); }
		finally{ rStream->Close(); }
	}

	private: void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ rStream = nullptr;
		try {
			rStream = gcnew StreamReader("Payment.txt");

			String^ date = nullptr;
			Int64 numberCard = 0;

			List<String^>^ dataEstate;
			dataGridView1->Rows->Clear();
			do {
				try {
					date = rStream->ReadLine();
					if (date == nullptr)
						break;
					numberCard = Convert::ToInt64(rStream->ReadLine());
				}
				catch (...) { MessageBox::Show("File is empty", "Error", MessageBoxButtons::OK); return; }

				dataEstate = gcnew List<String^>(rStream->ReadLine()->Split('#'));


				dataGridView1->Rows->Add(date, numberCard, dataEstate[3], dataEstate[0]);

			} while (dataEstate != nullptr);
		}
		catch (Exception^ex) { MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK); }
		finally{ rStream->Close(); }
	}

	};
}
