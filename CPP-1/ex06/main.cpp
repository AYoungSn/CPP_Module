#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	std::string str(argv[1]);
	Karen karen = Karen();
	if (str == "DEBUG")
	{
		karen.complain("DEBUG");
		std::cout << "\n";
	}
	if (str == "DEBUG" || str == "INFO")
	{
		karen.complain("INFO");
		std::cout << "\n";
	}
	if (str == "DEBUG" || str == "INFO" || str == "WARNING")
	{
		karen.complain("WARNING");
		std::cout << "\n";
	}
	if (str == "DEBUG" || str == "INFO" || str == "WARNING" || str == "ERROR")
	{
		karen.complain("ERROR");
		std::cout << "\n";
	}
	else
		karen.complain(str);
	return (0);
}
