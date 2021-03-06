#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
	virtual void beExecuted() const;
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(Form &form);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
};

#endif