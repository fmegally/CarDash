#include <cmath>
#include <vector>

double map (double x, double xLower, double xUpper, double yLower, double yUpper);

template <class T>
std::vector<T> linspace(T lowerBound, T upperBound, unsigned int n)
{
	T h = (upperBound - lowerBound)/ static_cast<T>(n - 1);
	std::vector<T> range(n);
	typename std::vector<T>::iterator ix;
	unsigned int i;
	for(ix = range.begin(), i = 0 ; ix <= range.end(); ix++, i++)
	{
		*ix = lowerBound + (i * h);
	}
	return range;
}


template <class T>
std::vector<T> range(T lowerBound, T upperBound, T step, bool closedinterval=false)
{
	std::vector<T> range;
	T value = lowerBound;
	while(value < upperBound)
	{
		range.push_back(value);
		value += step;
	}

	if(closedinterval) range.push_back(upperBound);
	return range;
}
