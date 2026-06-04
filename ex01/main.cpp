#include "Span.hpp"
#include <stdlib.h>

int main()
{
	try
	{
		size_t fill = 0;
		srand(time(0));
		Span sp = Span(500);

		sp.addNumbers(50);
		sp.addNumber(50);



		const std::vector<unsigned int> v = sp.getN();
		std::cout << "-------- Contain of _N --------\n";
		for (std::vector<unsigned int>::const_iterator it = v.begin(); it != v.end(); ++it)
		{
			if (fill == 0)
				std::cout << "{";
			fill++;
			std::cout << *it;
			if (fill != v.size())
				std::cout << ", ";
			if (fill == v.size())
				std::cout << "}" << std::endl;
		}

	std::cout << "number of elements in the array = " << fill << std::endl;
	std::cout <<  "Shorted Span is : " << sp.shortestSpan() << std::endl;
	std::cout <<  "Longest Span is : " << sp.longestSpan() << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}