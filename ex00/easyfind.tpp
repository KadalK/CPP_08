#include "easyfind.hpp"
#include <algorithm>

const char* ValueNotFound::what() const throw(){
	return("Value not found");
}

template <typename T>
typename T::iterator easyfind(T& container, int value){

	typename T::iterator it = std::find(container.begin(), container.end(), value );
	if (it == container.end())
		throw ValueNotFound();
	return (it);
}

template <typename T>
typename T::iterator easyfind(const T &container, int value){

	typename T::iterator it = std::find(container.begin(), container.end(), value );
	if (it == container.end())
		throw ValueNotFound();
	return (it);
}
