#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string name;
	bool is_signed;
	int signGrade;
	int exec_grade;
public:
	Form(const std::string &name, int signGrade, int exec_grade);
	Form(const Form&);
	virtual ~Form();
	Form& operator=(const Form& src);
	const std::string &getName() const;
	bool getIsSigned()const;
	int getSignGrade() const;
	int getExecGrade()const;

	void beSigned(Bureaucrat &Bureaucrat);
	void execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public std::exception{
		public:
		GradeTooHighException() throw();
		GradeTooHighException(const GradeTooHighException&) throw();
		GradeTooHighException& operator=(const GradeTooHighException&) throw();
		virtual ~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
		GradeTooLowException() throw();
		GradeTooLowException(const GradeTooLowException&) throw();
		GradeTooLowException& operator=(const GradeTooLowException&) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form& form);

#endif