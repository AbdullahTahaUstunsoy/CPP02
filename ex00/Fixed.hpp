#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int raw_value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& ref);    
        Fixed& operator=(const Fixed& ref);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif

