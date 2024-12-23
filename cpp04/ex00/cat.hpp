#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
    private:
        std::string _type;
    public:
    Cat(void);
    Cat(std::string const &type);
    ~Cat(void);
    void    makeSound() const;
};


#endif