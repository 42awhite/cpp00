
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string get_input(std::string msg)
{
		std::string input;

	std::cout << "Introduce tu " << msg << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cerr << "ERROR." << std::endl;
		exit(1);
	}
	if (input.empty())
	{
		std::cerr << "Empty imput. Try again." << std::endl;
		return(get_input(msg));
	}
	else
	{
		return(input);
	}
}
void	Contact::setFirstName(void)
{
	this->FirstName = get_input("nombre");
}

void	Contact::setLastName(void)
{
	this->LastName = get_input("apellido");
}

void	Contact::setNickname(void)
{
	this->Nickname = get_input("apodo");
}

void	Contact::setPhone_n(void)
{
	this->Phone_n = get_input("\rTengo un problema matemático... ¿puedo sumar tu número de teléfono a mi lista de contactos? ;)");
}

void	Contact::setSecret(void)
{
	this->Secret = get_input("secreto mas oscuro");
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
