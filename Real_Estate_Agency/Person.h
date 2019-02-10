#pragma once

using namespace System;

ref class Person
{
protected:
	String^ name;
	String^ lastname;
public:
	Person();
	Person(String^ name, String^ lastname);
	String^ getName() {
		return this->name;
	}
	String^getLastname() {
		return this->lastname;
	}
	void setName(String^ name) {
		this->name = name;
	}
	void setLastname(String^ lastname) {
		this->lastname = lastname;
	}

};

