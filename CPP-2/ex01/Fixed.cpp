#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	value = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->value = (n << Fixed::bits);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(num * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called\n";
	this->value = fixed.getRawBits();
	return *this;
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
