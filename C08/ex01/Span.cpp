#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0){};

Span::Span(unsigned int size) : _size(size){};

Span::Span(const Span &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	arr.clear();
	std::vector<int>().swap(arr);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		if (arr.size())
		{
			arr.clear();
			std::vector<int>().swap(arr);
		}
		_size = rhs.getSize();
		arr = rhs.getArr();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(unsigned int n)
{
	if (arr.size() >= getSize())
		throw OutOfRangeException();
	arr.push_back(n);
}

unsigned int Span::shortestSpan(void)
{
	if (arr.size() <= 1)
		throw NoSpanToFindException();

	std::vector<int> tmp(arr);

	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), static_cast<int (*)(int)>(&std::abs));

	return *std::min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan(void)
{
	if (arr.size() <= 1)
		throw NoSpanToFindException();

	return (*std::max_element(arr.begin(), arr.end())) - (*std::min_element(arr.begin(), arr.end()));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getSize(void) const
{
	return _size;
}

std::vector<int> Span::getArr(void) const
{
	return arr;
}

/* ************************************************************************** */