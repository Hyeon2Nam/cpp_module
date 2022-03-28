#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
	T *_arr;
	unsigned int _size;

public:
	Array()
	{
		_arr = NULL;
		std::cout << _arr << std::endl;
		_size = 0;
	};
	Array(unsigned int n)
	{
		_size = n;
		_arr = new T[n];
	};
	Array(Array const &src) { *this = src; };
	~Array()
	{
		if (_size != 0)
		{
			delete[] _arr;
			_arr = NULL;
			_size = 0;
		}
	};

	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			if (this->_size != 0)
			{
				delete[] _arr;
				_arr = NULL;
				_size = 0;
			}
			_size = rhs.size();
			_arr = new T[rhs.size()];
			for (unsigned int i = 0; i < rhs.size(); i++)
				_arr[i] = rhs[i];
		}
		return *this;
	};

	const T &operator[](int i) const
	{
		if (i >= static_cast<int>(this->size()) || i < 0)
			throw OutOfLimits();
		return (_arr[i]);
	};

	T &operator[](int i)
	{
		if (i >= static_cast<int>(this->size()) || i < 0)
			throw OutOfLimits();
		return (_arr[i]);
	};

	class OutOfLimits : public std::exception
	{
		const char *what() const throw()
		{
			return ("Out of limits");
		}
	};

	unsigned int size(void) const
	{
		return _size;
	};

	void printArr(void) const
	{
		for (size_t i = 0; i < this->size(); i++)
			std::cout << "arr[" << i << "]:" << _arr[i] << std::endl;
	}
};

#endif /* *********************************************************** ARRAY_H */