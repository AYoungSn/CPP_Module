#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) {
	(void)copy;
}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &copy) {
	(void)copy;
	return *this;
}

Form *Intern::createPresidentialPardonForm(std::string const &target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string const & target) {
	return new RobotomyRequestForm(target);
}
Form *Intern::createShrubberyCreationForm(std::string const &target) {
	return new ShrubberyCreationForm(target);
}

Form * Intern::makeForm(std::string const& name, std::string const &target) {
	Form* (Intern::*func[])(std::string const & target) = {
		&Intern::createPresidentialPardonForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createShrubberyCreationForm
	};
	std::string lst[] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < 3; i++){
		if (lst[i] == name) {
			Form * form = (this->*(func[i]))(target);
			std::cout << "Intern creates " << form->getName() << "\n";
			return form;
		}
	}
	std::cout << "Intern not creates\n";
	return NULL;
}
