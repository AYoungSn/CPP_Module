#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Dog test1;
	Dog test2;
	std::cout << test1.getBrain() << "\n";
	std::cout << test2.getBrain() << "\n";
	for (int i = 0; i < 100; i++) {
		std::cout << test1.getBrain()->getIdeas(i) << " = ";
		std::cout << test2.getBrain()->getIdeas(i) << std::endl;
	}
	std::cout << "=== test1 = test2 ===\n";
	test1 = test2;
	std::cout << test1.getBrain() << "\n";
	std::cout << test2.getBrain() << "\n";
	for (int i = 0; i < 100; i++) {
		std::cout << test1.getBrain()->getIdeas(i) << " = ";
		std::cout << test2.getBrain()->getIdeas(i) << std::endl;
	}
	system("leaks a.out");
}