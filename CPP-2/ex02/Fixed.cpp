#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(int const n)
{
	this->value = (n << Fixed::bits);
}

Fixed::Fixed(float const num)
{
	this->value = roundf(num * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;	
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed val(*this);
	val.setRawBits(this->getRawBits() + other.getRawBits());
	return val;
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);
	val.setRawBits(this->getRawBits() - other.getRawBits());
	return val;
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);
	val.setRawBits((this->getRawBits() * other.getRawBits())/(1<< Fixed::bits));
	return val;
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);
	val.setRawBits((this->getRawBits() * (1 << Fixed::bits)) / other.getRawBits());
	return val;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return b;
	return a;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return b;
	return a;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	return a;
}

int Fixed::getRawBits(void) const
{
	return value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat() const
{
	return ((float)value / (float)(1 << Fixed::bits));
}

int	Fixed::toInt()const
{
	return value >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}
