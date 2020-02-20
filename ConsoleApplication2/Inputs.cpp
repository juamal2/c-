#include "Inputs.h"

int * Inputs::IntInputs(int inputs)
{
	int * numPtr = new int[inputs];
	for (int i = 0; i < inputs; i++) {
		std::cout << "enter a number: " << std::endl;
		std::cin >> numPtr[i];
	}
	numPtr;
	return numPtr;
}

int Inputs::Highest(int * p)
{
	int *c = p;
	int high=0;
	int arr[5];

	for (int i = 0; i < 5; i++) {

		if (*c > high) { high = *c; }
		c++;
	}
	return high;
}

void Inputs::outputP(int * p)
{
	std::cout << &p << " outside of function... p  = " << *p << std::endl;
	p = p + 1;
	std::cout << &p << " outside of function... p2 = " << *p << std::endl;
	p = p + 1;
	std::cout << &p << " outside of function... p3 = " << *p << std::endl;
	p = p + 1;
	std::cout << &p << " outside of function... p4 = " << *p << std::endl;
}

int Inputs::add(int x, int y)
{
	return x + y;
}
