#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
	T* arr;
	unsigned int _size;
public:
	Array() {arr = new T(0);}
	Array(unsigned int n) {
		arr = new T[n];
		_size = n;
	}
	Array(const Array & copy) {
		this->arr = new T[copy._size];
		this->_size = copy._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->arr[i] = copy.arr[i];
	}
	Array& operator=(const Array& copy) {
		if (this == &copy)
			return *this;
		if (this->arr) {
			delete [] arr;
			this->arr = new T[copy._size];
			this->_size = copy._size;
		}
		for (unsigned int i = 0; i < _size; i++)
			this->arr[i] = copy.arr[i];
		return *this;
	}
	T &operator[](unsigned int i) const {
		if (i >= _size)
			throw std::exception();
		return (this->arr[i]);
	}
	unsigned int size() const {return _size;}
};

#endif