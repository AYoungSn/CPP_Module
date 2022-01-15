#include "ScalarConversion.hpp"

static int ft_strlen(std::string const &s) {
	int i = 0;
	while (s[i])
		i++;
	return i;
}

ScalarConversion::ScalarConversion() {}
ScalarConversion::ScalarConversion(const ScalarConversion &) {}
ScalarConversion::~ScalarConversion() {}
ScalarConversion & ScalarConversion::operator=(const ScalarConversion & src) {
	(void)src;
	return *this;
}

float ScalarConversion::toLiteral(std::string const &val) {
	float value;

	try {
		std::cout << "size: " << ft_strlen(val) << "\n";
		if (ft_strlen(val) == 3 
			&& val[0] == '\''
			&& val[2] == '\'') {
			std::cout << "val: " << val[1] << "\n";
			return static_cast<float>(val[1]);
		}
		value = std::stof(val);
	} catch(std::exception &e) {
		throw ScalarConversion::NotConvertible();
	}
	return value;
}

char ScalarConversion::toChar(float src) {
	char value = static_cast<char>(src);
	if (src == std::numeric_limits<float>::infinity()
	|| src == -std::numeric_limits<float>::infinity()
	|| std::isnan(src))
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Non displayable");
	return value;
}

float ScalarConversion::toFloat(float src) {
	return static_cast<float>(src);
}

double ScalarConversion::toDouble(float src) {
	return static_cast<double>(src);
}

int ScalarConversion::toInt(float src) {
	int i =  static_cast<int>(src);
	if (src == std::numeric_limits<float>::infinity()
		|| src == -std::numeric_limits<float>::infinity()
		|| std::isnan(src))
		throw std::string("impossible");
	return (i);
}

ScalarConversion::NotConvertible::NotConvertible() throw() {}

ScalarConversion::NotConvertible::NotConvertible(const NotConvertible& src) throw(){
	(void)src;
}

ScalarConversion::NotConvertible::~NotConvertible() throw() {}


ScalarConversion::NotConvertible &ScalarConversion::NotConvertible::operator=(const NotConvertible&) throw() {
	return *this;
}

const char* ScalarConversion::NotConvertible::what() const throw() {
	return ("Invalid format or can't be converted.");
}