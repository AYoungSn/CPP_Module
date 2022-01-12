#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : public Form{
private:
	virtual void beExecuted() const;
public:
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm & operator=(const RobotomyRequestForm& copy);
};

#endif