#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert() : _value(""), _dvalue(0), _isPinf(false){};

Convert::Convert(std::string value) : _value(value)
{
	char *cstr = NULL;

	// if (_value[0] != '-' && _value[0] != '+' && !std::isdigit(_value[0]))
	// 	throw("invalid value");

	_dvalue = strtod(this->getValue().c_str(), &cstr);

	if ((*cstr && std::strcmp(cstr, "f")) || _value[0] == 'f')
		throw("invalid value");
	if (value[0] != '-' && isinf(_dvalue))
		_isPinf = true;
	else
		_isPinf = false;
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

		if (i.getIsPinf() == true)
			o << "+";

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
		double d = i.getDValue();
		if (isnan(d))
			throw Convert::NanException();

		if (i.getIsPinf() == true)
			o << "+";
		o << d;

		if (d == n)
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

	if (isinf(this->getDValue()) || isnan(this->getDValue()))
		throw ImpossibleException();
	else if (!std::isprint(c))
		throw NonDisplaybleException();

	return (c);
}

int Convert::stringToInt() const
{
	if (isnan(this->getDValue()) ||
		std::numeric_limits<int>::max() < this->getDValue() ||
		std::numeric_limits<int>::min() > this->getDValue())
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

bool Convert::getIsPinf(void) const
{
	return _isPinf;
}

/* ************************************************************************** */