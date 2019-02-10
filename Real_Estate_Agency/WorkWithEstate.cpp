#include "WorkWithEstate.h"
#include <fstream>

using namespace System::Windows::Forms;

WorkWithEstate::WorkWithEstate()
{
}

List<Estate^>^ WorkWithEstate::searchEstates(List<Estate^>^estates, String^ type,
	int minBedroom, int maxBedroom,
	double minArea, double maxArea,
	double minPrice, double maxPrice)
{
	List<Estate^>^ sEstate = gcnew List<Estate^>();

	for (int i = 0; i < estates->Count;) {
		sEstate->Add(estates[i++]);
	}

	if (type != "")
	{
		for (int i = 0; i < sEstate->Count;)
		{
			if (type == sEstate[i]->getType())
				++i;
			else
				sEstate->RemoveAt(i);
		}
	}

	int maxB, minB;
	if (minBedroom != -1 || maxBedroom != -1)
	{
		if (minBedroom == -1) minB = 0;
		else minB = Convert::ToInt32(minBedroom);

		if (maxBedroom == -1) maxB = 999999;
		else maxB = Convert::ToInt32(maxBedroom);

		if (maxB < minB) {
			Int32 temp = maxB;
			maxB = minB;
			minB = temp;
		}

		if ((minB == 0 && maxB == 999999) || maxB > 0) {
			for (int i = 0; i < sEstate->Count;)
				if (minB <= sEstate[i]->getBedrooms() && sEstate[i]->getBedrooms() <= maxB)
					++i;
				else sEstate->RemoveAt(i);
		}
	}

	Double max, min;
	if (minArea < 0) min = 0;
	else min = minArea;

	if (maxArea < 0) max = 999999;
	else max = maxArea;

	if (max < min) {
		double temp = max;
		max = min;
		min = temp;
	}

	if ((min == 0 && max == 999999) || max > 0) {
		for (int i = 0; i < sEstate->Count;)
			if (min <= sEstate[i]->getBedrooms() && sEstate[i]->getBedrooms() <= max)
				++i;
			else sEstate->RemoveAt(i);
	}

	if (minPrice < 0) min = 0;
	else min = minPrice;

	if (maxPrice < 0) max = 999999;
	else max = maxPrice;

	if (max < min) {
		double temp = max;
		max = min;
		min = temp;
	}

	if ((min == 0 && max == 999999) || max > 0) {
		for (int i = 0; i < sEstate->Count;)
			if (min <= sEstate[i]->getBedrooms() && sEstate[i]->getBedrooms() <= max)
				++i;
			else sEstate->RemoveAt(i);
	}

	return sEstate;
}



List<Estate^>^ WorkWithEstate::read(String^ path)
{
	List<Estate^>^ estates = gcnew List<Estate^>();
	StreamReader^ rStream = nullptr;

	try {
		
		rStream = gcnew StreamReader(path);

		String^strFromFile = nullptr;
		List<String^>^ dataEstate = nullptr;

		try { strFromFile = rStream->ReadLine(); }
		catch (Exception^ex) { MessageBox::Show("File is empty", "Error", MessageBoxButtons::OK); };
		
		dataEstate = gcnew List<String^>(strFromFile->Split('#'));

		Estate^ estate = gcnew Estate(dataEstate[0], Convert::ToInt32(dataEstate[1]), Convert::ToDouble(dataEstate[2]), Convert::ToDouble(dataEstate[3]));

		estates->Add(estate);

		for (int i = 0; dataEstate != nullptr; ++i)
		{
			try { strFromFile = rStream->ReadLine()->ToString(); }
			catch (Exception^ ex) { break; }

			dataEstate = gcnew List<String^>(strFromFile->Split('#'));

			estate = gcnew Estate(dataEstate[0], Convert::ToInt32(dataEstate[1]), Convert::ToDouble(dataEstate[2]), Convert::ToDouble(dataEstate[3]));
			estates->Add(estate);
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
	finally{
	rStream->Close();
	}
	return estates;
}

Void WorkWithEstate::saveEstate(List<Estate^>^ estates)
{
	ofstream sout;
	try {
		sout.open("RealEstate.txt");
		for (size_t i = 0; i < estates->Count; i++)
			sout << tostring(estates[i]->getType()->Replace("#", "?")) << "#"
			<< tostring(Convert::ToString(estates[i]->getBedrooms())->Replace("#", "?")) << "#"
			<< tostring(Convert::ToString(estates[i]->getArea())->Replace("#", "?")) << "#"
			<< tostring(Convert::ToString(estates[i]->getPrice())->Replace("#", "?"))<<"\n";
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
	finally{
		sout.close();
	}
}
