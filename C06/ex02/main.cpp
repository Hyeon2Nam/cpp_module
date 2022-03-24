#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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

	A a;
	B b;
	C c;

	identify(a);
	identify(b);
	identify(c);
	identify(NULL);
}