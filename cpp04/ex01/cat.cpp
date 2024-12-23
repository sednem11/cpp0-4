#include "cat.hpp"

Cat::Cat(void): Animal("Undefined")
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(std::string const &type): Animal(type)
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat(void)
{
    std::cout << "Cat type: " << this->getType() << " Destroyed " << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "hey im a cat of type: " << this->_type << " Meow?" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copied." << std::endl;
}

Brain &Cat::getBrain() const
{
    return(*this->_brain);
}

void    Cat::setBrain(Brain const &brain)
{
    *this->_brain = brain;
}

