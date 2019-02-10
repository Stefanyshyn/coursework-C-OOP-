#include "WorkWithClient.h"
#include <fstream>


WorkWithClient::WorkWithClient()
{

}
CreditCard^ WorkWithClient::checkDataCreditCard(String^number, String^code, String^validM, String^validY){
	CreditCard^ card = gcnew CreditCard();
	try {
		if (16 == number->Length) {
			card->setCardNumber(Convert::ToInt64(number));
		}
		if (3 == code->Length)
			card->setSecurityCode(Convert::ToInt32(code));
		if (2 == validM->Length && Convert::ToInt32(validM) <= 12 && 2 == validY->Length && Convert::ToInt32(validY) >= 18)
		{
			List<Int32>^ temp = gcnew List<Int32>();
			temp->Add(Convert::ToInt32(validM));
			temp->Add(Convert::ToInt32(validY));
			card->setValidThru(temp);
		}
	}
	catch (...) {
		card = nullptr;
	}
	return card;
}
List<Client^>^ WorkWithClient::read(String^ path){
	List<Client^>^ clients = gcnew List<Client^>();
	StreamReader^ rStream = nullptr;
	try {
		rStream = gcnew StreamReader(path);

		String^strFromFile;

		try {
			strFromFile = rStream->ReadLine();
		}
		catch (Exception^ex) {
			MessageBox::Show("File is empty", "Error", MessageBoxButtons::OK);
		};

		CreditCard^ card = nullptr;
		List<String^>^ dataClientInStr = gcnew List<String^>(strFromFile->Split('#'));

		if (7 <= dataClientInStr->Count)
			card = checkDataCreditCard(dataClientInStr[3], dataClientInStr[4], dataClientInStr[5], dataClientInStr[6]);
		
			Double discount = 0;
		try {
			discount = 100 > Convert::ToDouble(dataClientInStr[2]) ? Convert::ToDouble(dataClientInStr[2]) : 0;
		}
		catch (...) {
			discount = 0;
		}

		Client^ client = gcnew Client(dataClientInStr[0], dataClientInStr[1], card, discount);

		for (size_t j = 0; dataClientInStr != nullptr; ++j) {
			if (card != nullptr)
			{
				clients->Add(client);
			}

			try {strFromFile = rStream->ReadLine()->ToString();}
			catch (Exception^ ex){break;}

			dataClientInStr = gcnew List<String^>(strFromFile->Split('#'));
			if (7 <= dataClientInStr->Count)
				card = checkDataCreditCard(dataClientInStr[3], dataClientInStr[4], dataClientInStr[5], dataClientInStr[6]);
			
			discount = 0;
			try {discount = Convert::ToDouble(dataClientInStr[2]);}
			catch (...) {discount = 0;}

			client = gcnew Client(dataClientInStr[0], dataClientInStr[1], card, discount);
		}
	}
	catch (Exception^ex){MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);}
	finally{rStream->Close();}
	return clients;
}

void WorkWithClient::saveClient(List<Client^>^ clients)
{
	std::ofstream sout;
	try {
		sout.open("Client.txt");

		for (size_t i = 0; i < clients->Count; i++)
		{
			sout << tostring(clients[i]->getName()) << "#"
				<< tostring(clients[i]->getLastname()) << "#"
				<< clients[i]->getDiscount() << "#"
				<< clients[i]->getCreditCard()->getCardNumber() << "#"
				<< clients[i]->getCreditCard()->getSecurityCode() << "#"
				<< clients[i]->getCreditCard()->getValidThru()[0] << "#"
				<< clients[i]->getCreditCard()->getValidThru()[1] << "\n";
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
	finally{
		sout.close();
	}
}
