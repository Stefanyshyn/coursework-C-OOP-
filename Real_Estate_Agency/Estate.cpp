#pragma once
#include "Estate.h"

Estate::Estate()
{
	this->type = "";
	this->area = this->price = this->bedrooms = 0;
}

Estate::Estate(String^ type, int bedrooms, double area, double price)
{
	this->type = type;
	this->bedrooms = bedrooms;
	this->area = area;
	this->price = price;
}
