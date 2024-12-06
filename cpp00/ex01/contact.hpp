#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class contact{
    public:
        contact(void);
        ~contact(void);

        std::string get_name(void) const;
        std::string get_lname(void) const;
        std::string get_nickname(void) const;
        std::string get_number(void) const;
        std::string get_secret(void) const;
        int check_alpha(std::string str);
        int check_num(std::string str);

        void    set_name(std::string str);
        void    set_lname(std::string str);
        void    set_nickname(std::string str);
        void    set_number(std::string str);
        void    set_secret(std::string str);

    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string secret;
};

#endif