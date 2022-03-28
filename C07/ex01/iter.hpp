#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, int size, void (*func)(T))
{
	for (int i = 0; i < size; i++)
		(*func)(arr[i]);
}

template <typename T>
void iter(T *arr, int size, T (*func)(T, T))
{
	for (int i = 0; i < size - 1; i++)
		std::cout << "min( " << arr[i] << ", " << arr[i + 1] << " ) = " << (*func)(arr[i], arr[i + 1]) << std::endl;
}

template <typename T>
void print(T a)
{
	std::cout << a << std::endl;
}

template <typename T>
T min(T a, T b)
{
	return a > b ? b : a;
}

#endif