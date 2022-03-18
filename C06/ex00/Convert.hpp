#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>

class Convert
{
private:
	std::string _value;
	double _dvalue;
	bool _isPinf;

public:
	Convert();
	Convert(std::string value);
	Convert(Convert const &src);
	~Convert();

	char stringToChar(void) const;
	int stringToInt(void) const;
	float stringToFloat(void) const;
	double stringToDouble(void) const;

	std::string getValue(void) const;
	double getDValue(void) const;
	bool getIsPinf(void) const;

	class ImpossibleException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("impossible");
		}
	};

	class NanException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("nan");
		}
	};

	class NonDisplaybleException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Non displayable");
		}
	};

	class OverFlowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("overflow");
		}
	};

	Convert &operator=(Convert const &rhs);
};

std::ostream &operator<<(std::ostream &o, Convert const &i);

#endif /* ********************************************************* CONVERT_H */