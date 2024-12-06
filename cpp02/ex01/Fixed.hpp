#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int value;
    static const int frac;
public:
    Fixed(const int param);
    Fixed(const float param);
    Fixed(void);
    ~Fixed();
    Fixed(Fixed const &copy);
	Fixed	&operator=(Fixed const &copy);
    float   toFloat(void) const;
    int     toInt(void) const;
    int		getRawBits(void) const;
    void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif