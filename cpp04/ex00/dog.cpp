#include "dog.hpp"

Dog::Dog(void): _type("Undefined")
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl << std::endl;
}

Dog::Dog(std::string const &type): Animal(type), _type(type)
{
    std::cout << "Animal type " << this->getType() << " Created From: Animal " << std::endl << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "oi im a Dog of type: " << this->_type << " WOFF??" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog type: " << this->getType() << " Destroyed " << std::endl;
}
