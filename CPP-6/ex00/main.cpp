#include "ScalarConversion.hpp"

int main(int argc, char **argv) {
	std::string argu;
	float val;

	if (argc == 2) {
		argu = argv[1];
		ScalarConversion conv;

		try {
			val = conv.toLiteral(argu);
		} catch(std::exception &e) {
			std::cout << "Error: " << e.what() << "\n";
			return (1);
		}
		try {
			char c = conv.toChar(val);
			std::cout << "char: '" << c << "'\n";
		} catch(std::string &e) {
			std::cout << "char: "  << e << "\n";
		}
		try {
			std::cout << "int: " << conv.toInt(val) << "\n";
		} catch(std::string &e) {
			std::cout << e << "\n";
		}
		if (val - (int)(val) != (float)0) {
			std::cout << "float: " << conv.toFloat(val) << "f\n";
		} else {
			std::cout << "float: " << conv.toFloat(val) << ".0f\n";
		}
		
		double d = conv.toDouble(val);
		if (d - (int)d != (double)0)
			std::cout << "double: " << conv.toDouble(val) << "\n";
		else
			std::cout << "double: " << conv.toDouble(val) << ".0\n";
	}
	else
		std::cout << "arguments error\n";
}