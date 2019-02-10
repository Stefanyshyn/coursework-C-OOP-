#pragma once
using namespace System;
using namespace System::Collections::Generic;

ref class CreditCard
{
	Int64 cardNumber;
	Int32 securityCode;
	List<Int32>^ validThru;

public:
	CreditCard();
	CreditCard(Int64 number, Int32 code, List<Int32>^valid);

	Int64 getCardNumber() {
		return this->cardNumber;
	}
	Int32 getSecurityCode() {
		return this->securityCode;
	}
	List<Int32>^ getValidThru() {
		return	this->validThru;
	}

	void setCardNumber(Int64 number)
	{
		this->cardNumber = number;
	}
	void setSecurityCode(Int32 code)
	{
		this->securityCode = code;
	}
	void setValidThru(List< Int32>^ valid)
	{
		this->validThru = valid;
	}
};

