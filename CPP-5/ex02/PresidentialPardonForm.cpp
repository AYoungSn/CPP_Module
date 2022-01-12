#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
:Form("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
:Form(form){}

PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
	Form::operator=(src);
	return *this;
}

void PresidentialPardonForm::beExecuted() const {
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << "\n";
}