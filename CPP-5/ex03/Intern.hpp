#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	Form * createPresidentialPardonForm(std::string const &target);
	Form * createRobotomyRequestForm(std::string const & target);
	Form * createShrubberyCreationForm(std::string const &target);
public:
	Intern();
	Intern(const Intern &copy);
	virtual ~Intern();
	Intern & operator=(const Intern &copy);
	Form * makeForm(std::string const& name, std::string const &target);
};

#endif