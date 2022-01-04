#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bu = new Bureaucrat("Bob", 2);
	Bureaucrat *st = new Bureaucrat("Cafe", 149);

	try {
		std::cout << *bu << "\n";
		bu->increaseGrade();
		std::cout << "upgrade:\n" << *bu << "\n";
		bu->increaseGrade();
		std::cout << "1 exception does not work\n";
	} catch(std::exception &e) {
		std::cerr << "1 Exception: " << e.what() << "\n";
	}

	try {
		std::cout << *st << "\n";
		st->decreaseGrade();
		std::cout << "down:\n" << *st << "\n";
		st->decreaseGrade();
		std::cout << "2 exception does not work\n";
	} catch(std::exception &e) {
		std::cerr << "2 Exception: " << e.what() << "\n";
	}

	delete st;
	delete bu;

	return 0;
}