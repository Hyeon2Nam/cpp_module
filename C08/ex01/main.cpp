#include <iostream>
#include "Span.hpp"
#include <ctime>

int main()
{
	std::srand(time(0));
	std::cout << "====[Success Case]====" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortestSpan:" << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:" << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(1000);
		for (unsigned int i = 0; i < sp.getSize()- 1; i++)
			sp.addNumber(rand() % 1000);

		std::cout << "shortestSpan:" << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:" << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "====[Failed Case]====" << std::endl;
	std::cout << "----[no span to find]----" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		std::cout << "shortestSpan:" << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "----[out of range]----" << std::endl;
	try
	{
		Span sp = Span(5);
		for (unsigned int i = 0; i <= sp.getSize(); i++)
			sp.addNumber(i);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
