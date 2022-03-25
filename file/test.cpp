#include <iostream>
#include <string>

template <typename T, int n>
void sum(T t)
{
	std::cout << t + n << std::endl;
}

int main(void)
{
	int a = 1;
	sum<int, 2>(a);
}