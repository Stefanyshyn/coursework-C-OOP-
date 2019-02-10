#include "ApartamentEstate.h"



ApartamentEstate::ApartamentEstate():Estate()
{
	this->floor = 1;
}

ApartamentEstate::ApartamentEstate(String ^ type, int bedrooms, double area, double price, int floor) :Estate(type, bedrooms, area, price)
{
	this->floor = floor;
}
