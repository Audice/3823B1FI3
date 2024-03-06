#include <cstdint>
#include <iostream>
#include <math.h>

class Fraction{
private:
    int32_t _numerator;
    uint32_t _denominator;

public:
    Fraction();
    Fraction(double num);

    Fraction(int32_t numerator, uint32_t denominator){

        _numerator = numerator;
        if (denominator == 0)
            throw "Error! Denominator is 0!";
        
        _denominator = denominator;
    }

    Fraction(const Fraction& fraction);

    Fraction& operator=(const Fraction& tmp){
        _numerator = tmp._numerator;
        _denominator = tmp._denominator;
        return *this;
    }

    Fraction operator+(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _denominator 
                                + _numerator * fraction._denominator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator-(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _denominator 
                                - _numerator * fraction._denominator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator*(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _numerator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }

    Fraction operator/(const Fraction& fraction)const{
        int32_t new_numerator = fraction._denominator * _numerator; 
        uint32_t new_denominator = _denominator * fraction._numerator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator+(const int num) const {
        int32_t new_numerator = _numerator + num * _denominator;
        
        Fraction result = Fraction(new_numerator, _denominator);
        return result;  
    }
    Fraction operator-(const int num) const {
        int32_t new_numerator = _numerator - num * _denominator;
        
        Fraction result = Fraction(new_numerator, _denominator);
        return result;  
    }
    bool operator>(const Fraction& fraction) const{
        if (double(_numerator)/_denominator>double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator<(const Fraction& fraction) const{
        if (double(_numerator)/_denominator<double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator>=(const Fraction& fraction) const{
        if (double(_numerator)/_denominator>=double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator<=(const Fraction& fraction) const{
        if (double(_numerator)/_denominator<=double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator==(const Fraction& fraction) const{
        if (double(_numerator)/_denominator==double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator!=(const Fraction& fraction) const{
        if (double(_numerator)/_denominator!=double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    Fraction& operator++(){
        _numerator+=_denominator;
        return *this;}
    Fraction operator++(int value){
        Fraction temp = *this;
        _numerator+=_denominator;
        return temp;}
    Fraction operator--(){
        _numerator-=_denominator;
        return *this;}
    Fraction operator--(int value){
        Fraction temp = *this;
        _numerator-=_denominator;
        return temp;}
    Fraction operator^(const int num) const{
        int32_t new_numerator = pow(_numerator, num);
        int32_t new_denominator = pow(_denominator, num);
        return Fraction(new_numerator, new_denominator);
    }
    Fraction operator~() const{
        int32_t new_numerator = -_numerator;
        return Fraction(new_numerator, _denominator);
    }

    operator double() const 
    { 
        return static_cast<double>(_numerator) / _denominator; 
    }

    bool IsValid;

    void SetNumerator(int32_t new_numerator);
    inline int32_t GetNumerator() const
    { 
        return _numerator; 
    }

    void SetDenominator(uint32_t new_denominator);
    inline uint32_t GetDenominator() const 
    { 
        return _denominator; 
    }

    inline double GetDouble() { return _numerator / _denominator; }

    inline void Print(){
        std::cout << _numerator << "/" << _denominator << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &os, const Fraction &fraction)
    {
        return os << fraction._numerator << "/" << fraction._denominator;
    }

};

void Fraction::SetDenominator(uint32_t new_denominator){
    if (new_denominator != 0)
        _denominator = new_denominator;
}

void Fraction::SetNumerator(int32_t new_numerator){
    _numerator = new_numerator;
}

Fraction::Fraction(){

    _numerator = 0;
    _denominator = 1;
}

Fraction::Fraction(const Fraction& fraction) {

    _numerator = fraction._numerator;
    _denominator = fraction._denominator;
}

int main(){
    int32_t a; int32_t b;
    std::cin >> a; std::cout << std::endl; std::cin >> b; std::cout << std::endl;
    Fraction fraction1 = Fraction(a, b);
    std::cin >> a; std::cout << std::endl; std::cin >> b; std::cout << std::endl;
    Fraction fraction2 = Fraction(a, b);
    Fraction fraction3 = ~fraction1;
    bool s = fraction1 == fraction2;
    std::cout << s << std::endl;
    s = fraction1 != fraction2;
    std::cout << s << std::endl;
    s = fraction1 > fraction2;
    std::cout << s << std::endl;
    s = fraction1 < fraction2;
    std::cout << s << std::endl;
    s = fraction1 >= fraction2;
    std::cout << s << std::endl;
    s = fraction1 <= fraction2;
    std::cout << s << std::endl;
    fraction3.Print();
    fraction3 = ++fraction1;
    fraction3.Print(); fraction1.Print();
    fraction3 = fraction2++;
    fraction3.Print(); fraction2.Print();
    std::cin >> a; std::cout << std::endl; std::cin >> b; std::cout << std::endl;
    Fraction fraction4 =  Fraction(a, b)^3;
    fraction4.Print();
}
