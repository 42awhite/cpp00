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
		void setFirstName(void);
    	void setLastName(void);
    	void setNickname(void);
    	void setPhone_n(void);
    	void setSecret(void);
		//Getters
    	std::string getFirstName() const;
    	std::string getLastName() const;
    	std::string getNickname() const;
    	std::string getPhone_n() const;
    	std::string getSecret() const;
};

#endif