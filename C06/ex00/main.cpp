#include "Convert.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
		{
			if (argc > 2)
				throw "Too many arguments";
			else
				throw "Too few arguments";
			return (1);
		}

		std::string input = argv[1];
		Convert c(input);
		std::cout << c << std::endl;
	}
	catch (const char *s)
	{
		std::cerr << s << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}