#pragma once
#include "AuthorizationForm.h"
#include"CreditCardForm.h"
#include "WorkWithRealEstateForm.h"
#include "EnumEmployee.h"
#include "DiscountForClientForm.h"
#include "RealtorWorkWithEsrateForm.h"
#include "AccountantForm.h"
#include "SellingEstateForm.h"

namespace RealEstateAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			this->authorization();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  AdminTableLayoutPanel;
	private: System::Windows::Forms::Button^  WorkWithClientAdminButton;
	protected:


	private: System::Windows::Forms::Button^  DiscountAdminButton;
	private: System::Windows::Forms::Button^  ExitAdminButton;



	private: System::Windows::Forms::TableLayoutPanel^  RealtorTableLayoutPanel;
	private: System::Windows::Forms::Button^  WorkRealtorButton;
	private: System::Windows::Forms::Button^  ExitRealtorButton;
	private: System::Windows::Forms::TableLayoutPanel^  AccountantTableLayoutPanel;
	private: System::Windows::Forms::Button^  tfansfersIncomeAccountantButton;
	private: System::Windows::Forms::Button^  ExitAccountantButton;
	private: System::Windows::Forms::Button^  sellingButton;
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
			this->AdminTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ExitAdminButton = (gcnew System::Windows::Forms::Button());
			this->WorkWithClientAdminButton = (gcnew System::Windows::Forms::Button());
			this->DiscountAdminButton = (gcnew System::Windows::Forms::Button());
			this->RealtorTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->WorkRealtorButton = (gcnew System::Windows::Forms::Button());
			this->ExitRealtorButton = (gcnew System::Windows::Forms::Button());
			this->AccountantTableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tfansfersIncomeAccountantButton = (gcnew System::Windows::Forms::Button());
			this->sellingButton = (gcnew System::Windows::Forms::Button());
			this->ExitAccountantButton = (gcnew System::Windows::Forms::Button());
			this->AdminTableLayoutPanel->SuspendLayout();
			this->RealtorTableLayoutPanel->SuspendLayout();
			this->AccountantTableLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// AdminTableLayoutPanel
			// 
			this->AdminTableLayoutPanel->ColumnCount = 1;
			this->AdminTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->AdminTableLayoutPanel->Controls->Add(this->ExitAdminButton, 0, 2);
			this->AdminTableLayoutPanel->Controls->Add(this->WorkWithClientAdminButton, 0, 0);
			this->AdminTableLayoutPanel->Controls->Add(this->DiscountAdminButton, 0, 1);
			this->AdminTableLayoutPanel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AdminTableLayoutPanel->Location = System::Drawing::Point(318, 12);
			this->AdminTableLayoutPanel->Name = L"AdminTableLayoutPanel";
			this->AdminTableLayoutPanel->RowCount = 3;
			this->AdminTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->AdminTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->AdminTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->AdminTableLayoutPanel->Size = System::Drawing::Size(300, 150);
			this->AdminTableLayoutPanel->TabIndex = 0;
			this->AdminTableLayoutPanel->Visible = false;
			// 
			// ExitAdminButton
			// 
			this->ExitAdminButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ExitAdminButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitAdminButton->Location = System::Drawing::Point(3, 103);
			this->ExitAdminButton->Name = L"ExitAdminButton";
			this->ExitAdminButton->Size = System::Drawing::Size(294, 44);
			this->ExitAdminButton->TabIndex = 1;
			this->ExitAdminButton->Text = L"Exit";
			this->ExitAdminButton->UseVisualStyleBackColor = true;
			this->ExitAdminButton->Click += gcnew System::EventHandler(this, &MainForm::ExitAdminButton_Click);
			// 
			// WorkWithClientAdminButton
			// 
			this->WorkWithClientAdminButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WorkWithClientAdminButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->WorkWithClientAdminButton->Location = System::Drawing::Point(3, 3);
			this->WorkWithClientAdminButton->Name = L"WorkWithClientAdminButton";
			this->WorkWithClientAdminButton->Size = System::Drawing::Size(294, 44);
			this->WorkWithClientAdminButton->TabIndex = 0;
			this->WorkWithClientAdminButton->Text = L"Work with real estate";
			this->WorkWithClientAdminButton->UseVisualStyleBackColor = true;
			this->WorkWithClientAdminButton->Click += gcnew System::EventHandler(this, &MainForm::WorkWithClientButton_Click);
			// 
			// DiscountAdminButton
			// 
			this->DiscountAdminButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DiscountAdminButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DiscountAdminButton->Location = System::Drawing::Point(3, 53);
			this->DiscountAdminButton->Name = L"DiscountAdminButton";
			this->DiscountAdminButton->Size = System::Drawing::Size(294, 44);
			this->DiscountAdminButton->TabIndex = 1;
			this->DiscountAdminButton->Text = L"Discount for client";
			this->DiscountAdminButton->UseVisualStyleBackColor = true;
			this->DiscountAdminButton->Click += gcnew System::EventHandler(this, &MainForm::DiscountAdminButton_Click);
			// 
			// RealtorTableLayoutPanel
			// 
			this->RealtorTableLayoutPanel->ColumnCount = 1;
			this->RealtorTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->RealtorTableLayoutPanel->Controls->Add(this->WorkRealtorButton, 0, 0);
			this->RealtorTableLayoutPanel->Controls->Add(this->ExitRealtorButton, 0, 1);
			this->RealtorTableLayoutPanel->Location = System::Drawing::Point(640, 12);
			this->RealtorTableLayoutPanel->Name = L"RealtorTableLayoutPanel";
			this->RealtorTableLayoutPanel->RowCount = 2;
			this->RealtorTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->RealtorTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->RealtorTableLayoutPanel->Size = System::Drawing::Size(300, 97);
			this->RealtorTableLayoutPanel->TabIndex = 1;
			// 
			// WorkRealtorButton
			// 
			this->WorkRealtorButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WorkRealtorButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WorkRealtorButton->Location = System::Drawing::Point(3, 3);
			this->WorkRealtorButton->Name = L"WorkRealtorButton";
			this->WorkRealtorButton->Size = System::Drawing::Size(294, 44);
			this->WorkRealtorButton->TabIndex = 0;
			this->WorkRealtorButton->Text = L"Work with  real estate";
			this->WorkRealtorButton->UseVisualStyleBackColor = true;
			this->WorkRealtorButton->Click += gcnew System::EventHandler(this, &MainForm::WorkRealtorButton_Click);
			// 
			// ExitRealtorButton
			// 
			this->ExitRealtorButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ExitRealtorButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitRealtorButton->Location = System::Drawing::Point(3, 53);
			this->ExitRealtorButton->Name = L"ExitRealtorButton";
			this->ExitRealtorButton->Size = System::Drawing::Size(294, 44);
			this->ExitRealtorButton->TabIndex = 4;
			this->ExitRealtorButton->Text = L"Exit";
			this->ExitRealtorButton->UseVisualStyleBackColor = true;
			this->ExitRealtorButton->Click += gcnew System::EventHandler(this, &MainForm::ExitRealtorButton_Click);
			// 
			// AccountantTableLayoutPanel
			// 
			this->AccountantTableLayoutPanel->ColumnCount = 1;
			this->AccountantTableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->AccountantTableLayoutPanel->Controls->Add(this->tfansfersIncomeAccountantButton, 0, 0);
			this->AccountantTableLayoutPanel->Controls->Add(this->sellingButton, 0, 1);
			this->AccountantTableLayoutPanel->Controls->Add(this->ExitAccountantButton, 0, 2);
			this->AccountantTableLayoutPanel->Location = System::Drawing::Point(2, 12);
			this->AccountantTableLayoutPanel->Name = L"AccountantTableLayoutPanel";
			this->AccountantTableLayoutPanel->RowCount = 3;
			this->AccountantTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->AccountantTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->AccountantTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AccountantTableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AccountantTableLayoutPanel->Size = System::Drawing::Size(300, 150);
			this->AccountantTableLayoutPanel->TabIndex = 2;
			// 
			// tfansfersIncomeAccountantButton
			// 
			this->tfansfersIncomeAccountantButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tfansfersIncomeAccountantButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tfansfersIncomeAccountantButton->Location = System::Drawing::Point(3, 3);
			this->tfansfersIncomeAccountantButton->Name = L"tfansfersIncomeAccountantButton";
			this->tfansfersIncomeAccountantButton->Size = System::Drawing::Size(294, 44);
			this->tfansfersIncomeAccountantButton->TabIndex = 1;
			this->tfansfersIncomeAccountantButton->Text = L"Work with transfers";
			this->tfansfersIncomeAccountantButton->UseVisualStyleBackColor = true;
			this->tfansfersIncomeAccountantButton->Click += gcnew System::EventHandler(this, &MainForm::tfansfersIncomeAccountantButton_Click);
			// 
			// sellingButton
			// 
			this->sellingButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sellingButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sellingButton->Location = System::Drawing::Point(3, 53);
			this->sellingButton->Name = L"sellingButton";
			this->sellingButton->Size = System::Drawing::Size(294, 44);
			this->sellingButton->TabIndex = 5;
			this->sellingButton->Text = L"Selling estate";
			this->sellingButton->UseVisualStyleBackColor = true;
			this->sellingButton->Click += gcnew System::EventHandler(this, &MainForm::sellingButton_Click);
			// 
			// ExitAccountantButton
			// 
			this->ExitAccountantButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ExitAccountantButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ExitAccountantButton->Location = System::Drawing::Point(3, 103);
			this->ExitAccountantButton->Name = L"ExitAccountantButton";
			this->ExitAccountantButton->Size = System::Drawing::Size(294, 44);
			this->ExitAccountantButton->TabIndex = 4;
			this->ExitAccountantButton->Text = L"Exit";
			this->ExitAccountantButton->UseVisualStyleBackColor = true;
			this->ExitAccountantButton->Click += gcnew System::EventHandler(this, &MainForm::ExitAccountantButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(969, 313);
			this->Controls->Add(this->AccountantTableLayoutPanel);
			this->Controls->Add(this->RealtorTableLayoutPanel);
			this->Controls->Add(this->AdminTableLayoutPanel);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->AdminTableLayoutPanel->ResumeLayout(false);
			this->RealtorTableLayoutPanel->ResumeLayout(false);
			this->AccountantTableLayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	private: System::Void WorkWithClientButton_Click(System::Object^  sender, System::EventArgs^  e) {
		WorkWithRealEstateForm^ work = gcnew WorkWithRealEstateForm();
		work->ShowDialog();
	}

	public: System::Void authorization() {
		AuthorizationForm^ authorization = gcnew AuthorizationForm();
		authorization->ShowDialog();

		if (authorization->getPersonNumber() == REALTOR)
		{

			RealtorTableLayoutPanel->Visible = true;
			AdminTableLayoutPanel->Visible = false;
			AccountantTableLayoutPanel->Visible = false;

			this->ClientSize = System::Drawing::Size(300,100);
			RealtorTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (authorization->getPersonNumber() == ADMINISTRATOR)
		{
			AdminTableLayoutPanel->Visible = true;
			RealtorTableLayoutPanel->Visible = false;
			AccountantTableLayoutPanel->Visible = false;

			this->ClientSize = System::Drawing::Size(AdminTableLayoutPanel->Size);
			AdminTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (authorization->getPersonNumber() == ACCOUNTANT)
		{
			AccountantTableLayoutPanel->Visible = true;
			RealtorTableLayoutPanel->Visible = false;
			AdminTableLayoutPanel->Visible = false;

			this->ClientSize = System::Drawing::Size(300, 150);
			AccountantTableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else
		{
			this->Close();
		}
	}


	private: System::Void ExitAccountantButton_Click(System::Object^  sender, System::EventArgs^  e) {
		AccountantTableLayoutPanel->Visible = false;

		this->authorization();
	}
	private: System::Void ExitAdminButton_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminTableLayoutPanel->Visible = false;

		this->authorization();
	}
	private: System::Void ExitRealtorButton_Click(System::Object^  sender, System::EventArgs^  e) {
		RealtorTableLayoutPanel->Visible = false;

		this->authorization();
	}
	private: System::Void DiscountAdminButton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			DiscountForClientForm^ form = gcnew DiscountForClientForm();
			form->ShowDialog();
		}
		catch (...) {}
	}

	private: System::Void WorkRealtorButton_Click(System::Object^  sender, System::EventArgs^  e) {
		RealtorWorkWithEsrateForm^ form = gcnew RealtorWorkWithEsrateForm();
		form->ShowDialog();
	}
private: System::Void tfansfersIncomeAccountantButton_Click(System::Object^  sender, System::EventArgs^  e) {
	AccountantForm^ form = gcnew AccountantForm();
	form->ShowDialog();
}
private: System::Void sellingButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SellingEstateForm^ form = gcnew SellingEstateForm();
	form->ShowDialog();
}
};
}