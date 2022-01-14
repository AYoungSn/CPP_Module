#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> num;
	unsigned int N;
public:
	Span(unsigned int num);
	Span(const Span& copy);
	virtual ~Span();
	Span &operator=(const Span& copy);

	void addNumber(int n);
	long shortestSpan(void) const;
	long longestSpan(void) const;

	
}

#endif