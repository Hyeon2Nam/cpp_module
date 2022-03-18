#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert() : _value(""), _dvalue(0){};

Convert::Convert(std::string value) : _value(value)
{
	char *cstr = NULL;

	_dvalue = strtod(this->getValue().c_str(), &cstr);
};

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

std::ostream &operator<<(std::ostream &o, Convert const &i)
{
	char c;
	int n;

	o << "char: ";

	try
	{
		c = i.stringToChar();

		o << "'" << c << "'" << std::endl;
	}
	catch (const std::exception &e)
	{
		o << e.what() << '\n';
	}

	o << "int: ";

	try
	{
		n = i.stringToInt();
		o << n << std::endl;
	}
	catch (const std::exception &e)
	{
		o << e.what() << '\n';
	}

	o << "float: ";

	try
	{
		float f = i.stringToFloat();
		o << f;

		if (f == n)
			o << ".0";
	}
	catch (const std::exception &e)
	{
		o << e.what();
	}

	o << "f" << std::endl;

	o << "double: ";

	try
	{
		if (isnan(i.stringToDouble()))
			throw Convert::NanException();

		o << i.stringToDouble();

		if (i.stringToDouble() == n)
			o << ".0";
	}
	catch (const std::exception &e)
	{
		o << e.what();
	}

	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

char Convert::stringToChar() const
{
	char c;

	c = static_cast<char>(stringToDouble());

	if (isinf(c) || isnan(this->stringToDouble()))
		throw ImpossibleException();
	else if (!std::isprint(c))
		throw NonDisplaybleException();

	return (c);
}

int Convert::stringToInt() const
{

	if (isnan(this->stringToDouble()) || isinf(this->stringToDouble()))
		throw ImpossibleException();

	int i = static_cast<int>(this->stringToDouble());

	return (i);
}

float Convert::stringToFloat() const
{
	float f = static_cast<float>(this->stringToDouble());

	if (isnan(f))
		throw NanException();

	return (f);
}

double Convert::stringToDouble() const
{
	return (this->getDValue());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Convert::getValue(void) const
{
	return _value;
}

double Convert::getDValue(void) const
{
	return _dvalue;
}

/* ************************************************************************** */