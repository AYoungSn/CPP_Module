#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string.h>

class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		
	public:
		Contact();
		void print_line(int index);
		void print_contact(int index);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string secret);
		const std::string &getFirstName(void) const;
		const std::string &getLastName(void) const;
		const std::string &getNickName(void) const;
		const std::string &getPhoneNumber(void) const;
		const std::string &getDarkestSecret(void) const;
};

#endif
