#include <iostream>
#include <math.h>
#include <cstdint>

class Triagle{
    private:
        int32_t _x1; int32_t _y1;
        int32_t _x2; int32_t _y2;
        int32_t _x3; int32_t _y3;
        void check_triagle(int32_t max, int32_t a, int32_t b){
            if (max == a + b){
                return;}
            throw "Не прямоугольный треугольник!";}
    public:
        bool _z = false;
        double square_triagle()const{
            return 0.5*abs((_x1-_x2)*(_y1+_y2)+(_x2-_x3)*(_y2+_y3)+(_x3-_x1)*(_y3+_y1));}
        Triagle();
        Triagle(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3){
            check_straight(x1, y1, x2, y2, x3, y3);}
        friend std::istream& operator>>(std::istream &is, Triagle &obj);
        friend std::ostream& operator<<(std::ostream &os, const Triagle& obj);
        void check_straight(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3){
            int32_t max, a, b;
            int32_t ab = pow((x2-x1), 2) + pow((y2-y1), 2);
            int32_t ac = pow((x3-x2), 2) + pow((y3-y2), 2);
            int32_t bc = pow((x3-x1), 2) + pow((y3-y1), 2);
            if (ab>ac && ab>bc){
                max = ab; a = ac; b = bc;}
            else if (ac>ab && ac>bc){
                max = ac; a = ab; b = bc;}
            else{
                max = bc; a = ac; b = ab;}
            try{check_triagle(max, a, b);}
            catch(const char* e){
                std::cout << e << std::endl; _z = true; return;}
            _x1 = x1; _y1 = y1;
            _x2 = x2; _y2 = y2;
            _x3 = x3; _y3 = y3;}
};

Triagle::Triagle(){
    _x1 = -3; _y1 = -2;
    _x2 = 0; _y2 = -1;
    _x3 = -2; _y3 = 6;
}

std::ostream& operator<<(std::ostream &os, const Triagle& obj){
    if (obj._z == false){
        return os << "Площадь треугольника = " << obj.square_triagle();}
    else{
        return os << "";
    }
}

std::istream& operator>>(std::istream &is, Triagle &obj){
    std::cout<< "Введите координаты вершин треугольника: "<<std::endl;
    is >> obj._x1 >> obj._y1 >> obj._x2 >> obj._y2 >> obj._x3 >> obj._y3;
    obj.check_straight(obj._x1, obj._y1, obj._x2, obj._y2, obj._x3, obj._y3);
    return is;
}

int main(){
    Triagle triagle1 = Triagle();
    std::cin >> triagle1;
    std::cout<< triagle1;
}
