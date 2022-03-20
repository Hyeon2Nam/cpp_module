#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(void)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 10;
		numbers[i] = value;
		mirror[i] = value;
	}

	std::cout << "====[numbers]====" << std::endl;
	numbers.printArr();
	std::cout << "====[mirror]====" << std::endl;
	numbers.printArr();

	// SCOPE
	{
		Array<int> tmp = numbers;
		std::cout << "====[tmp]====" << std::endl;
		tmp.printArr();
		Array<int> test(tmp);
		std::cout << "====[test]====" << std::endl;
		test.printArr();
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror;
	return 0;
}
