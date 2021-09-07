#include <iostream>
#include <fstream>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	std::string s1(argv[2]), s2(argv[3]);
	std::ifstream in(argv[1]);
	if (in.fail())
	{
		std::cout << "File does not exist\n";
		return (0);
	}
	std::string str;
	std::string rep(argv[1]);
	std::ofstream out(rep + ".replace");
	while (getline(in, str))
	{
		unsigned long pos = str.find(s1);
		while (pos != (unsigned long)std::string::npos)
		{
			str.replace(pos, s1.length(), s2);
			pos = str.find(s1);
		}
		out << str << "\n";
	}
	in.close();
	out.close();
}