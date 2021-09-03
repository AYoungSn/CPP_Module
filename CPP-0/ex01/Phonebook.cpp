#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->cnt = 0;
	this->index = -1;
}

static int is_number(const char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

void Phonebook::search(void)
{
	int	i;
	std::string	input;

	i = 0;
	std::cout << "|" << std::setw(10) << "index" << "|first name|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << "\n";
	std::cout << "---------------------------------------------\n";
	while (i < this->cnt)
	{
		contacts[i].print_line(i);
		i++;
	}
	if (this->cnt > 0)
	{
		std::cout << "\nEnter index to get full page: ";
		std::cin >> input;
		int index = atoi(input.c_str());
		if (!is_number(input.c_str()) || index < 0 || index >= 8 || index > this->cnt - 1)
		{
			std::cout << "Wrong index\n";
			return ;
		}
		contacts[index].print_contact(index);
	}
}

void Phonebook::add(std::string first, std::string last, std::string nickname,
					std::string phone, std::string darkestSecret)
{
	this->cnt = this->cnt == 8 ? 8 : this->cnt + 1;
	this->index = (index + 1) % 8;
	this->contacts[this->index].setFirstName(first);
	this->contacts[this->index].setLastName(last);
	this->contacts[this->index].setNickName(nickname);
	this->contacts[this->index].setPhoneNumber(phone);
	this->contacts[this->index].setDarkestSecret(darkestSecret);
}
