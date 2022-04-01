#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top: " << mstack.top() << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	const std::stack<int> s(mstack);
	
	MutantStack<int>::const_iterator it1 = mstack.cbegin();
	MutantStack<int>::const_iterator ite1 = mstack.cend();
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	return 0;
}
