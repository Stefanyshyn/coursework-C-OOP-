#pragma once
#include"Estate.h"
#include"WorkWithEstate.h"

namespace RealEstateAgency {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// —водка дл€ WorkWithRealEstateForm
	/// </summary>
	public ref class WorkWithRealEstateForm : public System::Windows::Forms::Form
	{

	public: List<Estate^>^ estates = gcnew List<Estate^>();

	public:
		WorkWithRealEstateForm(void)
		{
			InitializeComponent();
			estates = (gcnew WorkWithEstate())->read("RealEstate.txt");
			dataGridView1->Rows->Clear();
			for (size_t i = 0; i < estates->Count; i++)
				dataGridView1->Rows->Add(estates[i]->getType(), estates[i]->getBedrooms(), estates[i]->getArea(), estates[i]->getPrice());
		
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~WorkWithRealEstateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NameDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BedroomsColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AreaColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PriceColumn;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;




	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
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


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
	private: System::Windows::Forms::TextBox^  priceAppendTextBox;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
	private: System::Windows::Forms::TextBox^  areaAppendTextBox;

	private: System::Windows::Forms::Label^  typeAppendLabel;
	private: System::Windows::Forms::ComboBox^  typeAppendComboBox;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel12;
	private: System::Windows::Forms::TextBox^  bedroomsAppendTextBox;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Button^  removeButton;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Button^  appendButton;


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;










	protected:


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->priceAppendTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->areaAppendTextBox = (gcnew System::Windows::Forms::TextBox());
			this->typeAppendLabel = (gcnew System::Windows::Forms::Label());
			this->typeAppendComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bedroomsAppendTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->appendButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
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
			this->dataGridView1->Location = System::Drawing::Point(3, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(769, 92);
			this->dataGridView1->TabIndex = 0;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel9);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(390, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 142);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Append";
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				17.06667F)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				82.93333F)));
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel10, 1, 3);
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel11, 1, 2);
			this->tableLayoutPanel9->Controls->Add(this->typeAppendLabel, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->typeAppendComboBox, 1, 0);
			this->tableLayoutPanel9->Controls->Add(this->label16, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel12, 1, 1);
			this->tableLayoutPanel9->Controls->Add(this->label19, 0, 2);
			this->tableLayoutPanel9->Controls->Add(this->label20, 0, 3);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 4;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(376, 123);
			this->tableLayoutPanel9->TabIndex = 1;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 1;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				306)));
			this->tableLayoutPanel10->Controls->Add(this->priceAppendTextBox, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(67, 93);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(306, 27);
			this->tableLayoutPanel10->TabIndex = 6;
			// 
			// priceAppendTextBox
			// 
			this->priceAppendTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->priceAppendTextBox->Location = System::Drawing::Point(3, 3);
			this->priceAppendTextBox->Name = L"priceAppendTextBox";
			this->priceAppendTextBox->Size = System::Drawing::Size(300, 20);
			this->priceAppendTextBox->TabIndex = 6;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 1;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				306)));
			this->tableLayoutPanel11->Controls->Add(this->areaAppendTextBox, 0, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(67, 63);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(306, 24);
			this->tableLayoutPanel11->TabIndex = 4;
			// 
			// areaAppendTextBox
			// 
			this->areaAppendTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->areaAppendTextBox->Location = System::Drawing::Point(3, 3);
			this->areaAppendTextBox->Name = L"areaAppendTextBox";
			this->areaAppendTextBox->Size = System::Drawing::Size(300, 20);
			this->areaAppendTextBox->TabIndex = 5;
			// 
			// typeAppendLabel
			// 
			this->typeAppendLabel->AutoSize = true;
			this->typeAppendLabel->Location = System::Drawing::Point(3, 0);
			this->typeAppendLabel->Name = L"typeAppendLabel";
			this->typeAppendLabel->Size = System::Drawing::Size(31, 13);
			this->typeAppendLabel->TabIndex = 0;
			this->typeAppendLabel->Text = L"Type";
			// 
			// typeAppendComboBox
			// 
			this->typeAppendComboBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeAppendComboBox->FormattingEnabled = true;
			this->typeAppendComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"House", L"Apartment", L"Other" });
			this->typeAppendComboBox->Location = System::Drawing::Point(67, 3);
			this->typeAppendComboBox->Name = L"typeAppendComboBox";
			this->typeAppendComboBox->Size = System::Drawing::Size(306, 21);
			this->typeAppendComboBox->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Bedrooms";
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 1;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				306)));
			this->tableLayoutPanel12->Controls->Add(this->bedroomsAppendTextBox, 0, 0);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(67, 33);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				24)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(306, 24);
			this->tableLayoutPanel12->TabIndex = 3;
			// 
			// bedroomsAppendTextBox
			// 
			this->bedroomsAppendTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bedroomsAppendTextBox->Location = System::Drawing::Point(3, 3);
			this->bedroomsAppendTextBox->Name = L"bedroomsAppendTextBox";
			this->bedroomsAppendTextBox->Size = System::Drawing::Size(300, 20);
			this->bedroomsAppendTextBox->TabIndex = 4;
			// 
			// label19
			// 
			this->label19->Location = System::Drawing::Point(3, 60);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Area";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 90);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 13);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Price";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel3);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(381, 142);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Search";
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
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(375, 123);
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
			this->tableLayoutPanel6->Location = System::Drawing::Point(67, 93);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(305, 27);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 27);
			this->label9->TabIndex = 0;
			this->label9->Text = L"min";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(155, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 27);
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
			this->tableLayoutPanel5->Location = System::Drawing::Point(67, 63);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(305, 24);
			this->tableLayoutPanel5->TabIndex = 4;
			// 
			// minAreaSearchLabel
			// 
			this->minAreaSearchLabel->AutoSize = true;
			this->minAreaSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minAreaSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minAreaSearchLabel->Name = L"minAreaSearchLabel";
			this->minAreaSearchLabel->Size = System::Drawing::Size(27, 24);
			this->minAreaSearchLabel->TabIndex = 0;
			this->minAreaSearchLabel->Text = L"min";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(155, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 24);
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
			this->typeSearchComboBox->Location = System::Drawing::Point(67, 3);
			this->typeSearchComboBox->Name = L"typeSearchComboBox";
			this->typeSearchComboBox->Size = System::Drawing::Size(305, 21);
			this->typeSearchComboBox->TabIndex = 1;
			// 
			// bedroomsSearchLabel
			// 
			this->bedroomsSearchLabel->AutoSize = true;
			this->bedroomsSearchLabel->Location = System::Drawing::Point(3, 30);
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
			this->tableLayoutPanel4->Location = System::Drawing::Point(67, 33);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(305, 24);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// minBedroomsSearchLabel
			// 
			this->minBedroomsSearchLabel->AutoSize = true;
			this->minBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minBedroomsSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minBedroomsSearchLabel->Name = L"minBedroomsSearchLabel";
			this->minBedroomsSearchLabel->Size = System::Drawing::Size(27, 24);
			this->minBedroomsSearchLabel->TabIndex = 0;
			this->minBedroomsSearchLabel->Text = L"min";
			// 
			// maxBedroomsSearchLabel
			// 
			this->maxBedroomsSearchLabel->AutoSize = true;
			this->maxBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxBedroomsSearchLabel->Location = System::Drawing::Point(155, 0);
			this->maxBedroomsSearchLabel->Name = L"maxBedroomsSearchLabel";
			this->maxBedroomsSearchLabel->Size = System::Drawing::Size(27, 24);
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
			this->areaSearchLabel->Location = System::Drawing::Point(3, 60);
			this->areaSearchLabel->Name = L"areaSearchLabel";
			this->areaSearchLabel->Size = System::Drawing::Size(32, 13);
			this->areaSearchLabel->TabIndex = 0;
			this->areaSearchLabel->Text = L"Area";
			// 
			// priceSearchLabel
			// 
			this->priceSearchLabel->AutoSize = true;
			this->priceSearchLabel->Location = System::Drawing::Point(3, 90);
			this->priceSearchLabel->Name = L"priceSearchLabel";
			this->priceSearchLabel->Size = System::Drawing::Size(31, 13);
			this->priceSearchLabel->TabIndex = 5;
			this->priceSearchLabel->Text = L"Price";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->menuStrip1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel7, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 203)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(781, 385);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(781, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::saveAsToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel8, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 230);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(775, 152);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->Controls->Add(this->clearButton, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->removeButton, 1, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(769, 48);
			this->tableLayoutPanel8->TabIndex = 1;
			// 
			// clearButton
			// 
			this->clearButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->clearButton->Location = System::Drawing::Point(3, 3);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(378, 42);
			this->clearButton->TabIndex = 0;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::button3_Click);
			// 
			// removeButton
			// 
			this->removeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->removeButton->Location = System::Drawing::Point(387, 3);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(379, 42);
			this->removeButton->TabIndex = 1;
			this->removeButton->Text = L"Remove selected";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::removeButton_Click);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->groupBox2, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->groupBox1, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->searchButton, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->appendButton, 1, 1);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 27);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(775, 197);
			this->tableLayoutPanel7->TabIndex = 5;
			// 
			// searchButton
			// 
			this->searchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchButton->Location = System::Drawing::Point(3, 151);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(381, 43);
			this->searchButton->TabIndex = 3;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::searchButton_Click);
			// 
			// appendButton
			// 
			this->appendButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->appendButton->Location = System::Drawing::Point(390, 151);
			this->appendButton->Name = L"appendButton";
			this->appendButton->Size = System::Drawing::Size(382, 43);
			this->appendButton->TabIndex = 4;
			this->appendButton->Text = L"Append";
			this->appendButton->UseVisualStyleBackColor = true;
			this->appendButton->Click += gcnew System::EventHandler(this, &WorkWithRealEstateForm::appendButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// WorkWithRealEstateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 385);
			this->Controls->Add(this->tableLayoutPanel2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WorkWithRealEstateForm";
			this->Text = L"WorkWithRealEstateForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if (openFileDialog1->OpenFile() != nullptr)
				{
					estates = (gcnew WorkWithEstate())->read(openFileDialog1->FileName);
					dataGridView1->Rows->Clear();
					for (size_t i = 0; i < estates->Count; i++)
						dataGridView1->Rows->Add(estates[i]->getType(), estates[i]->getBedrooms(), estates[i]->getArea(), estates[i]->getPrice());
				}
			}
		}catch (Exception^ ex) {MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);}
	}
	
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		WorkWithEstate::saveEstate(estates);
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		estates->Clear();
		dataGridView1->Rows->Clear();
	}
	
