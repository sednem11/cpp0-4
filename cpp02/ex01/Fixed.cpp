#include "Fixed.hpp"

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

const int Fixed::frac = 8;

Fixed::Fixed(const int param): value(value * ft_pow(2, this->frac))
{
}

Fixed::Fixed(const float param): value(value * ft_pow(2, this->frac))
{
}

Fixed::Fixed(void): value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->value * ft_pow(2, -this->frac));
}

int	Fixed::toInt(void) const
{
	return (this->value * ft_pow(2, -this->frac));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}