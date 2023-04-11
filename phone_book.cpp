#include <iostream>
#include <string>

class Contact
{
    public:
        Contact() {}
        
        Contact(std::string fname, std::string lname, std::string nick, int phone_number, std::string darkest_secret)
            : fname_(fname), lname_(lname), nick_(nick), phone_number_(phone_number), darkest_secret_(darkest_secret)
        {}

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
        PhoneBook(Contact* contact)
        : contact_(contact)
        {}

    Contact* add_contact(Contact contact) const{
        if (contact_)
        {
            while (true)
            {
                if (contact_ == NULL)
                    break;
                contact_+ 1;
            }
            if (contact_ != NULL)
                *contact_ = contact;
            else
            {
                contact_ - 8;
                *contact_ = contact;
            }
        }
        return (contact_);
    }
    private:
        Contact *contact_ = new Contact[8];
};

int main()
{
    std::string cum;
    std::cout << "ADD, SEARCH OR EXIT: ";
    std::cin >> cum;
    std::cout << cum;
}
