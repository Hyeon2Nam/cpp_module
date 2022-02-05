#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int s_bit = 8;

public:
	Fixed(void);
	Fixed(const int v);
	Fixed(const float v);
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );


#endif /* *********************************************************** FIXED_H */