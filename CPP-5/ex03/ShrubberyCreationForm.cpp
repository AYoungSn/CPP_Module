#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) 
:Form("ShrubberyCreationForm", 145, 137, target){
}

ShrubberyCreationForm::ShrubberyCreationForm(Form &form) 
: Form(form)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm() { }
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
	Form::operator=(src);
	return *this;
}

void ShrubberyCreationForm::beExecuted() const {
	std::ofstream file;

	file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
	std::ios::out | std::ios::app);
	if (file.is_open()) {
		file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
		file.close();
	}
}