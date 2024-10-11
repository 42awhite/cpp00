#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    std::string input;
    int id = 0;

    while (1)
    {
        std::cout << "Introduce ADD SEARCH o EXIT" << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Error." << std::endl;
            exit (1);
        }
        else if(input == "ADD" || input == "add")
        {
            std::cout << "Añadiendo contacto" << std::endl;
            modify_contact(id%8);
            id++;
        }
        else if (input.substr(0, 6) == "SEARCH" || input.substr(0, 6) == "search")
        {
            int contact_id;  

            std::istringstream iss(input.substr(6)); 
            iss >> contact_id;
            if (iss && contact_id >= 0 && contact_id <= 7) 
            {
                print_one_contact(contact_id);  // Llamar a la función con el ID proporcionado
            } 
            else 
            {
                print_contacts();  // Si no hay número o es inválido, mostrar todos los contactos
            }
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
   // contacts[2].setFirstName("Paco");
}

void Phonebook::print_one_contact(int id)
{
    std::cout << "| index  |first name|last name | nickname |" << std::endl;

        std::cout << "|" << std::setw(8) << id << "|"; //4

        // Obtener el nombre, apellido y apodo
        std::string firstName = contacts[id].getFirstName();
        std::string lastName = contacts[id].getLastName();
        std::string nickname = contacts[id].getNickname();

        // Imprimir el nombre, truncando o rellenando con espacios
        std::cout << std::setw(10) << std::right << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
        std::cout << std::setw(10) << std::right << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
        std::cout << std::setw(10) << std::right << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << "|" << std::endl;
}

void Phonebook::print_contacts(void)
{
    std::cout << "| index  |first name|last name | nickname |" << std::endl;
    for (int n = 0; n < 8; n++)
    {
        std::cout << "|" << std::setw(8) << n << "|"; //4

        // Obtener el nombre, apellido y apodo
        std::string firstName = contacts[n].getFirstName();
        std::string lastName = contacts[n].getLastName();
        std::string nickname = contacts[n].getNickname();

        // Imprimir el nombre, truncando o rellenando con espacios
        std::cout << std::setw(10) << std::right << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
        std::cout << std::setw(10) << std::right << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
        std::cout << std::setw(10) << std::right << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << "|" << std::endl;
    }


    /* std::cout << "|  index   |first name |last name | nickname |" << std::endl;
    for(int n = 0; n < 8; n++)
    {
        std::cout << "|    " << n << "     |";
        std::cout << contacts[n].getFirstName() << " |";
        std::cout << contacts[n].getLastName() << " |";
        std::cout << contacts[n].getNickname() << " |" << std::endl;
    } */
}