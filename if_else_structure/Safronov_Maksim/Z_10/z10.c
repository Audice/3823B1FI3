#include <cstdint>
#include <iostream>
#include "sstream"
#include <math.h>

class Fraction{
private:
    long long int _numerator;
    long long int _denominator;
public:
    Fraction();

    Fraction(long long int numerator, long long int denominator){

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
        long long int new_numerator = fraction._numerator * _denominator 
                                + _numerator * fraction._denominator; 
        long long int new_denominator = _denominator * fraction._denominator;
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator-(const Fraction& fraction)const{
        long long int new_numerator = _numerator * fraction._denominator 
                                - fraction._numerator * _denominator; 
        long long int new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator*(const Fraction& fraction)const{
        long long int new_numerator = fraction._numerator * _numerator; 
        long long int new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }

    Fraction operator*(const int n)const{
        long long int new_numerator = _numerator*n;
        Fraction result = Fraction(new_numerator, _denominator);
        return result;
    }

    Fraction operator/(const Fraction& fraction)const{
        long long int new_numerator = fraction._denominator * _numerator; 
        long long int new_denominator = _denominator * fraction._numerator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator/(Fraction& fraction){
        long long int new_numerator = fraction._denominator * _numerator; 
        long long int new_denominator = _denominator * fraction._numerator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator+(const int num) const {
        long long int new_numerator = _numerator + num * _denominator;
        
        Fraction result = Fraction(new_numerator, _denominator);
        return result;  
    }

    Fraction operator-(const int num) const {
        long long int new_numerator = _numerator - num * _denominator;
        
        Fraction result = Fraction(new_numerator, _denominator);
        return result;  
    }
    bool operator>(const Fraction& fraction) {
        if (double(_numerator)/_denominator>double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator>(const int num) {
        if (double(_numerator)/_denominator>num)
            return true;
        return false;}
    bool operator<(const Fraction& fraction) const{
        if (double(_numerator)/_denominator<double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator<(const int num) {
        if (double(_numerator)/_denominator<num)
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
    bool operator==(int num) {
        if (double(_numerator)/_denominator==double(num))
            return true;
        return false;}
    bool operator!=(const Fraction& fraction) const{
        if (double(_numerator)/_denominator!=double(fraction._numerator)/fraction._denominator)
            return true;
        return false;}
    bool operator!=(int num) {
        if (double(_numerator)/_denominator!=double(num))
            return true;
        return false;}
    Fraction& operator++(){
        _numerator+=_denominator;
        return *this;}
    Fraction operator++(int value){
        Fraction temp = *this;
        _numerator+=_denominator;
        return temp;}
    Fraction& operator--(){
        _numerator-=_denominator;
        return *this;}
    Fraction operator--(int value){
        Fraction temp = *this;
        _numerator-=_denominator;
        return temp;}
    Fraction operator^(const int num) const{
        long long int new_numerator = pow(_numerator, num);
        long long int new_denominator = pow(_denominator, num);
        return Fraction(new_numerator, new_denominator);
    }
    Fraction operator~() const{
        int32_t new_numerator = -_numerator;
        return Fraction(new_numerator, _denominator);
    }
    Fraction operator-() {
        int32_t new_numerator = -_numerator;
        return Fraction(new_numerator, _denominator);}
    Fraction sqr(const long long int num){
        int znak = 0;
        if (num<0){znak = 1;}
        long double new_numerator = sqrt(double(abs(num)));
        return fraction_reduction_sqr(new_numerator, znak);}
    Fraction fraction_reduction_sqr(long double num, int znak){
        long double number = num;
        std::ostringstream strs; strs << number; std::string _str = strs.str();
        long long int full = std::stoi( _str ), real = 0, total = 0; bool flag = false;
        for (int i = 0; i<_str.length(); i++){
            if (flag == true){
                char s = _str[i]; 
                real=real*10+(int(s)-48);
                total+=1;}
            if (_str[i] == '.'){
                flag = true;}}
        full = full*pow(10, total)+real; real = pow(10, total); long long int a = full, b = real;
        while (a!=b){
                if (a > b) {a = a-b;}
                else {b = b-a;}}
            full/=a; real/=a;
        if (znak == 1){full = -full;}
        return Fraction(full, real);}
    Fraction fraction_reduction(const Fraction& obj){
        int8_t znak = 0;
        if (obj._numerator < 0){
            znak = 1;}
        long long int a = abs(obj._numerator), b = obj._denominator, full = abs(a), real = b; 
        while (a!=b){
            if (a > b) {a = a-b;}
            else {b = b-a;}}
        full/=a; real/=a;
        if (znak == 1){full = -full;}
        return Fraction(full, real);
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

    ~Fraction(){
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


class Complex{
private:
    Fraction _re;
    Fraction _im;
public:
    Complex(){
        _re = Fraction(0, 1);
        _im = Fraction(0, 1);
    }
    Complex(Fraction re, Fraction im){
        _re = re; _im = im;
    }

    Complex operator+(const Complex& complex) const{
        Fraction new_re = complex._re + _re;
        Fraction new_im = complex._im + _im;
        Complex res = Complex(new_re, new_im);
        return res;
    }

    Complex operator-(const Complex& complex) const{
        Fraction new_re = _re - complex._re;
        Fraction new_im = _im - complex._im;
        return Complex(new_re, new_im);
    }

    Complex operator*(const Complex& complex) const 
    {
        Fraction new_re = _re * complex._re - _im * complex._im;
        Fraction new_im = _re * complex._im + complex._re * _im;

        return Complex(new_re, new_im);
    }

    Complex operator/(const Complex& complex) const 
    {
        Fraction new_re = (_re * complex._re + _im * complex._im) / (complex._im * complex._im + complex._re * complex._re);
        Fraction new_im = (_im * complex._re - complex._im * _re) / (complex._im * complex._im + complex._re * complex._re);

        return Complex(new_re, new_im);
    }
    
    friend std :: ostream& operator<<(std::ostream& os,const Complex comp){
        os << comp._re;
        if (comp._im < 0){
            os << "+";}
        else{
            os << " +- ";}
        os << comp._im << "*i" << std :: endl;
        return os;
    }
};

class Quadratic{
    private:
        Fraction _a;
        Fraction _b;
        Fraction _c;
        Complex comp;
        Fraction root_equation(Fraction a, Fraction b){
            Fraction x = (-b)/(a*2); x = x.fraction_reduction(x);
            return x;}
        Fraction* roots_equation(Fraction a, Fraction b, Fraction dis){
            Fraction x1 = ((-b)+dis)/(a*2); 
            x1 = x1.fraction_reduction(x1);
            Fraction x2 = ((-b)-dis)/(a*2); 
            x2 = x2.fraction_reduction(x2);
            Fraction* mas = new Fraction[2]; mas[0] = x1; mas[1] = x2;
            return mas;}
        Complex compl_roots_equation(Fraction a, Fraction b, Fraction dis){
            Fraction re = (-b)/(a*2); re = re.fraction_reduction(re);
            Fraction im = dis/(a*2); im = im.fraction_reduction(im);
            Complex comp = Complex(re, im);
            return comp;}
    public:
        Quadratic(){
            _a = Fraction(1,1);
            _b = Fraction(-4,1);
            _c = Fraction(4,1);
        };
        Quadratic(Fraction a, Fraction b, Fraction c){
            _a = a; _b = b; _c = c;}
        Fraction search_discriminant(Fraction a, Fraction b, Fraction c){
            Fraction discriminant = (b^2)-(a*c*4);
            if (discriminant != 0){
                Fraction discriminant_n = discriminant.sqr(discriminant.GetNumerator());
                Fraction discriminant_d = discriminant.sqr(discriminant.GetDenominator());
                Fraction sqrt_discriminant = discriminant_n/discriminant_d;
                return sqrt_discriminant;}
            return Fraction(0, 1);}
        friend std::ostream& operator<<(std::ostream &os, Quadratic& quadratic){
            Fraction b = quadratic.search_discriminant(quadratic._a, quadratic._b, quadratic._c);
            if (b == 0){
                return os << "Корень x = " << quadratic.root_equation(quadratic._a, quadratic._b);}
            if (b > 0){
                return os << "Корень x1 = " << quadratic.roots_equation(quadratic._a, quadratic._b, b)[0] << "; x2 = " << quadratic.roots_equation(quadratic._a, quadratic._b, b)[1];}
            else{
                return os << "x1,2 = " << quadratic.compl_roots_equation(quadratic._a, quadratic._b, b);}
        }
};

double operator+(int number, const Fraction& fraction){
    int32_t new_num = number * fraction.GetDenominator() 
        + fraction.GetNumerator();
    return static_cast<double>(new_num) / fraction.GetDenominator();
}

int main(){
    int32_t a, b;
    std::cout << "a = "; std::cin >> a >> b;
    Fraction fraction1 = Fraction(a, b);
    std::cout << "b = "; std::cin >> a >> b;
    Fraction fraction2 = Fraction(a, b);
    std::cout << "c = "; std::cin >> a >> b;
    Fraction fraction3 = Fraction(a, b);
    Quadratic s = Quadratic(fraction1, fraction2, fraction3);
    std::cout<< s;
}
