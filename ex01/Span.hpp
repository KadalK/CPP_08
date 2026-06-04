#pragma once

#include <iostream>
#include <vector>
#include <exception>

class Span{
private:
	std::vector<unsigned int> _N;
	unsigned int _max;
	Span();
public:
	Span(unsigned int n);
	Span(const Span& copy);
	Span& operator=(const Span& other);


	class NoSpanException : std::exception{
		virtual const char* what() const throw();
	};

	std::vector<unsigned int> getN() const;

	void addNumber(unsigned int value);
	void addNumbers(unsigned int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	~Span();
};