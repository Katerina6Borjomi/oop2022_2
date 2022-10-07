//
// Created by user on 06.10.22.
//

#ifndef OOP2_FUNCTIONS_H
#define OOP2_FUNCTIONS_H
using namespace std;

namespace oop2 {

    class Nefroida {
    private:
        double a;

    public:
        //Nefroida(double a1 = 1) : a(a1) {};
        Nefroida(){
            a = 1;
        }

        double get_r() const;
        void set_r(double a1);
        double length();
        double radius(double t);
        //значения x И y в зависимости от параметра  t
        double y_param(double fi);
        double x_param(double fi);
        double area();
        string equation();

    };

    int menu();
    double get_d(string string1);
    int input_int();
    void make_paranetr(Nefroida* nefroida);
}

#endif //OOP2_FUNCTIONS_H
