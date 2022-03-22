#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class NotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("Not found.");
	}
};


template <typename T>
typename T::iterator easyfind(T &c, int n)
{
	typename T::iterator i = std::find(c.begin(), c.end(), n);
	
	if (i == c.end())
		throw NotFoundException();
	return (i);
}

#endif /* ******************************************************** EASYFIND_H */