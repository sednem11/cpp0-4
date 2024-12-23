#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::set_ideas(std::string const &idea, int const &index)
{
    if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

std::string const &Brain::get_ideas(int const &index)
{
    if (index >= 0 && index < 100)
        return(this->_ideas[index]);
    else
    {
        std::cout << "brain aint braining but this is my first thought:  ";
        return(this->_ideas[0]);
    }
}
