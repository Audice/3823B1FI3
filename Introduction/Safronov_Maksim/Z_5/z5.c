#include "iostream"
#include "cstdint"
#include "math.h"

class Vector{
    public:
        int32_t _x;
        int32_t _y;
        Vector(int32_t x, int32_t y){
            _x = x; _y = y;}
        void print(){
            std::cout << "x = " << _x << "; y = " << _y;}
        bool operator == (const Vector& vector) const{
            return (_x == vector._x && _y == vector._y);}
        bool operator != (const Vector& vector) const{
            if (_x == vector._x){
                if (_y == vector._y){
                    return false;}
                return true;}
            return true;}
        bool operator < (const Vector& vector) const{
            if (_x >= vector._x){
                if (_y >= vector._y){
                    return false;}
                return true;}
            return true;}
        bool operator > (const Vector& vector) const{
            if (_x <= vector._x){
                if (_y <= vector._y){
                    return false;}
                return true;}
            return true;}
        bool operator <= (const Vector& vector) const{
            if (_x >= vector._x){
                if (_y > vector._y){
                    return false;}
                return true;}
            return true;}
        bool operator >= (const Vector& vector) const{
            if (_x <= vector._x){
                if (_y < vector._y){
                    return false;}
                return true;}
            return true;}
        Vector& operator++(){
            this->_x++; this-> _y++;
            return *this;}  

        Vector operator++(int value){
            Vector temp(*this);
            this->_x++; this-> _y++;
            return temp;
        }  

        Vector& operator--(){
            this->_x--; this->_y--;
            return *this;}
        
        Vector operator--(int value){
            Vector temp(*this);
            this->_x--; this-> _y--;
            return temp;
        }  

        Vector operator^(const Vector& vector)const{
            int32_t x1 = pow(_x,vector._x); 
            int32_t y1 = pow(_y,vector._y);
            Vector result = Vector(x1, y1);
            return result;}
        Vector operator-() const{
            int32_t x = -_x; int32_t y = -_y;
            return Vector(x, y);}
};

int main(){
    Vector vector1 = Vector(0, 1);
    Vector vector2 = Vector(1, 3);
    vector1 = ++vector2;
    vector1.print();
}

    
    
