#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Base
{
public:
	virtual ~Base();
};

Base *generate(void);
void identify(Base *p);

#endif /* ************************************************************ BASE_H */