#pragma once
#include"Client.h"
#include"CreditCard.h";
#include"CreditCardForm.h"
#include "WorkWithClient.h"
namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ DiscountForClientForm
	/// </summary>
	public ref class DiscountForClientForm : public System::Windows::Forms::Form
	{
	public: List<Client^>^ clients = gcnew List<Client^>();
	public:
		DiscountForClientForm(void)
		{
			InitializeComponent();

			clients = (gcnew WorkWithClient())->read("Client.txt");
			dataGridView1->Rows->Clear();
			for (size_t i = 0; i < clients->Count; i++)
				dataGridView1->Rows->Add(clients[i]->getName(), clients[i]->getLastname(), clients[i]->getCreditCard()->getCardNumber(), clients[i]->getDiscount());

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DiscountForClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  providesButton;
	private: System::Windows::Forms::Button^  deleteButton;






	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lastnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  creditCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DiscountColumn;
	private: System::Windows::Forms::GroupBox^  providingGroupBox;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  discountLabel;
	private: System::Windows::Forms::TextBox^  discountTextBox;


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
			this->nameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->creditCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DiscountColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->providesButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->providingGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->discountLabel = (gcnew System::Windows::Forms::Label());
			this->discountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->providingGroupBox->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nameColumn,
					this->lastnameColumn, this->creditCardColumn, this->DiscountColumn
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(141, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 290);
			this->dataGridView1->TabIndex = 0;
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
			// providesButton
			// 
			this->providesButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->providesButton->Location = System::Drawing::Point(3, 34);
			this->providesButton->Name = L"providesButton";
			this->providesButton->Size = System::Drawing::Size(114, 83);
			this->providesButton->TabIndex = 1;
			this->providesButton->Text = L"Provides";
			this->providesButton->UseVisualStyleBackColor = true;
			this->providesButton->Click += gcnew System::EventHandler(this, &DiscountForClientForm::providesButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteButton->Location = System::Drawing::Point(3, 148);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(126, 139);
			this->deleteButton->TabIndex = 2;
			this->deleteButton->Text = L"Delete selected discount";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &DiscountForClientForm::deleteButton_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				138)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(795, 296);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->deleteButton, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->providingGroupBox, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(132, 290);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// providingGroupBox
			// 
			this->providingGroupBox->Controls->Add(this->tableLayoutPanel3);
			this->providingGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->providingGroupBox->Location = System::Drawing::Point(3, 3);
			this->providingGroupBox->Name = L"providingGroupBox";
			this->providingGroupBox->Size = System::Drawing::Size(126, 139);
			this->providingGroupBox->TabIndex = 3;
			this->providingGroupBox->TabStop = false;
			this->providingGroupBox->Text = L"Providing discount";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->providesButton, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				58)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->discountLabel, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->discountTextBox, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(114, 25);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// discountLabel
			// 
			this->discountLabel->AutoSize = true;
			this->discountLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->discountLabel->Location = System::Drawing::Point(3, 0);
			this->discountLabel->Name = L"discountLabel";
			this->discountLabel->Size = System::Drawing::Size(52, 25);
			this->discountLabel->TabIndex = 0;
			this->discountLabel->Text = L"Discount:";
			this->discountLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// discountTextBox
			// 
			this->discountTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->discountTextBox->Location = System::Drawing::Point(61, 3);
			this->discountTextBox->Name = L"discountTextBox";
			this->discountTextBox->Size = System::Drawing::Size(50, 20);
			this->discountTextBox->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(795, 24);
			this->menuStrip1->TabIndex = 4;
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
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &DiscountForClientForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &DiscountForClientForm::saveToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// DiscountForClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 320);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DiscountForClientForm";
			this->Text = L"DiscountForClientForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->providingGroupBox->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if (openFileDialog1->OpenFile() != nullptr) {
					clients = (gcnew WorkWithClient())->read(openFileDialog1->FileName);

					for (size_t i = 0; i < clients->Count; i++)
						dataGridView1->Rows->Add(clients[i]->getName(), clients[i]->getLastname(), clients[i]->getCreditCard()->getCardNumber(), clients[i]->getDiscount());
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

private: System::Void providesButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int ind = dataGridView1->SelectedCells[0]->RowIndex;
	try {
		if (Convert::ToDouble(discountTextBox->Text) > 100)
			throw gcnew Exception();
		clients[ind]->setDiscount(Convert::ToDouble(discountTextBox->Text));
		dataGridView1->Rows[ind]->Cells[3]->Value = Convert::ToDouble(discountTextBox->Text);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Data is invalid\n" + ex->Message, "Error", MessageBoxButtons::OK);
	}
}

private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int ind = dataGridView1->SelectedCells[0]->RowIndex;
	try {
		clients[ind]->setDiscount(0);
		dataGridView1->Rows[ind]->Cells[3]->Value = 0;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		WorkWithClient::saveClient(clients);
	}
};
}


