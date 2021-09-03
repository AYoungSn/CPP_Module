#include "Phonebook.hpp"
#include <string.h>

int main()
{
	Phonebook phonebook;
	std::string command;
	
	while (1)
	{
		std::cout << "Enter command ADD | SEARCH | EXIT\n";
		std::cin >> command;
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
		{
			std::string first, last, nick, phone, secret;
			std::cout << "Enter a first name: ";
			std::cin >> first;
			std::cout << "Enter a last name: ";
			std::cin >> last;
			std::cout << "Enter a nickname: ";
			std::cin >> nick;
			std::cout << "Enter a phone number: ";
			std::cin >> phone;
			std::cout << "Enter a darkest secret: ";
			std::cin >> secret;
			phonebook.add(first, last, nick, phone, secret);
		}
		else if (command == "SEARCH")
			phonebook.search();
		std::cout << "\n";
	}
}