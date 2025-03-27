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

        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator >=(const Fixed &fixed) const;
        bool operator <=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed& operator++(void); //Prefix
        Fixed operator++(int); //Postix
        Fixed& operator--(void); //Prefix
        Fixed operator--(int); //Postfix

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif