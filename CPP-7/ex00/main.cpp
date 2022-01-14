#include "whatever.hpp"

int main() {
	int i1, i2;
	double d1, d2;
	char c1, c2;

	std::cout << "=== swap test ===\n";
	i1 = 10;
	i2 = 20;
	std::cout << "before " << i1 << ", " << i2 << "\n";
	swap(i1, i2);
	std::cout << "after " << i1 << ", " << i2 << "\n";

	d1 = 5.15;
	d2 = 45.334;
	std::cout << "before " << d1 << ", " << d2 << "\n";
	swap(d1, d2);
	std::cout << "after " << d1 << ", " << d2 << "\n";

	c1 = 'v';
	c2 = 'a';
	std::cout << "before " << c1 << ", " << c2 << "\n";
	swap(c1, c2);
	std::cout << "after " << c1 << ", " << c2 << "\n";

	std::cout << "\n=== min test===\n";
	std::cout << "min(" << i1 << ", " << i2 << ") = " << min(i1, i2) << "\n";
	std::cout << "min(" << d1 << ", " << d2 << ") = " << min(d1, d2) << "\n";
	std::cout << "min(" << c1 << ", " << c2 << ") = " << min(c1, c2) << "\n";

	std::cout << "\n=== max test ===\n";
	std::cout << "max(" << i1 << ", " << i2 << ") = " << max(i1, i2) << "\n";
	std::cout << "max(" << d1 << ", " << d2 << ") = " << max(d1, d2) << "\n";
	std::cout << "max(" << c1 << ", " << c2 << ") = " << max(c1, c2) << "\n";
}