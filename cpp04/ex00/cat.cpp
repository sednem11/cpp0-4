#include "cat.hpp"

Cat::Cat(void): _type("undefined")
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl << std::endl;
}

Cat::Cat(std::string const &type): Animal(type)
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat type: " << this->getType() << " Destroyed " << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "hey im a cat of type: " << this->_type << " Meow?" << std::endl;
}