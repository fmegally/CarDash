#include <iostream>
#include "util.h"

int main (int argc, char* argv[])
{
	double x = map(0,800,800,225,-45);
	std::cout << x << std::endl;
	return 0;
}

