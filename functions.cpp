#include <iostream>
#include "functions.h"
#include <cmath>
#include <cstring>
#include <sstream>
namespace oop2 {

    double get_d(string string1) {
        getline(cin, string1);
        //cout<<"string - "<<string1<<endl;
        double d = 0;
        try {
            d = stod(string1);
        }
        catch (invalid_argument &e) {
            return -1;
        }
        return d;
    }

    int input_int(){
        int a = 0;
        while(!(cin >> a).good()){
            cout << "Неправильно введено число. Попробуйте ещё раз.\n";
            //std::cin.clear();
            //std::cin.ignore(1000, '\n');
        }
        cin.clear();
        cin.ignore(1000, '\n');
        return a;
    }

    int menu() {
        cout << "1 -- Длина кривой" << std::endl;
        cout << "2 -- Радиус кривизны в зависимости от параметра t" << std::endl;
        cout << "3 -- Площадь, ограниченная кривой" << std::endl;
        cout << "4 -- Значения координат x, y в зависимости от заданного параметра" << std::endl;
        cout << "5 -- Текстовое представление уравнения нефроиды в декартовой системе координат" << std::endl;
        return 0;
    }

    double Nefroida::get_r()const{
        return this->a;
    }

    void Nefroida::set_r(double a1){
        this->a = a1;
    }

    void make_paranetr(Nefroida* nefroida){
        string string1;
        cout<< "Введите радиус\n";
        double r = get_d(string1);
        //cout<<"paramtrrrr = "<<r<<endl;
        nefroida->set_r(r);
    }

    double Nefroida::length(){
        double length1 = 24 * this->a;
        //cout<<length1<<"aaaaaa"<<endl;
        return length1;
    }

    double Nefroida::area(){
        double area1 = 12 * 3.14 * this->a * this->a;
        return area1;
    }

    double Nefroida::radius(double t){
        double rad = abs(3 * this->a * t);
        return rad;
    }

    string Nefroida::equation(){
        double param = this->a * this->a * 4;
        double param1 = pow(this->a, 4) * 108;
        stringstream string1;
        string1<<"(x^2 + y^2 - "<<param<<")^3 = "<<param1<<"y^2"<<endl;
        string string_nef = string1.str();
        //cout << string1.str();
        return string_nef;
    }

    double Nefroida::y_param(double_t fi){
        double y = 3 * this->a * cos(fi) - this->a * cos(3 * fi);
        return y;
    }

    double Nefroida::x_param(double fi){
        double x = 3 * this->a * sin(fi) - this->a * sin(3 * fi);
        return x;
    }
}