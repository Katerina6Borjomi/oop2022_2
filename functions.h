#ifndef OOP2_FUNCTIONS_H
#define OOP2_FUNCTIONS_H
using namespace std;

namespace oop2 {

    class Nefroida {
    private:
        double a;

    public:
        Nefroida(double a1 = 1) : a(a1) {};
        //Nefroida(){
        //    a = 1;
        //}

        double get_r() const;
        void set_r(double a1);
        double length()const;
        double radius(double t)const;
        double y_param(double fi)const;
        double x_param(double fi)const;
        double area()const;
        string equation()const;

    };

    int menu();
    double get_d(string string1);
    int input_int();
    void make_paranetr(Nefroida* nefroida);
}

#endif //OOP2_FUNCTIONS_H
