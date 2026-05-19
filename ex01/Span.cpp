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


void Span::addNumber(unsigned int n){
	if (this->_N.size() >= this->_max)
		throw std::runtime_error("Span is full !");
	this->_N.push_back(n);
}

unsigned int Span::shortestSpan(){
	std::vector<unsigned int> sorted = this->_N;
	std::vector<unsigned int> diff(sorted.size());
	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());
	unsigned int result = *std::min_element(diff.begin() + 1, diff.end());
	return (result);
}


unsigned int Span::longestSpan(){
	std::vector<unsigned int> sorted = this->_N;
	std::sort(sorted.begin(), sorted.end());
	unsigned int min = sorted.front();
	unsigned int max = sorted.back();
	return(max - min);
}


Span::~Span(){}


