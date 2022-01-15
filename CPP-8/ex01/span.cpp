#include "span.hpp"

Span::Span(unsigned int n) {
	this->N = n;
	this->num = std::vector<int>();
}

Span::Span(const Span& copy) {
	this->num = copy.num;
	this->N = copy.N;
}

Span::~Span() {}

Span &Span::operator=(Span& copy) {
	if (this == &copy)
		return *this;
	this->num = std::vector<int>(copy.num);
	this->N = copy.N;
	return *this;
}

void Span::addNumber(int n) {
	if (num.size() >= this->N)
		throw Span::FullException();
	num.push_back(n);
	std::sort(this->num.begin(), this->num.end());
}

long Span::shortestSpan(void) const {
	if (num.size() < 2)
		throw Span::NotEnoughException();
	long shortest = abs((long)num[0] - (long)num[1]);
	
	for (unsigned int i = 1;i < num.size() - 1; i++) {
		if (abs((long)num[i] - (long)num[i+1]) < shortest)
			shortest = abs((long)num[i] - (long)num[i + 1]);
	}
	return (unsigned long)shortest;
}

long Span::longestSpan(void) const {
	if (num.size() < 2)
		throw Span::NotEnoughException();

	std::vector<int>::const_iterator min;
	std::vector<int>::const_iterator max;

	min = std::min_element(num.begin(), num.end());
	max = std::max_element(num.begin(), num.end());

	std::cout << "min: " << *min << "\n";
	std::cout << "max: " << *max << "\n";
	return ((long)*max - (long)*min);
}

const char* Span::AlreadyExistException::what() const throw() {
	return "Already exist exception";
}

const char* Span::FullException::what() const throw() {
	return "Full exception";
}

const char* Span::NotEnoughException::what() const throw() {
	return "Not enough exception";
}