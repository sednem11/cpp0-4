#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void        add(void);
        void        search(void);
        void        print(contact contact);
        void        printall(contact contact[8]);
        int         search_ui(contact contact[8]);

    private:
        contact contacts[8];
        int     index;
};


#endif