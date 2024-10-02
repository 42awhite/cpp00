#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string Phone_n;
		std::string Secret;
	public:
		Contact(void);
		~Contact(void);
		//Setters
		void setFirstName(std::string firstName);
    	void setLastName(std::string lastName);
    	void setNickname(std::string nickname);
    	void setPhone_n(std::string phone_n);
    	void setSecret(std::string secret);
		//Getters
    	std::string getFirstName() const;
    	std::string getLastName() const;
    	std::string getNickname() const;
    	std::string getPhone_n() const;
    	std::string getSecret() const;
};

#endif