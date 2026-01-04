#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : raw_value(0)
{
    std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
    std::cout << "Copy constructor called" <<std::endl;
    raw_value = ref.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& ref)
{
    std::cout << "Copy assignment operator called" <<std::endl;
    if (this != &ref) //kendini kendine atamaması için //this genel anlamda isim çakışmasını önlemek için kullanılır fakat burada kullanmak zorundayım çünkü alternatifi yok
        raw_value = ref.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw_value;
}

void Fixed::setRawBits(int const raw)
{
    raw_value = raw;
}