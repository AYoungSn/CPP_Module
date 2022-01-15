#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	std::vector<int> num;
	unsigned int N;
public:
	Span(unsigned int n);
	Span(const Span& copy);
	virtual ~Span();
	Span &operator=(Span& copy);

	void addNumber(int n);

	template<typename Iterator>
void addNumber(Iterator begin, Iterator end) {
	if (end - begin > this->N)
		throw Span::FullException();
	num.insert(num.end(), begin, end);
	// num.push_back();
	std::sort(this->num.begin(), this->num.end());
}

	long shortestSpan(void) const;
	long longestSpan(void) const;

	class AlreadyExistException : public std::exception{
		virtual const char* what() const throw();
	};

	class FullException: public std::exception {
		virtual const char* what() const throw();
	};

	class NotEnoughException: public std::exception {
		virtual const char* what() const throw();
	};
};

#endif