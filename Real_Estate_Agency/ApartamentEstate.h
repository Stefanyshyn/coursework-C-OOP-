#pragma once
#include "Estate.h"
ref class ApartamentEstate :
	public Estate
{
	int floor;
public:
	ApartamentEstate();
	ApartamentEstate(String^ type, int bedrooms, double area, double price, int floor);
	int getFloor() { return this->floor; }
	void setFloor(int floor) { this->floor = floor; }
};

