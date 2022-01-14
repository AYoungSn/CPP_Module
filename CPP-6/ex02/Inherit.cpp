#include "Inherit.hpp"

Base * generate(void) {
	int r = rand() % 3;

	if (r == 0) {
		return new A();
	} else if (r == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p) {
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
}

void identify(Base &p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(&p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(&p))
		std::cout << "C\n";
}