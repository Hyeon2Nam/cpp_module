#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int v)
{
	std::cout << "Int constructor called" << std::endl;
	value = v << s_bit;
}

Fixed::Fixed(const float v)
{
	std::cout << "Float constructor called" << std::endl;
	value = static_cast<int>(roundf(v * (1 << s_bit)));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	value = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	return (o << i.toFloat());
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) /  (1 << s_bit));
}

int Fixed::toInt(void) const
{
	return (value >> s_bit);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */