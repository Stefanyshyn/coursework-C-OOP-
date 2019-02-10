#include "Authorization.h"

Authorization::Authorization()
{
	this->password = this->login = nullptr;
	this->emploee = -1;
}

void Authorization::setLogin(std::string login)
{
	*this->login = login;
}

void Authorization::setPassword(std::string password)
{
	*this->password = password;
}

void Authorization::setEmloee(int emploee)
{
	this->emploee = emploee;
}

std::string Authorization::getLogin()
{
	return *this->login;
}

std::string Authorization::getPassword()
{
	return *this->password;
}

int Authorization::getEmloee()
{
	return this->emploee;
}
