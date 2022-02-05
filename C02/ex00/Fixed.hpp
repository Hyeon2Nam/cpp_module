#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int value;
	static const int s_bit = 8;

public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif /* *********************************************************** FIXED_H */