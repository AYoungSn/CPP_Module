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

	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat() const;
	int	toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
