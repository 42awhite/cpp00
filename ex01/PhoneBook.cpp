#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    std::string input;
    unsigned int id = 0;

    while (1)
    {
        std::cout << "Introduce ADD SEARCH o EXIT" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cerr << "ERROR." << std::endl;
            exit(1);
        }
        if (input.empty())
            continue;
        else if(input == "ADD" || input == "add")
        {
            std::cout << "Añadiendo contacto" << std::endl;
            modify_contact(id%8);
            id++;
        }
        else if (input == "SEARCH" || input == "search")
        {
            print_contacts();  
           
            int contact_id;
            std::string char_id;

            std::cout << "Introduce un indice válido, si no >:(" << std::endl;
            std::getline(std::cin, char_id);
            if (std::cin.eof())
            {
                std::cerr << "ERROR." << std::endl;
                exit(1);
            }
            std::istringstream iss(char_id); 
            iss >> contact_id;
            if (iss && contact_id >= 0 && contact_id <= 7) 
                print_one_contact(contact_id);  
            else
                std::cout << "Invalid index >:(" << std::endl;
        }
        else if (input == "EXIT" || input == "exit")
        {
            std::cout << "saliendo de la agenda" << std::endl;
            exit (0);
        }
    } 
}
Phonebook::~Phonebook(void)
{

}
void Phonebook::modify_contact(int id)
{
    std::cout << "Modificando contacto con id: " << id << std::endl;
    contacts[id].setFirstName();
    contacts[id].setLastName();
    contacts[id].setNickname();
    contacts[id].setPhone_n();
    contacts[id].setSecret(); 
}

void Phonebook::print_one_contact(int id)
{
    std::string firstName = contacts[id].getFirstName();
    if (firstName.empty())
    {
        std::cout << "Invalid index >:(" << std::endl;
        return ;
    }
    std::cout << "Name: " << contacts[id].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[id].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[id].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[id].getPhone_n() << std::endl;
    std::cout << "Secret: " << contacts[id].getSecret() << std::endl;

}

void Phonebook::print_contacts(void)
{
    std::cout << "| index  |first name|last name | nickname |" << std::endl;
    for (int n = 0; n < 8; n++)
    {
        // Obtener el nombre, apellido y apodo
        std::string firstName = contacts[n].getFirstName();
        std::string lastName = contacts[n].getLastName();
        std::string nickname = contacts[n].getNickname();
        
        if (firstName.empty())
            continue;

        std::cout << "|" << std::setw(8) << n << "|"; //4

        // Imprimir el nombre, truncando o rellenando con espacios
        std::cout << std::setw(10) << std::right << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
        std::cout << std::setw(10) << std::right << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
        std::cout << std::setw(10) << std::right << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << "|" << std::endl;
    }
}