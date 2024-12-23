#include "dog.hpp"

Dog::Dog(void): Animal("Undefined")
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(std::string const &type): Animal(type)
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl;
    this->_brain = new Brain();
}

void Dog::makeSound() const
{
    std::cout << "oi im a Dog of type: " << this->_type << " WOFF??" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog type: " << this->getType() << " Destroyed " << std::endl;
}

Dog::Dog(Dog const &copy)
{
    this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copied." << std::endl;
}

Brain &Dog::getBrain() const
{
    return(*this->_brain);
}

void    Dog::setBrain(Brain const &brain)
{
    *this->_brain = brain;
}
