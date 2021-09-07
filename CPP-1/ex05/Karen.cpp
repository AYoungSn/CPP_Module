#include "Karen.hpp"

Karen::Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
	std::cout << "[WARN] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	void (Karen::*ptr_lst[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string lst_str[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	for(int i = 0;i<4;i++)
	{
		void (Karen::*func)(void) = ptr_lst[i];
		if (level == lst_str[i])
			(this->*func)();
	}
}
