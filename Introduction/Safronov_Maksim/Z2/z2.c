#include "iostream"
#include "sstream"
#include "math.h"

class Franction{
    private:
        double _number;
        bool _znak = false;
        std::string _str;
    public:
        Franction(double num){
            if (num == 0.0){
                throw "Error! num is 0!";}
            if (num<0) {_znak = true;}
            _number = abs(num); std::ostringstream strs; strs << _number; _str = strs.str();}
        void reduction_franction(int* mas){
            int a = mas[0], b = mas[1];
            while (a!=b){
                if (a > b) {a = a-b;}
                else {b = b-a;}}
            mas[0]/=a; mas[1]/=a;}
        void real_is_franction(){
            int full = std::stoi( _str ), real = 0, total = 0; bool flag = false;
            for (int i = 0; i<_str.length(); i++){
                if (flag == true){
                    char s = _str[i]; 
                    real=real*10+(int(s)-48);
                    total+=1;}
                if (_str[i] == '.'){
                    flag = true;}}
            full = full*pow(10, total)+real; 
            real = pow(10, total);
            int* mas = new int[2]; mas[0] = full, mas[1] = real;
            std::cout << "Вещественное число "; if (_znak == true) std::cout << "-";
            if (real == 1){
                std::cout << _number << " преобразуется в дробное число : ";
                if (_znak == true) std::cout << "-";
                std::cout << mas[0]<< std::endl;}
            else{
                reduction_franction(mas);
                std::cout << _number << " преобразуется в дробное число: ";
                if (_znak == true) std::cout << "-";
                std::cout << mas[0] << "/" << mas[1] << std::endl;}
            delete[] mas;}
};

int main(){
    Franction franc = Franction(3.12);
    franc.real_is_franction();
    Franction franc2 = Franction(2.1);
    franc2.real_is_franction();
}
