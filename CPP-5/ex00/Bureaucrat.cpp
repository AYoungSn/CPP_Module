#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	name = "none";
	grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	operator=(src);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
	name = src.getName();
	grade = src.getGrade();
	return *this;
}

std::string const &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increaseGrade() {
	if (this->grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else
		this->grade -= 1;
}
void Bureaucrat::decreaseGrade() {
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException&) throw() {
	return *this;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException&) throw() {
	return *this;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "\n";
	return out;
}