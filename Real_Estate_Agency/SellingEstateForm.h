#pragma once
#include "WorkWithEstate.h"
#include "Estate.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SignUpClient
	/// </summary>
	public ref class SellingEstateForm : public System::Windows::Forms::Form
	{
	public:
		SellingEstateForm(void)
		{
			InitializeComponent();
			estates = (gcnew WorkWithEstate())->read("SellingEstate.txt");
			dataGridView1->Rows->Clear();
			for (size_t i = 0; i < estates->Count; i++)
				dataGridView1->Rows->Add(estates[i]->getType(), estates[i]->getBedrooms(), estates[i]->getArea(), estates[i]->getPrice());
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SellingEstateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: List<Estate^>^ estates = nullptr;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NameDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BedroomsColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AreaColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PriceColumn;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  minPriceSearchTextbox;
	private: System::Windows::Forms::TextBox^  maxPriceSearchTextbox;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::Label^  minAreaSearchLabel;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  minAreaSearchTextbox;
	private: System::Windows::Forms::TextBox^  maxAreaSearchTextbox;
	private: System::Windows::Forms::Label^  typeSearchLabel;
	private: System::Windows::Forms::ComboBox^  typeSearchComboBox;
	private: System::Windows::Forms::Label^  bedroomsSearchLabel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  minBedroomsSearchLabel;
	private: System::Windows::Forms::Label^  maxBedroomsSearchLabel;
	private: System::Windows::Forms::TextBox^  minBedroomsSearchTextbox;
	private: System::Windows::Forms::TextBox^  maxBedroomsSearchTextbox;
	private: System::Windows::Forms::Label^  areaSearchLabel;
	private: System::Windows::Forms::Label^  priceSearchLabel;
	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::TableLayoutPanel^  EstateTLPanel;





















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NameDataGridView = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BedroomsColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AreaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->minPriceSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->maxPriceSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->minAreaSearchLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->minAreaSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->maxAreaSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->typeSearchLabel = (gcnew System::Windows::Forms::Label());
			this->typeSearchComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->bedroomsSearchLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->minBedroomsSearchLabel = (gcnew System::Windows::Forms::Label());
			this->maxBedroomsSearchLabel = (gcnew System::Windows::Forms::Label());
			this->minBedroomsSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->maxBedroomsSearchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->areaSearchLabel = (gcnew System::Windows::Forms::Label());
			this->priceSearchLabel = (gcnew System::Windows::Forms::Label());
			this->EstateTLPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->EstateTLPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NameDataGridView,
					this->BedroomsColumn, this->AreaColumn, this->PriceColumn
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 183);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(386, 131);
			this->dataGridView1->TabIndex = 1;
			// 
			// NameDataGridView
			// 
			this->NameDataGridView->HeaderText = L"Type";
			this->NameDataGridView->Name = L"NameDataGridView";
			this->NameDataGridView->ReadOnly = true;
			// 
			// BedroomsColumn
			// 
			this->BedroomsColumn->HeaderText = L"Bedrooms";
			this->BedroomsColumn->Name = L"BedroomsColumn";
			this->BedroomsColumn->ReadOnly = true;
			// 
			// AreaColumn
			// 
			this->AreaColumn->HeaderText = L"Area";
			this->AreaColumn->Name = L"AreaColumn";
			this->AreaColumn->ReadOnly = true;
			// 
			// PriceColumn
			// 
			this->PriceColumn->HeaderText = L"Price";
			this->PriceColumn->Name = L"PriceColumn";
			this->PriceColumn->ReadOnly = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(386, 174);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Search";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->searchButton, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 111)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(380, 155);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// searchButton
			// 
			this->searchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchButton->Location = System::Drawing::Point(3, 114);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(374, 38);
			this->searchButton->TabIndex = 4;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &SellingEstateForm::searchButton_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				17.06667F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				82.93333F)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel6, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->typeSearchLabel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->typeSearchComboBox, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->bedroomsSearchLabel, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->areaSearchLabel, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->priceSearchLabel, 0, 3);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(374, 105);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 4;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label10, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->minPriceSearchTextbox, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->maxPriceSearchTextbox, 3, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(66, 81);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(305, 21);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 21);
			this->label9->TabIndex = 0;
			this->label9->Text = L"min";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(155, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 21);
			this->label10->TabIndex = 2;
			this->label10->Text = L"max";
			// 
			// minPriceSearchTextbox
			// 
			this->minPriceSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minPriceSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minPriceSearchTextbox->Name = L"minPriceSearchTextbox";
			this->minPriceSearchTextbox->Size = System::Drawing::Size(113, 20);
			this->minPriceSearchTextbox->TabIndex = 3;
			// 
			// maxPriceSearchTextbox
			// 
			this->maxPriceSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxPriceSearchTextbox->Location = System::Drawing::Point(188, 3);
			this->maxPriceSearchTextbox->Name = L"maxPriceSearchTextbox";
			this->maxPriceSearchTextbox->Size = System::Drawing::Size(114, 20);
			this->maxPriceSearchTextbox->TabIndex = 4;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 4;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->minAreaSearchLabel, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label7, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->minAreaSearchTextbox, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->maxAreaSearchTextbox, 3, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(66, 55);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(305, 20);
			this->tableLayoutPanel5->TabIndex = 4;
			// 
			// minAreaSearchLabel
			// 
			this->minAreaSearchLabel->AutoSize = true;
			this->minAreaSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minAreaSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minAreaSearchLabel->Name = L"minAreaSearchLabel";
			this->minAreaSearchLabel->Size = System::Drawing::Size(27, 20);
			this->minAreaSearchLabel->TabIndex = 0;
			this->minAreaSearchLabel->Text = L"min";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(155, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"max";
			// 
			// minAreaSearchTextbox
			// 
			this->minAreaSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minAreaSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minAreaSearchTextbox->Name = L"minAreaSearchTextbox";
			this->minAreaSearchTextbox->Size = System::Drawing::Size(113, 20);
			this->minAreaSearchTextbox->TabIndex = 3;
			// 
			// maxAreaSearchTextbox
			// 
			this->maxAreaSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxAreaSearchTextbox->Location = System::Drawing::Point(188, 3);
			this->maxAreaSearchTextbox->Name = L"maxAreaSearchTextbox";
			this->maxAreaSearchTextbox->Size = System::Drawing::Size(114, 20);
			this->maxAreaSearchTextbox->TabIndex = 4;
			// 
			// typeSearchLabel
			// 
			this->typeSearchLabel->AutoSize = true;
			this->typeSearchLabel->Location = System::Drawing::Point(3, 0);
			this->typeSearchLabel->Name = L"typeSearchLabel";
			this->typeSearchLabel->Size = System::Drawing::Size(31, 13);
			this->typeSearchLabel->TabIndex = 0;
			this->typeSearchLabel->Text = L"Type";
			// 
			// typeSearchComboBox
			// 
			this->typeSearchComboBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeSearchComboBox->FormattingEnabled = true;
			this->typeSearchComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"House", L"Apartment", L"Other" });
			this->typeSearchComboBox->Location = System::Drawing::Point(66, 3);
			this->typeSearchComboBox->Name = L"typeSearchComboBox";
			this->typeSearchComboBox->Size = System::Drawing::Size(305, 21);
			this->typeSearchComboBox->TabIndex = 1;
			// 
			// bedroomsSearchLabel
			// 
			this->bedroomsSearchLabel->AutoSize = true;
			this->bedroomsSearchLabel->Location = System::Drawing::Point(3, 26);
			this->bedroomsSearchLabel->Name = L"bedroomsSearchLabel";
			this->bedroomsSearchLabel->Size = System::Drawing::Size(54, 13);
			this->bedroomsSearchLabel->TabIndex = 2;
			this->bedroomsSearchLabel->Text = L"Bedrooms";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 4;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->minBedroomsSearchLabel, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->maxBedroomsSearchLabel, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->minBedroomsSearchTextbox, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->maxBedroomsSearchTextbox, 3, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(66, 29);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(305, 20);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// minBedroomsSearchLabel
			// 
			this->minBedroomsSearchLabel->AutoSize = true;
			this->minBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minBedroomsSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minBedroomsSearchLabel->Name = L"minBedroomsSearchLabel";
			this->minBedroomsSearchLabel->Size = System::Drawing::Size(27, 20);
			this->minBedroomsSearchLabel->TabIndex = 0;
			this->minBedroomsSearchLabel->Text = L"min";
			// 
			// maxBedroomsSearchLabel
			// 
			this->maxBedroomsSearchLabel->AutoSize = true;
			this->maxBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxBedroomsSearchLabel->Location = System::Drawing::Point(155, 0);
			this->maxBedroomsSearchLabel->Name = L"maxBedroomsSearchLabel";
			this->maxBedroomsSearchLabel->Size = System::Drawing::Size(27, 20);
			this->maxBedroomsSearchLabel->TabIndex = 2;
			this->maxBedroomsSearchLabel->Text = L"max";
			// 
			// minBedroomsSearchTextbox
			// 
			this->minBedroomsSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minBedroomsSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minBedroomsSearchTextbox->Name = L"minBedroomsSearchTextbox";
			this->minBedroomsSearchTextbox->Size = System::Drawing::Size(113, 20);
			this->minBedroomsSearchTextbox->TabIndex = 3;
			// 
			// maxBedroomsSearchTextbox
			// 
			this->maxBedroomsSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxBedroomsSearchTextbox->Location = System::Drawing::Point(188, 3);
			this->maxBedroomsSearchTextbox->Name = L"maxBedroomsSearchTextbox";
			this->maxBedroomsSearchTextbox->Size = System::Drawing::Size(114, 20);
			this->maxBedroomsSearchTextbox->TabIndex = 4;
			// 
			// areaSearchLabel
			// 
			this->areaSearchLabel->Location = System::Drawing::Point(3, 52);
			this->areaSearchLabel->Name = L"areaSearchLabel";
			this->areaSearchLabel->Size = System::Drawing::Size(32, 13);
			this->areaSearchLabel->TabIndex = 0;
			this->areaSearchLabel->Text = L"Area";
			// 
			// priceSearchLabel
			// 
			this->priceSearchLabel->AutoSize = true;
			this->priceSearchLabel->Location = System::Drawing::Point(3, 78);
			this->priceSearchLabel->Name = L"priceSearchLabel";
			this->priceSearchLabel->Size = System::Drawing::Size(31, 13);
			this->priceSearchLabel->TabIndex = 5;
			this->priceSearchLabel->Text = L"Price";
			// 
			// EstateTLPanel
			// 
			this->EstateTLPanel->ColumnCount = 1;
			this->EstateTLPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->EstateTLPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->EstateTLPanel->Controls->Add(this->groupBox2, 0, 0);
			this->EstateTLPanel->Controls->Add(this->dataGridView1, 0, 1);
			this->EstateTLPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EstateTLPanel->Location = System::Drawing::Point(0, 0);
			this->EstateTLPanel->Name = L"EstateTLPanel";
			this->EstateTLPanel->RowCount = 2;
			this->EstateTLPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 180)));
			this->EstateTLPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->EstateTLPanel->Size = System::Drawing::Size(392, 317);
			this->EstateTLPanel->TabIndex = 4;
			// 
			// SellingEstateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 317);
			this->Controls->Add(this->EstateTLPanel);
			this->MinimumSize = System::Drawing::Size(408, 356);
			this->Name = L"SellingEstateForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->EstateTLPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		double minB = minBedroomsSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minBedroomsSearchTextbox->Text);
		double maxB = maxBedroomsSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxBedroomsSearchTextbox->Text);

		double minA = minAreaSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minAreaSearchTextbox->Text);
		double maxA = maxAreaSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxAreaSearchTextbox->Text);

		double minP = minPriceSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minPriceSearchTextbox->Text);
		double maxP = maxPriceSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxPriceSearchTextbox->Text);

		List<Estate^>^ sEstate = WorkWithEstate::searchEstates(estates, typeSearchComboBox->Text, minB, maxB, minA, maxA, minP, maxP);
		dataGridView1->Rows->Clear();
		for (size_t i = 0; i < sEstate->Count; i++)
			dataGridView1->Rows->Add(sEstate[i]->getType(), sEstate[i]->getBedrooms(), sEstate[i]->getArea(), sEstate[i]->getPrice());
	}
	};
}