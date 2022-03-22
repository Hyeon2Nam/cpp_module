#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
private:
	std::vector<int> arr;
	unsigned int _size;

public:
	Span();
	Span(unsigned int size);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &rhs);

	unsigned int getSize(void) const;
	std::vector<int> getArr(void) const;

	void addNumber(unsigned int n);

	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	class OutOfRangeException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("out of range.");
		}
	};

	class NoSpanToFindException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("no span to find.");
		}
	};
};

#endif /* ************************************************************ SPAN_H */