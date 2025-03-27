#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixPointNumber;
        static const int _numberFracBits = 8;

    public:
        Fixed(void); //default constructor
        Fixed(const int value); //constructor int
        Fixed(const float value); //constructor float
        Fixed(const Fixed &other); //copy constructor
        Fixed& operator = (const Fixed &other); //copy assignment
        ~Fixed(void); //destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif