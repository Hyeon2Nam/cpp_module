#include <iostream>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::list<int> l;
	std::vector<int> v;

	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}

	std::cout << "v = {";
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		std::cout << *i << ", ";
	std::cout << "}" << std::endl;

	std::cout << "====[exe easyfind]====" << std::endl;
	try
	{
		std::cout << *easyfind(v, 2) << std::endl;
		std::cout << *easyfind(v, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "==================" << std::endl;
	try
	{
		std::cout << *easyfind(l, 2) << std::endl;
		std::cout << *easyfind(l, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
