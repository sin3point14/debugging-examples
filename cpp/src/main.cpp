include <iostream>
#include "Print.h"

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
}

/* point to cover :
Breakpoints : to break or pause the execution and then viewing the state.
sub points: step into/over/out buttons
call stack
reading the memory and state to get the idea of what can be wrong.*/