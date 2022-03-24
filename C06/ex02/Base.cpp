#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

Base *generate(void)
{
	int i = std::rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "Create A" << std::endl;
		return new A();
		break;
	case 1:
		std::cout << "Create B" << std::endl;
		return new B();
		break;
	case 2:
		std::cout << "Create C" << std::endl;
		return new C();
		break;
	default:
		return NULL;
		break;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type : C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

int isA(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		return (1);
	}
	catch (std::bad_cast)
	{
		return (0);
	}
}

int isB(Base &p)
{
	try
	{
		B &a = dynamic_cast<B &>(p);
		static_cast<void>(a);
		return (1);
	}
	catch (std::bad_cast)
	{
		return (0);
	}
}

int isC(Base &p)
{
	try
	{
		C &a = dynamic_cast<C &>(p);
		static_cast<void>(a);
		return (1);
	}
	catch (std::bad_cast)
	{
		return (0);
	}
}

void identify(Base &p)
{
	if (isA(p))
		std::cout << "Type : A" << std::endl;
	else if (isB(p))
		std::cout << "Type : B" << std::endl;
	else if (isC(p))
		std::cout << "Type : C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */