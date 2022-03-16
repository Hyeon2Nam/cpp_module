#include "Convert.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc >= 3)
			throw "Too many arguments";
		std::string input = argv[1];
		Convert c(input);
		std::cout << "char: " << c.stringToChar() << std::endl;
		std::cout << "int: " << c.stringToInt() << std::endl;
		std::cout << "float: " << c.stringToFloat() << std::endl;
		std::cout << "double: " << c.stringToDouble() << std::endl;
	}
	catch (const char *e)
	{
		std::cerr << e << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}