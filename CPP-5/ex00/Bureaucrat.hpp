#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
	std::string name;
	int grade;
	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &src);
	std::string const &getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat& bureaucrat);

#endif