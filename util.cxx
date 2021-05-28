#include "util.h"

double map (double x, double xLower, double xUpper, double yLower, double yUpper)
{
	return ((x - xLower)/(xUpper - xLower))*(yUpper - yLower) + yLower;
}

