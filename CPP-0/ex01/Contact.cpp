#include "Contact.hpp"

Contact::Contact()
{
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string secret)
{
	this->darkestSecret = secret;
}

const std::string &Contact::getFirstName(void) const
{
	return this->firstName;
}

const std::string &Contact::getLastName(void) const
{
	return this->lastName;
}

const std::string &Contact::getNickName(void) const
{
	return this->nickName;
}

const std::string &Contact::getPhoneNumber(void) const
{
	return this->phoneNumber;
}

const std::string &Contact::getDarkestSecret(void) const
{
	return this->darkestSecret;
}

static std::string print_format(std::string s)
{
	if (s.size() > 10)
	{
		s = s.substr(0, 9);
		s.append(".");
	}
	return (s);
}

void Contact::print_line(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << print_format(this->firstName) << "|";
	std::cout << std::setw(10) << print_format(this->lastName) << "|";
	std::cout << std::setw(10) << print_format(this->nickName) << "|\n";
}

void Contact::print_contact(int index)
{
	std::cout << "index: " << index << "\n";
	std::cout << "first name: " << firstName << "\n";
	std::cout << "last name: " << lastName << "\n";
	std::cout << "nickname: " << nickName << "\n";
	std::cout << "phone number: " << phoneNumber << "\n";
	std::cout << "darkest secret: " << darkestSecret << "\n";
}
