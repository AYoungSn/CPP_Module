#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <limits>

class ScalarConversion {
public:
	ScalarConversion();
	ScalarConversion(const ScalarConversion &);
	virtual ~ScalarConversion();
	ScalarConversion & operator=(const ScalarConversion & src);

	float toLiteral(std::string const &val);
	char toChar(float src);
	double toDouble(float src);
	float toFloat(float src);
	int toInt(float src);

	class NotConvertible : public std::exception {
		public:
			NotConvertible() throw();
			NotConvertible(const NotConvertible& src) throw();
			virtual ~NotConvertible() throw();
			NotConvertible &operator=(const NotConvertible&) throw();
			virtual const char* what() const throw();
	};
};

#endif