private: System::Void removeButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int ind = dataGridView1->SelectedCells[0]->RowIndex;
		
		if (estates->Count != 0)
			estates->RemoveAt(ind);

		if (dataGridView1->Rows->Count == 1)
			dataGridView1->Rows->Add();
		dataGridView1->Rows->RemoveAt(ind);
			
}
	private: System::Void appendButton_Click(System::Object^  sender, System::EventArgs^  e) {
		List<String^>^ dataEstate = gcnew List<String^>();
		try {
			if (typeAppendComboBox->Text != "" && priceAppendTextBox->Text != "" && areaAppendTextBox->Text != ""&&bedroomsAppendTextBox->Text != "") {
				dataEstate->Add(typeAppendComboBox->Text->ToString());
				dataEstate->Add(Convert::ToString(Convert::ToInt32(bedroomsAppendTextBox->Text)));
				dataEstate->Add(Convert::ToString(Convert::ToDouble(areaAppendTextBox->Text)));
				dataEstate->Add(Convert::ToString(Convert::ToDouble(priceAppendTextBox->Text)));
				dataGridView1->Rows->Add(dataEstate[0], dataEstate[1], dataEstate[2], dataEstate[3]);
				Estate^ tempEstate = gcnew Estate(dataEstate[0], Convert::ToInt32(dataEstate[1]), Convert::ToDouble(dataEstate[2]), Convert::ToDouble(dataEstate[3]));
				if (!estates->Contains(tempEstate))
				{
					estates->Add(tempEstate);
				}
			}
			else {
				throw gcnew Exception("Some fields are empty");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {	
			double minB = minBedroomsSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minBedroomsSearchTextbox->Text);
			double maxB = maxBedroomsSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxBedroomsSearchTextbox->Text);
		
			double minA = minAreaSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minAreaSearchTextbox->Text);
			double maxA = maxAreaSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxAreaSearchTextbox->Text);
		
			double minP = minPriceSearchTextbox->Text == "" ? -1 : Convert::ToDouble(minPriceSearchTextbox->Text);
			double maxP = maxPriceSearchTextbox->Text == "" ? -1 : Convert::ToDouble(maxPriceSearchTextbox->Text);

			List<Estate^>^ sEstate = WorkWithEstate::searchEstates(estates, typeSearchComboBox->Text, minB,maxB,minA,maxA,minP,maxP);

			dataGridView1->Rows->Clear();

			for (size_t i = 0; i < sEstate->Count; ++i)
					dataGridView1->Rows->Add(sEstate[i]->getType(),
						sEstate[i]->getBedrooms(),
						sEstate[i]->getArea(), 
						sEstate[i]->getPrice());
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
};
}