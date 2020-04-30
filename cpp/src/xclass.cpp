#include <iostream>
#include "xclass.h"

X::X(int a)
{
	i = a
}

X::X(int a, int b)
{
	i = a + b;
}

void X::foo()
{
	i *= 2;
}

X::~X()
{
	int id;
	id = i/2;
	if (id < 7 || id>10)
	{
		std::cout << "Error" << std::endl;
	}
}