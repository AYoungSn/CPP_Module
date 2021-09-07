#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "address\n";
	std::cout << "str: " << &str;
	std::cout << "\nptr: " << ptr;
	std::cout << "\nref: " << &ref << "\n";

	std::cout << "string\n";
	std::cout << "ptr: " << *ptr << "\n";
	std::cout << "ref: " << ref << "\n";
	return (0);
}