#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int         _Hpoints;
    int         _Epoints;
    int         _Adamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    int     get_Health(void);
};

#endif