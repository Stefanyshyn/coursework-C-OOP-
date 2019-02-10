#pragma once
#include "CreditCard.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Client
{
	System::String^ name;
	System::String^ lastname;
	CreditCard^card;
	double discount;

public:
	Client();
	Client(String^name, String^lastname, CreditCard^ card, Double discount);
	Client(List<String^>^ dataClient);

	System::String^ getName() { return this->name; }
	System::String^ getLastname() { return this->lastname; }
	CreditCard^getCreditCard() {
		return this->card;
	}
	double getDiscount() {
		return this->discount;
	}

	void setName(String^ name) { this->name = name; }
	void setLastname(String^ lastname) { this->lastname = lastname; }
	void setCreditCard(CreditCard^ card) {
		this->card = card;
	}
	void setDiscount(double discount) {
		this->discount = discount;
	}
	void setCreditCardSecurityCode(Int32 code) {
		this->card->setSecurityCode(code);
	}
	void setCreditCardValidThruM(List<Int32>^ validThru) {
		this->card->setValidThru(validThru);
	}
	
	bool operator==(const Client^ client) {
		return(this->name == client->name && this->lastname == client->lastname && this->card->getCardNumber() == client->card->getCardNumber());
	}
};

