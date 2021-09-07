#include "Karen.hpp"

Karen::Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n" <<
	"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\n" <<
	"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]\n" <<
	"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]\n" <<
	"This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	std::string lst_str[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int num = -1;
	for(int i = 0;i<4;i++)
	{
		if (lst_str[i] == level)
			num = i;
	}
	switch(num)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
