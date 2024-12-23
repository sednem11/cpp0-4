#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    private:
        std::string _type;
    public:
    Dog(void);
    ~Dog(void);
    Dog(std::string const &type);
    void    makeSound() const;
};


#endif