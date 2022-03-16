#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class Convert
{
private:
	std::string _value;

public:
	Convert();
	Convert(std::string value);
	Convert(Convert const &src);
	~Convert();

	const char *stringToChar(void);
	int stringToInt(void);
	float stringToFloat(void);
	double stringToDouble(void);

	std::string getValue(void) const;

	Convert &operator=(Convert const &rhs);
};

#endif /* ********************************************************* CONVERT_H */