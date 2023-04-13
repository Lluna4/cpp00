#include <iostream>
#include <string>

class Contact
{
    public:
        Contact() {}
        
        Contact(std::string fname, std::string lname, std::string nick, int phone_number, std::string darkest_secret)
            : fname_(fname), lname_(lname), nick_(nick), phone_number_(phone_number), darkest_secret_(darkest_secret)
        {}

        int add_fname(std::string str)
        {
            if (!str.empty())
            {
                fname_ = str;
                return (0);
            }
            else
                return (-1);
        }
    private:
        std::string fname_;
        std::string lname_;
        std::string nick_;
        int phone_number_;
        std::string darkest_secret_;
};

class PhoneBook
{
    public:
        PhoneBook() {}

        void add_contact(Contact contact)
        {
            if (num < 8)
            {
                contact_[num] = contact;
                num++;
            }
            else
            {
                num = 0;
                contact_[num] = contact;
            }
        }

        Contact get_contact(int n)
        {
            if (&contact_[n] != nullptr)
                return contact_[n];
            else
                return Contact();
        }
    private:
        Contact *contact_ = new Contact[8];
        int num = 0;
};

int main()
{
    int valid = 0;
    PhoneBook lista = PhoneBook();
    std::string respuesta;
    while (true)
    {
        std::cout << "ADD, SEARCH OR EXIT";
        std::cin >> respuesta;
        if (respuesta.compare("ADD") == 0)
        {
            Contact contacto = Contact();
            std::system("clear");
            std::cout << "First mame: ";
            std::cin >> respuesta;
            std::getline(std::cin, respuesta);
            valid = contacto.add_fname(respuesta);
            if (valid == -1)
            {
                std::cout << "Invalid name";
                break;
            }
            
        }
    }
    return 0;
}

