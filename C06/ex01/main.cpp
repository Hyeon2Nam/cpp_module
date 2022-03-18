#include "Serialization.hpp"

int main()
{
	Data *a = new Data();
	a->i = 1;

	std::cout << "============Data *a==========" << std::endl;
	std::cout << "address:" << a << std::endl;
	std::cout << "a->i   :"<< a->i << std::endl;

	Serialization s;

	uintptr_t u = s.serialize(a);
	std::cout << "========uintptr_t u==========" << std::endl;
	std::cout << "address:" << std::hex << "0x" << u << std::endl;

	Data *b = s.deserialize(u);
	std::cout << "============Data *b==========" << std::endl;
	std::cout << "address:" << b << std::endl;
	std::cout << "b->i   :"<< b->i << std::endl;
}