#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixNumber;
        static const int _numberBits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &f);
        Fixed &operator = (const Fixed &f);
        ~Fixed(void);
        int getBits(void) const;
        void setBits(int const raw);
};

#endif