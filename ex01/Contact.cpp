
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setFirstName(std::string str)
{
	this->FirstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->LastName = str;
}

void	Contact::setNickname(std::string str)
{
	this->Nickname = str;
}

void	Contact::setPhone_n(std::string str)
{
	this->Phone_n = str;
}

void	Contact::setSecret(std::string str)
{
	this->Secret = str;
}

std::string	Contact::getFirstName(void) const
{
	return (this->FirstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->LastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->Nickname);
}

std::string	Contact::getPhone_n(void) const
{
	return (this->Phone_n);
}

std::string	Contact::getSecret(void) const
{
	return (this->Secret);
}
