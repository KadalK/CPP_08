#include "Span.hpp"
#include <stdlib.h>

int main()
{
	try
	{

		srand(time(0));
		Span sp = Span(500);

		sp.addNumber(500);


		const std::vector<unsigned int> v = sp.getN();
		std::cout << "-------- Contain of _N --------\n";
		for (std::vector<unsigned int>::const_iterator it = v.begin(); it != v.end(); ++it)
		{
			std::cout << *it << std::endl;
		}

	std::cout <<  "Shorted Span is : " << sp.shortestSpan() << std::endl;
	std::cout <<  "Longest Span is : " << sp.longestSpan() << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}