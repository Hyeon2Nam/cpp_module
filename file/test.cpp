#include <iostream>
#include <string>

class A
{
private:
public:
	std::string s;
	A() : s("A") { std::cout << "A class" << std::endl; }

	virtual void myName()
	{
		std::cout << "My name is " + s << std::endl;
	}
};

class B : public A
{
private:
	std::string s;

public:
	B() : A(), s("B")
	{
		std::cout << "B class" << std::endl;

		myName();
	}

	void myName()
	{
		std::cout << "My name is " + s << std::endl;
	}
};

int main()
{
	A a;
	B b;

	A *p_a = new B();
	B *p_b = dynamic_cast<B*>(p_a);
	p_b->myName();
}	