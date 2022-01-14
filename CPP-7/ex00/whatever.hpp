#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T v1, T v2) {
	if (v1 < v2)
		return v1;
	return v2;
}

template<typename T>
T max(T a, T b) {
	if (a < b)
		return b;
	return a;
}

#endif