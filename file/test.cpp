#include <iostream>
#include <string>

class A
{
	// virtual void q();
};
class B : public A
{
};

int main()
{
	A *a = new B();
	B *b = dynamic_cast<B *>(a);
}