#include "Form.hpp"

int main()
{
	Form *test = new Form("test", 10, 10);
	Form *toHigh;
	Form *toLow;

	std::cout << *test;

	try {
		toHigh = new Form("ToHigh", 0, 20);
	} catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try
    {
       toLow = new Form("ToHigh", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

	Bureaucrat* bob = new Bureaucrat("Bob", 5);
    
    std::cout << *bob;

    bob->signForm(*test);

    std::cout << *test;

    bob->signForm(*test);

    Form* nop = new Form("test", 1, 1);
    Bureaucrat* nopper = new Bureaucrat("Nopper", 12);

    nopper->signForm(*nop);

	delete test;
	delete bob;
	delete nop;
	delete nopper;
	return 0;
}