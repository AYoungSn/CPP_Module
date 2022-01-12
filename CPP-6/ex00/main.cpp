#include "ScalarConversion.hpp"

int main(int argc, char **argv) {
	std::string argu;
	float val;

	if (argc == 2) {
		std::cout << "1\n";
		argu = argv[1];
		std::cout << "2\n";
		ScalarConversion conv;
		try {
			val = conv.toLiteral(argu);
		} catch(std::exception &e) {
			std::cout << "Error: " << e.what() << "\n";
			return (1);
		}
		std::cout << "3\n";
		try {
			char c = conv.toChar(val);
			std::cout << "char: '" << c << "'\n";
		} catch(std::exception &e) {
			std::cout << "char: "  << e.what() << "\n";
		}
		std::cout << "4\n";
	}
	
}