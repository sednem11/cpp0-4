#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string const &type);
    virtual ~Animal();
    virtual void    makeSound() const;
    std::string const   &getType() const;
    virtual Brain 		&getBrain(void) const = 0;
};


#endif