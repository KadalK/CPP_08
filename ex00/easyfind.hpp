#pragma once
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value);

template <typename T>
typename T::iterator easyfind(const T &container, int value);

class ValueNotFound : public std::exception {
	const char* what() const throw();
};

#include "easyfind.tpp"