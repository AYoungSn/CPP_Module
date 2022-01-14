#include "Inherit.hpp"

int main() {
	srand(time(0));
	A a;
	B b;
	C c;
	Base *base = generate();

	identify(base);

	std::cout << "Pointers:\n";
	identify(&a);
	identify(&b);
	identify(&c);

	std::cout << "References:\n";
	identify(a);
	identify(b);
	identify(c);
}