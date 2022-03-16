#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert() : _value(""){};

Convert::Convert(std::string value) : _value(value){};

Convert::Convert(const Convert &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
		this->_value = rhs.getValue();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Convert::stringToChar()
{
	if (this->getValue().compare("0"))
	{
		const char *str = "Non displayable";
		return (str);
	}

	return (0);
}

int Convert::stringToInt()
{
	return (1);
}

float Convert::stringToFloat()
{
	return (1);
}

double Convert::stringToDouble()
{
	double d1;
	char *cstr= NULL;

	d1 = strtod(this->getValue().c_str(), &cstr);
	
	return (d1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Convert::getValue(void) const
{
	return _value;
}

/* ************************************************************************** */