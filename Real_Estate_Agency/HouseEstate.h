#pragma once
#include "Estate.h"
using namespace System;
ref class HouseEstate :
	public Estate
{
	int countFloor;
public:
	HouseEstate();
	HouseEstate(String^ type, int bedrooms, double area, double price, int countFloor);
	int getCountFloor() { return this->countFloor; }
	void setCountFloor(int countFloor) { this->countFloor = countFloor; }
};

