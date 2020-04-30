include <iostream>
#include "Print.h"
#include "xclass.h"

int main() 
{
    Print p;
    p.print("Here we go!!!");

	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		a++;
		std::cout << a << std::endl;
	}

/*	X* x1 = new X(7);
	X* x2 = new X(6,2);
	X* x3 = new X(9);
	X* x4 = new X(9,1);
	x1->foo();
	x2->foo();
	x3->foo();
	x4->foo();
	delete x1,
	delete x2;
	delete x3;
	delete x4; */
}

/* point to cover :
Breakpoints : to break or pause the execution and then viewing the state.
sub points: step into/over/out buttons
call stack
reading the memory and state to get the idea of what can be wrong.*/