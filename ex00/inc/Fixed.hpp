#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixPointNumber;
        static const int _numberFracBits = 8;

    public:
        Fixed(void); //default constructor
        Fixed(const Fixed &other); //copy constructor
        Fixed& operator = (const Fixed &other); //copy assignment
        ~Fixed(void); //destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif