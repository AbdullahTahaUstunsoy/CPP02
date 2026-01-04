#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>

class Fixed {
    private:
        int raw_value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed(const int intValue);
        Fixed(const float floatValue);
        float toFloat(void) const;
        int toInt(void) const;

};


#endif