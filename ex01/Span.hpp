#pragma once

#include <iostream>
#include <vector>

class Span{
private:
	std::vector<unsigned int> _N;
	unsigned int _max;
	Span();
public:
	Span(unsigned int n);
	Span(const Span& copy);
	Span& operator=(const Span& other);

	std::vector<unsigned int> getN() const;

	void addNumber(unsigned int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	~Span();
};