#pragma once
#include "EnumEmployee.h"
#include <string>

using namespace System;

ref class Authorization
{
	std::string* login;
	std::string* password;
	int emploee;
public:
	Authorization();
	void setLogin(std::string login);
	void setPassword(std::string password);
	void setEmloee(int emploee);

	std::string getLogin();
	std::string getPassword();
	int getEmloee();
};

