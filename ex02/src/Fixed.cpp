#include "../inc/Fixed.hpp"

// Orthodox Canonical Class Form //

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

// Additional Constructors //

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixPointNumber = value << _numberFracBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixPointNumber = roundf(value *(1 << _numberFracBits));
}

// Getters and Setters //

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

// Convertion Functions //

float Fixed::toFloat(void) const
{
    return(static_cast<float>(_fixPointNumber)/(1 << _numberFracBits));
}

int Fixed::toInt(void) const
{
    return(_fixPointNumber >> _numberFracBits);
}

// Overload << Operator //

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return(out);
}

// Overload Comparision Operators //

bool Fixed::operator>(const Fixed &fixed) const
{
    return (_fixPointNumber > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (_fixPointNumber < fixed.getRawBits());
}

bool Fixed::operator >=(const Fixed &fixed) const
{
    return (_fixPointNumber >= fixed.getRawBits());
}

bool Fixed::operator <=(const Fixed &fixed) const
{
    return (_fixPointNumber <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (_fixPointNumber == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return !(*this == fixed);
}

// Overload Arithmetic Operators //

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed tmp;

    tmp.setRawBits(_fixPointNumber + fixed.getRawBits());
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(_fixPointNumber - fixed.getRawBits());
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(static_cast<int>((static_cast<long>(_fixPointNumber * fixed.getRawBits())) / (1 << _numberFracBits)));
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(static_cast<int>((static_cast<long>(_fixPointNumber * (1 << _numberFracBits))) / fixed.getRawBits()));
    return (tmp);
}

// Overload Increment/Decrement Operators //

Fixed& Fixed::operator++(void)
{
    this->_fixPointNumber++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++(*this);
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    this->_fixPointNumber--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --(*this);
    return (tmp);
}

// Min / Max Functions //

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}