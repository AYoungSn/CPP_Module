#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & copy) 
: std::stack<T>(copy){}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &copy) {
	std::stack<T>::operator=(copy);
}