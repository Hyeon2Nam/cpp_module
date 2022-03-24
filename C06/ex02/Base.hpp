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
void identify(Base &p);

int isA(Base &p);
int isB(Base &p);
int isC(Base &p);

#endif /* ************************************************************ BASE_H */