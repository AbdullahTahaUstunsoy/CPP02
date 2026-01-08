#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed 
{
    private:
        int rawValue;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other); //copy constructor //var olan nesnenin aynısı olan yeni bir nesne oluşturmak için
        Fixed& operator=(const Fixed& other); //copy assignment operator //var olan bir nesneye başka  bir nesnenin değerlerini atamak için
        ~Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif