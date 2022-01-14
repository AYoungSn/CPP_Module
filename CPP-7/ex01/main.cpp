#include "iter.hpp"

template<typename T>
void print(T const & x) {
	std::cout << x << "\n";
}

int main() {
	std::string strs[6] = { "red", "orange", "yellow", "green", "blue", "purple" };
	iter(strs, 6, print);
}