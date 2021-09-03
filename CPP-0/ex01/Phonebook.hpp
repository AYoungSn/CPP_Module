#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h>
# include <string.h>

class Phonebook
{
	private:
		Contact contacts[8];
		int cnt;
		int index;
	public:
		Phonebook();
		void search(void);
		void add(std::string first, std::string last, std::string nickname,
			std::string phone, std::string darkestSecret);
};

#endif
