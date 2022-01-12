#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
:Form(copy)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
:Form("RobotomyRequestForm", 72, 45, target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	Form::operator=(copy);
	return *this;
}

void RobotomyRequestForm::beExecuted() const {
	std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..." << "\n";
	if (rand() % 2 + 1 == 1) {
		std::cout << this->getTarget() << " was robotomized!" << "\n";
	} else {
		std::cout << "The robotization messed up..." << "\n";
	}
}