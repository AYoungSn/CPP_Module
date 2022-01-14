#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NotFound : public std::exception {
	virtual const char* what() const throw() {
		return "Exception: Not found";
	}
};

template<typename T>
typename T::iterator easyfind(T& arr, int n) {
	typename T::iterator iter;
	if ((iter = std::find(arr.begin(), arr.end(), n)) != arr.end())
		return (iter);
	else
		throw NotFound();
}

#endif