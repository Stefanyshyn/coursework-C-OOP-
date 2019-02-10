#pragma once
#include "Estate.h"
#include"WorkWith.h"
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
ref class WorkWithEstate:public WorkWith<Estate>
{
public:
	WorkWithEstate();
	static List<Estate^>^ searchEstates(List<Estate^>^estates, String^ type, int minBedroom, int maxBedroom, double minArea, double maxArea, double minPrice, double maxPrice);
	List<Estate^>^ read(String^ path) override;
	static void saveEstate(List<Estate^>^ estate);
};

