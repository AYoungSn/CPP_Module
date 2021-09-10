#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed(int const n);
	Fixed(float const num);
	virtual ~Fixed();

	Fixed& operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat() const;
	int	toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
