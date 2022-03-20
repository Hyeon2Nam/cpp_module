#include "iter.hpp"

int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	char b[3] = {'a', 'b', 'c'};
	std::string c[2] = {"Hello", "World!"};

	std::cout << "====[print]====" << std::endl;
	iter(a, 5, print);
	iter(b, 3, print);
	iter(c, 2, print);

	std::cout << "====[min]====" << std::endl;
	iter(a, 5, min);
}