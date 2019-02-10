#include "Client.h"

Client::Client()
{
	this->name = this->lastname = "";
	this->card = nullptr;
	this->discount = 0;
}

Client::Client(String ^ name, String ^ lastname, CreditCard ^ card, Double discount)
{
	this->name = name;
	this->lastname = lastname;
	this->card = card;
	this->discount = discount;
}

Client::Client(List<String^>^ dataClient)
{
	this->name = this->lastname = "";
	this->card = nullptr;
	this->discount = 0;
	this->name = 0 <= dataClient->Count ? dataClient[0] : "No name";
	this->lastname = 1 <= dataClient->Count ? dataClient[1] : "No lastname";
	try {
		this->discount = 2 <= dataClient->Count ? Convert::ToDouble(dataClient[2]) : 0;
	}
	catch (Exception^ex)
	{
		this->discount = 0;
	}
	
	this->card->setCardNumber(3 <= dataClient->Count ? Convert::ToInt64(dataClient[3]): 0);
}
