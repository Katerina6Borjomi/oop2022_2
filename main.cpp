#include <iostream>
#include "functions.h"

int main() {
    oop2::Nefroida nefroida;
    oop2::make_paranetr(&nefroida);
    //std::cout<<"rad - "<<nefroida.get_r()<<endl;
    oop2::menu();
    string t_str, string2, string_nef;
    int m = oop2::input_int();
    switch(m){
        case 1:
            double len;
            len = nefroida.length();
            std::cout<<"Длина кривой: "<<len<<endl;
            break;
        case 2:
            //string t_str;
            double t;
            cout<<"Введите значение параметра t"<<endl;
            t = oop2::get_d(t_str);
            double rad;
            rad = nefroida.radius(t);
            std::cout<<"Радиус кривизны при параметре t = "<<t<<" равен "<<rad<<endl;
            break;
        case 3:
            double area;
            area = nefroida.area();
            std::cout<<"Площадь, ограниченная кривой = "<<area<<endl;
            break;
        case 4:
            double x, y, fi;
            //string string2;
            cout<<"Введите значение параметра fi"<<endl;
            fi = oop2::get_d(string2);
            x = nefroida.x_param(fi);
            y = nefroida.y_param(fi);
            std::cout<<"Параметр: fi = "<<fi<<endl;
            std::cout<<"x и y соответственно: ("<<x<<", "<<y<<")"<<endl;
            break;
        case 5:
            string_nef = nefroida.equation();
            std::cout<<string_nef;
            break;
        default:
            break;
    }
    return 0;
}
