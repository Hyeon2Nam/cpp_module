#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc > 2)
			std::cout << "Too many arguments" << std::endl;
		else
			std::cout << "Too few arguments" << std::endl;
		return (1);
	}
	std::string input = argv[1];
	Convert c(input);
	std::cout << c << std::endl;
}