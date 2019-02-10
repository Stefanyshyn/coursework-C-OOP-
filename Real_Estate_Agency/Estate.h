#pragma once

using namespace System;

ref class Estate
{
protected:
	String^ type;
	double area, price;
	int bedrooms;
public:
	Estate();
	Estate::Estate(String^ type, int bedrooms, double area, double price);

	void setType(String^ type) {
		this->type = type;
	}
	void setBedrooms(int bedrooms) {
		this->bedrooms = bedrooms;
	}
	void setArea(double area) {
		this->area = area;
	}
	void setPrice(double price) {
		this->price = price;
	}
	String^ getType() {
		return this->type;
	}
	int getBedrooms() {
		return this->bedrooms;
	}
	double getArea() {
		return this->area;
	}
	double getPrice() {
		return this->price;
	}

	bool operator ==(const Estate^ est) {
		return (this->type == est->type && this->bedrooms == est->bedrooms && this->area == this->area && this->price == est->price);
	}
};

