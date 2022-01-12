#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm: public Form {
	private:
	virtual void beExecuted() const;
	public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm& form);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm& src);
};

#endif