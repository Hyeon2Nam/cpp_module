#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void)
{
	value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::Fixed(const int v)
{
	value = v << s_bit;
}

Fixed::Fixed(const float v)
{
	value = static_cast<int>(roundf(v * (1 << s_bit)));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed Fixed::operator++(int n)
{
	Fixed res(*this);
	value++;
	return (res);
}

Fixed &Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed Fixed::operator--(int n)
{
	Fixed res(*this);
	value--;
	return (res);
}

bool Fixed::operator>(Fixed const &rhs)
{
	return (value > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs)
{
	return (value < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return (value >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return (value <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs)
{
	return (value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return (value != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed res(value + rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	Fixed res(value - rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	Fixed res(this->toFloat() * rhs.toFloat());
	return (res);
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	Fixed res(this->toFloat() / rhs.toFloat());
	return (res);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
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
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << s_bit));
}

int Fixed::toInt(void) const
{
	return (value >> s_bit);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}


const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */