#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _Hpoints(10), _Epoints(10), _Adamage(0)
{
    this->_name = name;
    std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " Destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_Epoints > 0 && this->_Hpoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_Adamage << " point(s) of damage!" << std::endl;
		this->_Epoints--;
    }
    else if (this->_Hpoints <= 0)
        std::cout << "ClapTrap " << this->_name << " cant attack because is already dead" << std::endl;
    else if (!this->_Epoints || this->_Epoints <= 0)
        std::cout << "ClapTrap " << this->_name << " cant attack because ran out of energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hpoints > 0)
    {
        std::cout << this->_name << " took " << amount << " Damage " << std::endl;
        this->_Hpoints -= amount;
    }
    else if (this->_Hpoints <= 0)
        std::cout << this->_name << " cant take Damage because is already Dead " << std::endl;
    if (this->_Hpoints <= 0)
        std::cout << this->_name << " Died " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 0)
    {
        if (this->_Epoints > 0 && this->_Hpoints > 0)
        {
            std::cout << this->_name << " Healed " << amount << " Health points " << std::endl;
            this->_Hpoints += amount;
            this->_Epoints--;
        }
        else if (this->_Hpoints <= 0)
            std::cout << this->_name << " cant heal because is dead " << std::endl;
        else if (this->_Epoints <= 0)
            std::cout << this->_name << " cant heal because no Energypoint " << std::endl;
   }
}

int ClapTrap::get_Health(void)
{
    return(this->_Hpoints);
}