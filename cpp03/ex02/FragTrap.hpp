#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
    FragTrap(std::string const &name);
    ~FragTrap(void);
    void    HighFivesGuys(void);
};

#endif