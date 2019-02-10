#pragma once
#include"Estate.h"
#include"Client.h"
#include"CreditCard.h"
#include"CreditCardForm.h"
#include"WorkWithClient.h"
#include"WorkWithEstate.h"
#include"ToPayAnOrderForm.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SearchOfRealEstateForm
	/// </summary>
	public ref class RealtorWorkWithEsrateForm : public System::Windows::Forms::Form
	{
	public: List<Estate^>^ estates = gcnew List<Estate^>();
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NameDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BedroomsColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AreaColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PriceColumn;


	public: List <Client^>^ clients = gcnew List<Client^>();
	public:
		RealtorWorkWithEsrateForm(void)
		{
			InitializeComponent();
			estates = (gcnew WorkWithEstate())->read("RealEstate.txt");
			dataGridViewEstate->Rows->Clear();
			for (size_t i = 0; i < estates->Count; i++)
				dataGridViewEstate->Rows->Add(estates[i]->getType(), estates[i]->getBedrooms(), estates[i]->getArea(), estates[i]->getPrice());

			clients = (gcnew WorkWithClient())->read("Client.txt");
			dataGridViewClient->Rows->Clear();
			for (size_t i = 0; i < clients->Count; i++)
				dataGridViewClient->Rows->Add(clients[i]->getName(), clients[i]->getLastname(), clients[i]->getCreditCard()->getCardNumber(), clients[i]->getDiscount());
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RealtorWorkWithEsrateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^  clientSaveToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  estateSaveToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^  searchGroupBox;
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

	private: System::Windows::Forms::Label^  priceSearchLabel;
	private: System::Windows::Forms::DataGridView^  dataGridViewEstate;






	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::GroupBox^  estatesGroupBox;

	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Label^  arealabel;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  clientGroupBox;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
private: System::Windows::Forms::Button^  payButton;

private: System::Windows::Forms::ToolStripMenuItem^  clientOpenToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  estateOpenToolStripMenuItem;




	private: System::Windows::Forms::DataGridView^  dataGridViewClient;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lastnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  creditCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DiscountColumn;
	private: System::Windows::Forms::GroupBox^  registrationGroupBox;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
	private: System::Windows::Forms::Button^  registerButton;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  lastnameLabel;
	private: System::Windows::Forms::TextBox^  nameTextBox;
	private: System::Windows::Forms::TextBox^  lastnameTextBox;




	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

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
			this->searchGroupBox = (gcnew System::Windows::Forms::GroupBox());
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
			this->priceSearchLabel = (gcnew System::Windows::Forms::Label());
			this->arealabel = (gcnew System::Windows::Forms::Label());
			this->dataGridViewEstate = (gcnew System::Windows::Forms::DataGridView());
			this->NameDataGridView = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BedroomsColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AreaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estatesGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientOpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estateOpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientSaveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estateSaveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->clientGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->nameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->creditCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DiscountColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->payButton = (gcnew System::Windows::Forms::Button());
			this->registrationGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->lastnameLabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchGroupBox->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEstate))->BeginInit();
			this->estatesGroupBox->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->clientGroupBox->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->tableLayoutPanel9->SuspendLayout();
			this->registrationGroupBox->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// searchGroupBox
			// 
			this->searchGroupBox->Controls->Add(this->tableLayoutPanel3);
			this->searchGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchGroupBox->Location = System::Drawing::Point(3, 3);
			this->searchGroupBox->Name = L"searchGroupBox";
			this->searchGroupBox->Size = System::Drawing::Size(217, 136);
			this->searchGroupBox->TabIndex = 3;
			this->searchGroupBox->TabStop = false;
			this->searchGroupBox->Text = L"Search";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				61)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel6, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->typeSearchLabel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->typeSearchComboBox, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->bedroomsSearchLabel, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->priceSearchLabel, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->arealabel, 0, 2);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(211, 117);
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
			this->tableLayoutPanel6->Location = System::Drawing::Point(64, 90);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(144, 24);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 24);
			this->label9->TabIndex = 0;
			this->label9->Text = L"min";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(75, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 24);
			this->label10->TabIndex = 2;
			this->label10->Text = L"max";
			// 
			// minPriceSearchTextbox
			// 
			this->minPriceSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minPriceSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minPriceSearchTextbox->Name = L"minPriceSearchTextbox";
			this->minPriceSearchTextbox->Size = System::Drawing::Size(33, 20);
			this->minPriceSearchTextbox->TabIndex = 3;
			// 
			// maxPriceSearchTextbox
			// 
			this->maxPriceSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxPriceSearchTextbox->Location = System::Drawing::Point(108, 3);
			this->maxPriceSearchTextbox->Name = L"maxPriceSearchTextbox";
			this->maxPriceSearchTextbox->Size = System::Drawing::Size(33, 20);
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
			this->tableLayoutPanel5->Location = System::Drawing::Point(64, 61);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(144, 23);
			this->tableLayoutPanel5->TabIndex = 4;
			// 
			// minAreaSearchLabel
			// 
			this->minAreaSearchLabel->AutoSize = true;
			this->minAreaSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minAreaSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minAreaSearchLabel->Name = L"minAreaSearchLabel";
			this->minAreaSearchLabel->Size = System::Drawing::Size(27, 23);
			this->minAreaSearchLabel->TabIndex = 0;
			this->minAreaSearchLabel->Text = L"min";
			this->minAreaSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(75, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 23);
			this->label7->TabIndex = 2;
			this->label7->Text = L"max";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// minAreaSearchTextbox
			// 
			this->minAreaSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minAreaSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minAreaSearchTextbox->Name = L"minAreaSearchTextbox";
			this->minAreaSearchTextbox->Size = System::Drawing::Size(33, 20);
			this->minAreaSearchTextbox->TabIndex = 3;
			// 
			// maxAreaSearchTextbox
			// 
			this->maxAreaSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxAreaSearchTextbox->Location = System::Drawing::Point(108, 3);
			this->maxAreaSearchTextbox->Name = L"maxAreaSearchTextbox";
			this->maxAreaSearchTextbox->Size = System::Drawing::Size(33, 20);
			this->maxAreaSearchTextbox->TabIndex = 4;
			// 
			// typeSearchLabel
			// 
			this->typeSearchLabel->AutoSize = true;
			this->typeSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeSearchLabel->Location = System::Drawing::Point(3, 0);
			this->typeSearchLabel->Name = L"typeSearchLabel";
			this->typeSearchLabel->Size = System::Drawing::Size(55, 29);
			this->typeSearchLabel->TabIndex = 0;
			this->typeSearchLabel->Text = L"Type";
			this->typeSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// typeSearchComboBox
			// 
			this->typeSearchComboBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeSearchComboBox->FormattingEnabled = true;
			this->typeSearchComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"House", L"Apartment", L"Other" });
			this->typeSearchComboBox->Location = System::Drawing::Point(64, 3);
			this->typeSearchComboBox->Name = L"typeSearchComboBox";
			this->typeSearchComboBox->Size = System::Drawing::Size(144, 21);
			this->typeSearchComboBox->TabIndex = 1;
			// 
			// bedroomsSearchLabel
			// 
			this->bedroomsSearchLabel->AutoSize = true;
			this->bedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bedroomsSearchLabel->Location = System::Drawing::Point(3, 29);
			this->bedroomsSearchLabel->Name = L"bedroomsSearchLabel";
			this->bedroomsSearchLabel->Size = System::Drawing::Size(55, 29);
			this->bedroomsSearchLabel->TabIndex = 2;
			this->bedroomsSearchLabel->Text = L"Bedrooms";
			this->bedroomsSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->tableLayoutPanel4->Location = System::Drawing::Point(64, 32);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(144, 23);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// minBedroomsSearchLabel
			// 
			this->minBedroomsSearchLabel->AutoSize = true;
			this->minBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minBedroomsSearchLabel->Location = System::Drawing::Point(3, 0);
			this->minBedroomsSearchLabel->Name = L"minBedroomsSearchLabel";
			this->minBedroomsSearchLabel->Size = System::Drawing::Size(27, 23);
			this->minBedroomsSearchLabel->TabIndex = 0;
			this->minBedroomsSearchLabel->Text = L"min";
			this->minBedroomsSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maxBedroomsSearchLabel
			// 
			this->maxBedroomsSearchLabel->AutoSize = true;
			this->maxBedroomsSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxBedroomsSearchLabel->Location = System::Drawing::Point(75, 0);
			this->maxBedroomsSearchLabel->Name = L"maxBedroomsSearchLabel";
			this->maxBedroomsSearchLabel->Size = System::Drawing::Size(27, 23);
			this->maxBedroomsSearchLabel->TabIndex = 2;
			this->maxBedroomsSearchLabel->Text = L"max";
			this->maxBedroomsSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// minBedroomsSearchTextbox
			// 
			this->minBedroomsSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minBedroomsSearchTextbox->Location = System::Drawing::Point(36, 3);
			this->minBedroomsSearchTextbox->Name = L"minBedroomsSearchTextbox";
			this->minBedroomsSearchTextbox->Size = System::Drawing::Size(33, 20);
			this->minBedroomsSearchTextbox->TabIndex = 3;
			// 
			// maxBedroomsSearchTextbox
			// 
			this->maxBedroomsSearchTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maxBedroomsSearchTextbox->Location = System::Drawing::Point(108, 3);
			this->maxBedroomsSearchTextbox->Name = L"maxBedroomsSearchTextbox";
			this->maxBedroomsSearchTextbox->Size = System::Drawing::Size(33, 20);
			this->maxBedroomsSearchTextbox->TabIndex = 4;
			// 
			// priceSearchLabel
			// 
			this->priceSearchLabel->AutoSize = true;
			this->priceSearchLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->priceSearchLabel->Location = System::Drawing::Point(3, 87);
			this->priceSearchLabel->Name = L"priceSearchLabel";
			this->priceSearchLabel->Size = System::Drawing::Size(55, 30);
			this->priceSearchLabel->TabIndex = 5;
			this->priceSearchLabel->Text = L"Price";
			this->priceSearchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// arealabel
			// 
			this->arealabel->AutoSize = true;
			this->arealabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->arealabel->Location = System::Drawing::Point(3, 58);
			this->arealabel->Name = L"arealabel";
			this->arealabel->Size = System::Drawing::Size(55, 29);
			this->arealabel->TabIndex = 7;
			this->arealabel->Text = L"Area";
			this->arealabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridViewEstate
			// 
			this->dataGridViewEstate->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewEstate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEstate->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NameDataGridView,
					this->BedroomsColumn, this->AreaColumn, this->PriceColumn
			});
			this->dataGridViewEstate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewEstate->Location = System::Drawing::Point(232, 3);
			this->dataGridViewEstate->Name = L"dataGridViewEstate";
			this->dataGridViewEstate->Size = System::Drawing::Size(600, 184);
			this->dataGridViewEstate->TabIndex = 4;
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
			// estatesGroupBox
			// 
			this->estatesGroupBox->Controls->Add(this->tableLayoutPanel2);
			this->estatesGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->estatesGroupBox->Location = System::Drawing::Point(3, 179);
			this->estatesGroupBox->Name = L"estatesGroupBox";
			this->estatesGroupBox->Size = System::Drawing::Size(841, 209);
			this->estatesGroupBox->TabIndex = 0;
			this->estatesGroupBox->TabStop = false;
			this->estatesGroupBox->Text = L"Estates";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				229)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->dataGridViewEstate, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel7, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(835, 190);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel7->Controls->Add(this->searchGroupBox, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->searchButton, 0, 1);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 142)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(223, 184);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// searchButton
			// 
			this->searchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchButton->Location = System::Drawing::Point(3, 145);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(217, 36);
			this->searchButton->TabIndex = 4;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::searchButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(847, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clientOpenToolStripMenuItem,
					this->estateOpenToolStripMenuItem
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// clientOpenToolStripMenuItem
			// 
			this->clientOpenToolStripMenuItem->Name = L"clientOpenToolStripMenuItem";
			this->clientOpenToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->clientOpenToolStripMenuItem->Text = L"Client";
			this->clientOpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::clientOpenToolStripMenuItem_Click);
			// 
			// estateOpenToolStripMenuItem
			// 
			this->estateOpenToolStripMenuItem->Name = L"estateOpenToolStripMenuItem";
			this->estateOpenToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->estateOpenToolStripMenuItem->Text = L"Estate";
			this->estateOpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::estateOpenToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clientSaveToolStripMenuItem1,
					this->estateSaveToolStripMenuItem1
			});
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// clientSaveToolStripMenuItem1
			// 
			this->clientSaveToolStripMenuItem1->Name = L"clientSaveToolStripMenuItem1";
			this->clientSaveToolStripMenuItem1->Size = System::Drawing::Size(105, 22);
			this->clientSaveToolStripMenuItem1->Text = L"Client";
			this->clientSaveToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::clientSaveToolStripMenuItem1_Click);
			// 
			// estateSaveToolStripMenuItem1
			// 
			this->estateSaveToolStripMenuItem1->Name = L"estateSaveToolStripMenuItem1";
			this->estateSaveToolStripMenuItem1->Size = System::Drawing::Size(105, 22);
			this->estateSaveToolStripMenuItem1->Text = L"Estate";
			this->estateSaveToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::estateSaveToolStripMenuItem1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// clientGroupBox
			// 
			this->clientGroupBox->Controls->Add(this->tableLayoutPanel8);
			this->clientGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->clientGroupBox->Location = System::Drawing::Point(3, 3);
			this->clientGroupBox->Name = L"clientGroupBox";
			this->clientGroupBox->Size = System::Drawing::Size(841, 170);
			this->clientGroupBox->TabIndex = 7;
			this->clientGroupBox->TabStop = false;
			this->clientGroupBox->Text = L"Client";
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				288)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->dataGridViewClient, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->tableLayoutPanel9, 0, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(835, 151);
			this->tableLayoutPanel8->TabIndex = 0;
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nameColumn,
					this->lastnameColumn, this->creditCardColumn, this->DiscountColumn
			});
			this->dataGridViewClient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewClient->Location = System::Drawing::Point(291, 3);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->Size = System::Drawing::Size(541, 145);
			this->dataGridViewClient->TabIndex = 2;
			// 
			// nameColumn
			// 
			this->nameColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nameColumn->HeaderText = L"Name";
			this->nameColumn->Name = L"nameColumn";
			this->nameColumn->ReadOnly = true;
			// 
			// lastnameColumn
			// 
			this->lastnameColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->lastnameColumn->HeaderText = L"Lastname";
			this->lastnameColumn->Name = L"lastnameColumn";
			this->lastnameColumn->ReadOnly = true;
			// 
			// creditCardColumn
			// 
			this->creditCardColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->creditCardColumn->HeaderText = L"Credit card";
			this->creditCardColumn->Name = L"creditCardColumn";
			this->creditCardColumn->ReadOnly = true;
			// 
			// DiscountColumn
			// 
			this->DiscountColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->DiscountColumn->HeaderText = L"Discount";
			this->DiscountColumn->Name = L"DiscountColumn";
			this->DiscountColumn->ReadOnly = true;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel9->Controls->Add(this->payButton, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->registrationGroupBox, 0, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 2;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(282, 145);
			this->tableLayoutPanel9->TabIndex = 1;
			// 
			// payButton
			// 
			this->payButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->payButton->Location = System::Drawing::Point(3, 83);
			this->payButton->Name = L"payButton";
			this->payButton->Size = System::Drawing::Size(276, 59);
			this->payButton->TabIndex = 1;
			this->payButton->Text = L"Pay";
			this->payButton->UseVisualStyleBackColor = true;
			this->payButton->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::payButton_Click);
			// 
			// registrationGroupBox
			// 
			this->registrationGroupBox->Controls->Add(this->tableLayoutPanel10);
			this->registrationGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->registrationGroupBox->Location = System::Drawing::Point(3, 3);
			this->registrationGroupBox->Name = L"registrationGroupBox";
			this->registrationGroupBox->Size = System::Drawing::Size(276, 74);
			this->registrationGroupBox->TabIndex = 2;
			this->registrationGroupBox->TabStop = false;
			this->registrationGroupBox->Text = L"Client registration";
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				64)));
			this->tableLayoutPanel10->Controls->Add(this->registerButton, 1, 0);
			this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel11, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(270, 55);
			this->tableLayoutPanel10->TabIndex = 0;
			// 
			// registerButton
			// 
			this->registerButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->registerButton->Location = System::Drawing::Point(209, 3);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(58, 49);
			this->registerButton->TabIndex = 1;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &RealtorWorkWithEsrateForm::registerButton_Click);
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 2;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				74)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel11->Controls->Add(this->nameLabel, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->lastnameLabel, 0, 1);
			this->tableLayoutPanel11->Controls->Add(this->nameTextBox, 1, 0);
			this->tableLayoutPanel11->Controls->Add(this->lastnameTextBox, 1, 1);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 2;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(200, 49);
			this->tableLayoutPanel11->TabIndex = 0;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->nameLabel->Location = System::Drawing::Point(3, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(68, 24);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Name";
			this->nameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lastnameLabel
			// 
			this->lastnameLabel->AutoSize = true;
			this->lastnameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lastnameLabel->Location = System::Drawing::Point(3, 24);
			this->lastnameLabel->Name = L"lastnameLabel";
			this->lastnameLabel->Size = System::Drawing::Size(68, 25);
			this->lastnameLabel->TabIndex = 1;
			this->lastnameLabel->Text = L"Lastname";
			this->lastnameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->nameTextBox->Location = System::Drawing::Point(77, 3);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(120, 20);
			this->nameTextBox->TabIndex = 2;
			// 
			// lastnameTextBox
			// 
			this->lastnameTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lastnameTextBox->Location = System::Drawing::Point(77, 27);
			this->lastnameTextBox->Name = L"lastnameTextBox";
			this->lastnameTextBox->Size = System::Drawing::Size(120, 20);
			this->lastnameTextBox->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->estatesGroupBox, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->clientGroupBox, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45.26854F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 54.73146F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(847, 391);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// RealtorWorkWithEsrateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 415);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(863, 454);
			this->Name = L"RealtorWorkWithEsrateForm";
			this->Text = L"SearchOfRealEstateForm";
			this->searchGroupBox->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEstate))->EndInit();
			this->estatesGroupBox->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->clientGroupBox->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->registrationGroupBox->ResumeLayout(false);
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void registerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Client^ client = gcnew Client();

		if (nameTextBox->Text != "" && lastnameTextBox->Text != "")
		{
			client->setName(nameTextBox->Text);
			client->setLastname(lastnameTextBox->Text);
			for (size_t i = 0; i < clients->Count; i++)
			{
				if (clients[i]->getName() == client->getName() && clients[i]->getLastname() == client->getLastname()){
					MessageBox::Show("Such client is exists", "Error", MessageBoxButtons::OK);
					return;
				}
			}
			client->setDiscount(0);
			CreditCardForm^form = gcnew CreditCardForm();
			form->ShowDialog();
			
			if (form->card == nullptr)
			{
				MessageBox::Show("No credit card", "Error", MessageBoxButtons::OK);
				return;
			}
			client->setCreditCard(form->card);
			if (clients->Contains(client))
			{
				MessageBox::Show("Such client already exists", "Error", MessageBoxButtons::OK);
			}
			else
			{
				clients->Add(client);
				dataGridViewClient->Rows->Add(client->getName(),
					client->getLastname(),
					client->getCreditCard()->getCardNumber(),
					client->getDiscount());
			}
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

			List<Estate^>^ sEstate = WorkWithEstate::searchEstates(estates, typeSearchComboBox->Text, minB, maxB, minA, maxA, minP, maxP);

			dataGridViewEstate->Rows->Clear();

			for (size_t i = 0; i < sEstate->Count; ++i)
				dataGridViewEstate->Rows->Add(sEstate[i]->getType(), sEstate[i]->getBedrooms(), sEstate[i]->getArea(), sEstate[i]->getPrice());
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void clientOpenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (openFileDialog1->OpenFile() != nullptr){
				clients = (gcnew WorkWithClient())->read(openFileDialog1->FileName);
				
				for (size_t i = 0; i < clients->Count; i++)
					dataGridViewClient->Rows->Add(clients[i]->getName(), clients[i]->getLastname(), clients[i]->getCreditCard()->getCardNumber(), clients[i]->getDiscount());
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
private: System::Void clientSaveToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	WorkWithClient::saveClient(clients);
}
private: System::Void estateOpenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (openFileDialog1->OpenFile() != nullptr) {
				estates = (gcnew WorkWithEstate())->read(openFileDialog1->FileName);
				dataGridViewEstate->Rows->Clear();
				for (size_t i = 0; i < estates->Count; i++)
					dataGridViewEstate->Rows->Add(estates[i]->getType(), estates[i]->getBedrooms(), estates[i]->getArea(), estates[i]->getPrice());

			}

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
private: System::Void estateSaveToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	WorkWithEstate::saveEstate(estates);
}
private: System::Void payButton_Click(System::Object^  sender, System::EventArgs^  e) {

	try {
		Int32 indClient = dataGridViewClient->SelectedCells[0]->RowIndex;
		Int32 indEstate = dataGridViewEstate->SelectedCells[0]->RowIndex;

		CreditCard^ card = gcnew CreditCard();
		card->setCardNumber(Convert::ToInt64(dataGridViewClient->Rows[indClient]->Cells[2]->Value));

		Client^ client = gcnew Client(Convert::ToString(dataGridViewClient->Rows[indClient]->Cells[0]->Value),
			Convert::ToString(dataGridViewClient->Rows[indClient]->Cells[1]->Value),
			card,
			Convert::ToDouble(dataGridViewClient->Rows[indClient]->Cells[3]->Value));
		Estate^ estate = gcnew Estate(Convert::ToString(dataGridViewEstate->Rows[indEstate]->Cells[0]->Value),
			Convert::ToInt32(dataGridViewEstate->Rows[indEstate]->Cells[1]->Value),
			Convert::ToDouble(dataGridViewEstate->Rows[indEstate]->Cells[2]->Value),
			Convert::ToDouble(dataGridViewEstate->Rows[indEstate]->Cells[3]->Value));
		for (size_t i = 0; i < clients->Count; i++)
		{
			if (clients[i]->getName() == client->getName() &&
				clients[i]->getLastname() == client->getLastname() &&
				clients[i]->getCreditCard()->getCardNumber() == client->getCreditCard()->getCardNumber() &&
				clients[i]->getDiscount() == client->getDiscount())
			{
				client->setCreditCardSecurityCode(clients[i]->getCreditCard()->getSecurityCode());
				client->getCreditCard()->setValidThru(clients[i]->getCreditCard()->getValidThru());
				break;
			}
		}

		ToPayAnOrderForm^ form = gcnew ToPayAnOrderForm();
		form->setClient(client);
		form->setEstate(estate);
		form->ShowDialog();
		
		if (form->isPay)
		{
			estates->Remove(estate);
			if (estates->Count != 0)
				estates->RemoveAt(indEstate);

			if (dataGridViewEstate->Rows->Count == 1)
				dataGridViewEstate->Rows->Add();
			dataGridViewEstate->Rows->RemoveAt(indEstate);


			estateSaveToolStripMenuItem1_Click(sender, e);
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
};
}