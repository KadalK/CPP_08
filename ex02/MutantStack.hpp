#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack();
	MutantStack(const MutantStack& copy);
	MutantStack& operator=(const MutantStack& other);
	typename std::deque<T>::const_iterator begin() const;
	typename std::deque<T>::iterator begin();
	typename std::deque<T>::const_iterator end() const;
	typename std::deque<T>::iterator end();
	~MutantStack();
};

#include "MutantStack.tpp"
#endif

