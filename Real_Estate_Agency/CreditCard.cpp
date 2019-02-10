#include "CreditCard.h"

CreditCard::CreditCard()
{
	this->validThru = gcnew List<Int32>();
	this->cardNumber = 0;
	this->securityCode = 0;
	this->validThru->Add(0);
	this->validThru->Add(0);
}

CreditCard::CreditCard(Int64 number, Int32 code, List<Int32>^ valid)
{
	this->validThru = gcnew List<Int32>();
	this->cardNumber = 0;
	this->securityCode = 0;
	this->validThru->Add(0);
	this->validThru->Add(0);
	
	this->cardNumber = number;
	this->securityCode = code;
	this->validThru->Add(valid[0]);
	this->validThru->Add(valid[1]);
}
