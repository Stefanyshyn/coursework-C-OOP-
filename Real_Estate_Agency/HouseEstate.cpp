#include "HouseEstate.h"

HouseEstate::HouseEstate():Estate()
{
	this->countFloor = 1;
}

HouseEstate::HouseEstate(String ^ type, int bedrooms, double area, double price, int countFloor): Estate(type,bedrooms,area,price)
{
	this->countFloor = countFloor;
}
