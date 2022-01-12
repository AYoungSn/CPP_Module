#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int exec_grade, std::string const & target) {
	if (signGrade <= 0 || exec_grade <= 0)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	this->name = name;
	this->signGrade = signGrade;
	this->exec_grade = exec_grade;
	this->is_signed = false;
	this->target = target;
}

Form::Form(const Form& copy){
	if (copy.getSignGrade() <= 0 || copy.getExecGrade() <=0)
		throw Form::GradeTooHighException();
	else if (copy.getSignGrade() > 150 || copy.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->name = copy.getName();
	this->is_signed = copy.getIsSigned();
	this->signGrade = copy.getSignGrade();
	this->exec_grade = copy.getExecGrade();
	this->target = copy.getTarget();
}

Form::~Form() {
}

Form& Form::operator=(const Form& copy) {
	if (copy.getSignGrade() <= 0 || copy.getExecGrade() <=0)
		throw Form::GradeTooHighException();
	else if (copy.getSignGrade() > 150 || copy.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->name = copy.getName();
	this->is_signed = copy.getIsSigned();
	this->signGrade = copy.getSignGrade();
	this->exec_grade = copy.getExecGrade();
	this->target = copy.getTarget();
	return *this;
}

const std::string &Form::getName() const {
	return name;
}

bool Form::getIsSigned()const {
	return is_signed;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecGrade()const {
	return exec_grade;
}

void Form::beSigned(Bureaucrat &Bureaucrat) {
	if (Bureaucrat.getGrade() <= this->signGrade)
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

const std::string & Form::getTarget() const {
	return this->target;
}

void Form::beExecuted() const {}

void Form::execute(Bureaucrat const &executor) const {
	if (!this->is_signed)
		throw std::string("the form is not signed.");
	else if (executor.getGrade() > this->exec_grade)
		throw std::string("grade is too low.");
	this->beExecuted();
}

std::ostream &operator<<(std::ostream &out, const Form& form) {
	out << form.getName() << " is ";
	if (form.getIsSigned() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	out << "it is signable at grade: " << form.getSignGrade();
	out << " and executable at grade: " << form.getExecGrade() << ".\n";
	return out;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(const GradeTooHighException&) throw() {
	return *this;
}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too High for Form.";
}
Form::GradeTooLowException::GradeTooLowException() throw() {}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(const GradeTooLowException&) throw() {
	return *this;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low for Form.";
}