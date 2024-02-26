#pragma once
#include <iostream>
#include <math.h>

class Triagle{
    private:
        int32_t _x1;int32_t _y1;
        int32_t _x2; int32_t _y2;
        int32_t _x3; int32_t _y3;
        int check_triagle(double max, double a, double b){
            if (pow(max,2) == pow(a, 2)+pow(b,2)){
                return 1;}
            throw "Не прямоугольный треугольнки!";}
    public:
        Triagle();
        Triagle(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3){
            double max, a, b;
            double ab = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
            double ac = sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));
            double bc = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
            if (ab>ac && ab>bc){
                max = ab; a = ac; b = bc;}
            else if (ac>ab && ac>bc){
                max = ac; a = ab; b = bc;}
            else{
                max = bc; a = ac; b = ab;}
            if (check_triagle(max, a, b) == 1){
                int32_t _x1 = x1; int32_t _y1 = y1;
                int32_t _x2 = x2; int32_t _y2 = y2;
                int32_t _x3 = x3; int32_t _y3 = y3;}
            std::cout << "Площадь треугольника = " <<square_triagle(_x1, _y1, _x2, _y2, _x3, _y3);}
        double square_triagle(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3){
            return 0.5*abs((x1-x2)*(y1+y2)+(x2-x3)*(y2+y3)+(x3-x1)*(y3+y1));}
        
}; 

std::ostream& operator<<(std::ostream &out, const Triagle& triagle){
    return 
}
