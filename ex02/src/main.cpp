#include "../inc/Fixed.hpp"

// int main( void ) 
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
    
//     std::cout << b << std::endl;
    
//     std::cout << Fixed::max( a, b ) << std::endl;
    
//     return 0;
// }

int main(void) 
{
    // Basic arithmetic operations
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10);
    Fixed d(2.5f);

    std::cout << "Initial values:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << std::endl;

    // Testing increment and decrement
    std::cout << "Increment and decrement tests:" << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << std::endl;

    // Arithmetic operations
    std::cout << "Arithmetic operations:" << std::endl;
    std::cout << "c + d = " << (c + d) << std::endl;
    std::cout << "c - d = " << (c - d) << std::endl;
    std::cout << "c * d = " << (c * d) << std::endl;
    std::cout << "c / d = " << (c / d) << std::endl;
    std::cout << std::endl;

    // Comparison operators
    std::cout << "Comparison tests:" << std::endl;
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;
    std::cout << std::endl;

    // Min and max tests
    std::cout << "Min/Max tests:" << std::endl;
    std::cout << "Min(c, d) = " << Fixed::min(c, d) << std::endl;
    std::cout << "Max(c, d) = " << Fixed::max(c, d) << std::endl;
    std::cout << "Min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "Max(a, b) = " << Fixed::max(a, b) << std::endl;
    std::cout << std::endl;

    return 0;
}