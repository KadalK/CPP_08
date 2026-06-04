#include "Span.hpp"
#include <algorithm>
#include <numeric>

Span::Span(unsigned int n) : _max(n) {}

Span::Span(const Span& copy) : _N(copy._N) {}

Span& Span::operator=(const Span& other){
	if (this != &other)
		this->_N = other._N;
	return(*this);
}

std::vector<unsigned int> Span::getN() const{
	return(this->_N);
}

const char* Span::NoSpanException::what() const throw(){
	return("No Span");
}

void Span::addNumber(unsigned int value){
	if (this->_N.size() >= this->_max)
		throw std::runtime_error("Span is full !");
	this->_N.push_back(value);
}

void Span::addNumbers(unsigned int n){

	if (this->_N.size() + n > this->_max)
		throw std::runtime_error("Argument to big to fill span!");
	for (unsigned int i = 0; i < n; i++)
	{
		addNumber(std::rand() % 100);
	}
}

unsigned int Span::shortestSpan(){
	if (this->_N.size() == 1)
		throw std::runtime_error("Need minimum 2 values!");

	if (this->_N.size() < 2)
		throw NoSpanException();

	std::vector<unsigned int> sorted = this->_N;
	std::vector<unsigned int> diff(sorted.size());

	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());

	unsigned int result = *std::min_element(diff.begin() + 1, diff.end());
	return (result);
}

unsigned int Span::longestSpan(){
	if (this->_N.size() == 1)
		throw std::runtime_error("Need minimum 2 values!");
	std::vector<unsigned int> sorted = this->_N;
	std::sort(sorted.begin(), sorted.end());
	unsigned int min = sorted.front();
	unsigned int max = sorted.back();
	return(max - min);
}

Span::~Span(){}


