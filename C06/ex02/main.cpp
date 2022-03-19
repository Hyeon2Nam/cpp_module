#include "Base.hpp"

int main()
{
	std::srand(time(0));
	for (size_t i = 0; i < 5; i++)
	{
		Base *b = generate();
		identify(b);
		std::cout << "-----------" << std::endl;
		delete b;
	}
	
}