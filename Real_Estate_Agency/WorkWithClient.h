#pragma once
#include"Client.h"
#include"CreditCard.h"
#include"WorkWith.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Windows::Forms;

ref class WorkWithClient:public WorkWith<Client>
{
public:
	WorkWithClient();

	List<Client^>^ read(String^ stream) override;
	static void saveClient(List<Client^>^ client);
	static CreditCard^ checkDataCreditCard(String^number, String^code, String^validM, String^validY);
};

