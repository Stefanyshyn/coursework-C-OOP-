#include "Person.h"

Person::Person()
{
	this->name = this->lastname = "";
}

Person::Person(String ^ name, String ^ lastname)
{
	this->name = name;
	this->lastname = lastname;
}
