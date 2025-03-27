#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixPointNumber = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
	_fixPointNumber = other.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	_fixPointNumber = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixPointNumber = raw;
}