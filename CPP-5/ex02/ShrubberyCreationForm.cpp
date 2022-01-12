#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) 
:Form("ShrubberyCreationForm", 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(Form &form) 
: Form(form)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
	Form::operator=(src);
}